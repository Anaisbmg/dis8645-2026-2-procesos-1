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

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
