# sesion-01b

## apuntes sesión viernes 14 de agosto

## álgebra booleana

una variable booleana solo puede tomar dos valores: `0` (falso) o `1` (verdadero). sobre ella se definen operadores lógicos básicos.

### OR (+)

el operador OR se escribe como una suma (`+`), pero su significado depende del contexto — no es una suma aritmética normal:

```
a + 0 = a
a + 1 = 1
a + a = a
a + ā = 1      (a más "a negado" siempre da 1)
```

### AND (·)

el operador AND se escribe como una multiplicación:

```
a · b
```

siempre da `0`, a no ser que **ambos** valores sean `1`.

> el signo `+` cambia de significado según el contexto.

### origen de la palabra "bug"

curiosidad histórica: el término *bug* (error de software) nació cuando literalmente se encontró una polilla (*moth*) atascada en una computadora, causó una falla lol.

---

## conteo en binario

el sistema binario usa solo dos dígitos (`0` y `1`), a diferencia del sistema decimal que usamos a diario (que usa diez: `0` al `9`). cada posición representa una potencia de 2, en vez de una potencia de 10.

### tabla de equivalencias (4 bits)

| binario | cálculo | decimal |
|---|---|---|
| 0000 | — | 0 |
| 0001 | 2⁰ | 1 |
| 0010 | 2¹ | 2 |
| 0011 | 2¹+2⁰ | 3 |
| 0100 | 2² | 4 |
| 0101 | 2²+2⁰ | 5 |
| 0110 | 2²+2¹ | 6 |
| 0111 | 2²+2¹+2⁰ | 7 |
| 1000 | 2³ | 8 |
| 1001 | 2³+2⁰ | 9 |
| 1010 | 2³+2¹ | 10 |
| 1111 | 2³+2²+2¹+2⁰ | 15 |

### cómo contar

igual que en decimal donde al llegar a 9 se suma una columna y vuelve a 0, en binario al llegar a 1 se suma una columna y vuelve a 0:

```
0000 → 0001 → 0010 → 0011 → 0100 → 0101 → 0110 → 0111 → 1000 ...
  0      1      2      3      4      5      6      7      8
```

### por qué importa para microcontroladores

los microcontroladores (como Arduino o la Raspberry Pi Pico) trabajan a nivel eléctrico con solo dos estados: **hay voltaje** (1) o **no hay voltaje** (0). por eso el álgebra booleana (OR, AND) y el sistema binario son la base de todo lo que ocurre "por debajo" del código que escribimos: cada variable booleana, cada `if`, cada condición, se resuelve finalmente como combinaciones de 0 y 1.

---

## microcontroladores

**¿qué son?** computadores chiquititos: integran procesador, memoria y entradas/salidas en un solo chip, pensados para controlar un dispositivo específico a diferencia de un computador de propósito general.

- yo escogí una **Raspberry Pi Pico 2**.

### software a utilizar para arduino

- **Arduino IDE** `2.3.10`

---

## estructura

### `void setup()`

- es la **configuración inicial**: lo primero que corre el programa.
- se ejecuta **una sola vez**, apenas el microcontrolador recibe energía.
- `void` es el tipo de función que no retorna ningún valor.

### `void loop()`

- ocurre **después** de `setup()`.
- se repite en bucle **indefinidamente**, mientras el microcontrolador tenga energía.

```cpp
void setup() {
  // esto corre una sola vez, al iniciar
}

void loop() {
  // esto se repite una y otra vez
}
```

---

## sintaxis 

| elemento | significado |
|---|---|
| `()` | indican que se trata de una **función** — es la forma de reconocer una función en el código. |
| `;` | termina una instrucción/línea de código. |
| `=` | asignación de un valor a una variable (no es "igualdad" matemática). |
| `// comentario` | texto que el computador ignora; es **para uno mismo**, no para la máquina. |

### sobre comentarios (`//`)

los comentarios describen, en palabras simples una especie de pseudocódigo, qué va a hacer el código antes de escribirlo. son fundamentales para ordenar el pensamiento y para que otros (o uno mismo en el futuro) entiendan la lógica.

> regla: prohibido escribir una línea de código sin antes comentar qué es lo que se va a hacer.

### sobre declarar variables

**declarar** una variable es en cierto sentido, "jugar a ser Dios": para que una cosa exista dentro del programa, primero hay que declararla explícitamente.

### tipos de datos

- **`bool`** — variables "extremistas": solo pueden ser `0`/`1`, verdadero/falso, sí/no.
- **`int`** — números enteros, **sin decimales**.

### condicionales

- **`if`** — permite ejecutar código solo si se cumple una condición. tiene que ver con la profundidad de las cosas (qué pasa según el caso) y no solo con la superficialidad (una única respuesta fija).

### notación camello (*camelCase*)

forma de escribir palabras compuestas sin usar espacios ni guiones, donde cada palabra nueva comienza con mayúscula (excepto la primera):

```
miVariable
tiempoDeEspera
```

---

## buenas prácticas

- **siempre leer el código completo.** la mayoría de los problemas ocurren porque una línea no está haciendo lo que realmente queríamos que hiciera, aunque no marque error.

---

## subir código a GitHub

para compartir bloques de código en Markdown, se usan bloques de código con triple backtick, indicando el lenguaje:

````
```cpp
void setup() {

}

void loop() {

}
```
````

## encargo 01b
# correr código 

tuve atados 

# leerEnMetro

la función `leerEnMetro` modela mi rutina de lectura durante el trayecto diario hacia la universidad, desde Plaza Maipú (Línea 5) hasta República, combinando en la estación San Pablo hacia Línea 1. es de tipo `void`, ya que no retorna un valor sino que ejecuta una secuencia de acciones. 

## código 

```c
// Función que modela mi rutina de lectura en el trayecto Plaza Maipú - República
// Recibe dos datos: hacia dónde voy (universidad) y si es hora punta
void leerEnMetro(destinoUniversidad, horaPunta) {

  // Subo al metro en mi estación de origen, Plaza Maipú, en Línea 5
  subir(plazaMaipu, linea5);
  // Busco un espacio dentro del vagón para ubicarme
  buscar(espacio, vagon);
  // Saco el libro físico desde la mochila
  sacar(libro, mochila);

  // Evalúo cómo sostener el libro según las condiciones del vagón
  if (horaPunta && vagon == apretado) {
    // Uso el equilibrio de mi cuerpo en vez de sujetarme con fuerza
    apoyar(cuerpo, equilibrio);
    // Sostengo el libro con una sola mano
    sostener(libro, unaMano);
  }
  // Si no es esa situación, pregunto si hay asiento disponible
  else if (asiento == disponible) {
    sentarse();
    sostener(libro, dosManos);
  }
  //
  // Si ninguna condición especial se cumple, sigo leyendo con normalidad
  else {
    // Guardo el párrafo que voy leyendo en este momento
    string parrafo = leerPagina();
    // Avanzo a la siguiente página
    avanzar(paginaActual);
  }

  // Evalúo si llegué a la estación donde debo combinar de línea
  if (estacion == "San Pablo") {
    // Marco en qué página iba, mientras el libro sigue abierto
    marcar(paginaActual);
    // Ahora sí, cierro el libro para hacer el cambio de línea
    cerrar(libro);
    // Combino desde Línea 5 hacia Línea 1
    combinar(linea5, linea1);
  }

  // Evalúo si llegué a mi destino, República, y si hay gente bloqueando la puerta
  if (estacion == republica && puerta == bloqueada) {
    // Guardo el libro porque necesito las manos libres para salir
    guardar(libro, mochila);
    // Espero a que se genere un espacio para poder pasar
    esperar(espacioParaSalir);
    // Empujo suavemente para abrirme paso
    empujar(suave, salida);
    //
    // Finalmente logro bajar, aunque con dificultad
    bajar(vagon, conDificultad);
  }
}
```
recibe dos argumentos: `destinoUniversidad`, que representa mi destino final, y `horaPunta`, que indica si el trayecto ocurre en un horario de mayor congestión. internamente, la función evalúa distintas condiciones del entorno (como si el vagón está apretado, si hay asiento disponible, si llegué a la estación de combinación, o si encuentro dificultad para bajar en mi destino) para determinar qué acciones ejecutar en cada momento. esto incluye adaptaciones propias de mi forma de leer en el metro, como usar el equilibrio del cuerpo para sostener el libro cuando voy de pie y apretada, y la secuencia de pasos necesaria para lograr bajar en República cuando la puerta está bloqueada por otros pasajeros cosa que me carga.

## lectura
