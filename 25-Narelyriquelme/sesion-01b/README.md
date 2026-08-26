# sesion-01b

## apuntes sesión

No pude asistir a esta clase. Reconstruí estos apuntes a partir de lo que me compartieron mis compañeros y gracias al video publicado de Aaron explicando como instalar arduino :).

### Instalación de Arduino IDE

Este semestre trabajaremos con microcontroladores, inyectando código mediante Arduino IDE.

1. ir a la página de Arduino (arduino.cc) y hacer click en `Products`.
2. dentro de `SOFTWARE`, hacer click en `Arduino IDE`.
3. bajar hasta `Arduino IDE 2.3.10`.
4. seleccionar la opción según el sistema operativo y presionar `DOWNLOAD`.
5. una vez instalado, ir a `Boards Manager` y buscar "Arduino UNO R4 Boards" para instalarlo.

Cada vez que se hagan entregas, hay que subir la carpeta completa del código (contiene el archivo `.ide`, que se llama igual que la carpeta que lo contiene).

### Historia de Arduino

`Hernando Barragán` — su tesis de magíster fue "Wiring", un marco de programación de código abierto para microcontroladores, que dio origen a Arduino.

### Estructura base de un sketch

`setup()` es la configuración inicial: todo lo que está dentro de sus llaves `{ }` ocurre una sola vez, al encender o reiniciar la placa. `loop()` ocurre después de `setup()` y se repite constantemente mientras la placa esté encendida.

```cpp
void setup() {
  // aqui va setup(), ocurre una vez, al principio
}

void loop() {
  // aqui va loop()
  // ocurre despues de setup()
  // se repite hasta que no se pueda
}
```

- está prohibido escribir una línea de código sin comentar qué hace.
- `{` = desde acá, `}` = hasta acá (delimitan el "scope" o contexto).
- `void` = función que no entrega ningún resultado, solo ocurre.
- `int` = función que sí entrega un resultado numérico entero.

### Variables

Las variables son contenedores para almacenar valores de datos, los cuales pueden cambiar durante la ejecución del programa.

- `int`: números enteros, sin decimales (ej: 100 o -100).
- `double`: números con decimales (ej: 10.1 o -10.1).
- `char`: un solo carácter, entre comillas simples (ej: 'a').
- `string`: texto, entre comillas dobles (ej: "hola mundo").
- `bool`: verdadero o falso.

El `=` en programación no significa "igual a" como en matemáticas, sino que se usa para **asignar** un valor a una variable. El `==` sí se usa para **comparar** dos valores.

**Ejemplo (variables y función con "Kristel"):**

```cpp
bool kristelEstudianteUDP = true;
bool kristelChilena = true;
bool kristelCoreana = false;

int kristelEdad = 22;
int kristelNacimientoAnho = 2003;
int kristelNacimientoMes = 11;
int kristelNacimientoDia = 5;

void setup() {
  // aqui va setup(), ocurre una vez, al principio
}

void loop() {
  // si estoy en el mes y dia de nacimiento de Kristel
  // le deseo feliz cumpleanhos
  cumplirAnhosKristel();
}

// la vamos a correr cuando sea el cumple de Kristel
void cumplirAnhosKristel() {
  kristelEdad = kristelEdad + 1;
  // manera abreviada: kristelEdad += 1; o kristelEdad++;
}
```

### Declaración de funciones con retorno

```cpp
int valorPancito = 2000;
int valorCafecito = 3000;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  int valorDesayuno = sumarEnteros(valorPancito, valorCafecito);

  if (valorDesayuno < 5000) {
    // oh no
  } else {
    // oh si
  }
}

// sumar numeros enteros
// es tipo int porque nos va a dar un resultado
// las void ocurren sin emitir un resultado
int sumarEnteros(int x, int y) {
  int resultado = 0;
  resultado = x + y;
  return resultado; // declarar solo lo puedo hacer una vez
}
```

### Markdown para agregar código en GitHub

Se usan 3 backticks (`` ``` ``) seguidos de `cpp` para abrir un bloque de código con color/formato, y se cierra con 3 backticks nuevamente. Esto evita que el resto del texto se vea afectado por el formato de código.

### Microcontroladores asignados

Quienes nunca habían usado un microcontrolador recibieron Arduino UNO R4 WiFi o Minima, trabajando en duplas. Quienes ya tenían experiencia previa recibieron Raspberry Pi Pico 2W, de forma individual.

---

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

No pude realizar el punto 1 del encargo (correr un código en el microcontrolador), ya que se trataba de un trabajo en duplas y requería el uso del microcontrolador, el cual no tengo. Además, todavía me cuesta comprender bien su funcionamiento, por lo que no logré completar esta parte del encargo. De todas formas, voy entendiendo cada vez más :)

### 2. Función propia en pseudocódigo

**Nombre:** `subirCerrillo`
**Tipo:** `bool`
**Argumentos:** `horaSalida`, `climaDespejado`
**Uso:** decidir si vale la pena subir el cerrillo cerca de mi casa para alcanzar a ver el atardecer, según la hora a la que salgo y si el clima está despejado.

```
función subirCerrillo(horaSalida, climaDespejado)

    horaAtardecer = 19:30
    tiempoDeSubida = 30 minutos

    si climaDespejado es falso entonces
        imprimir("mejor no subir hoy, no se vera nada")
        retornar falso
    fin si

    horaLlegadaEstimada = horaSalida + tiempoDeSubida

    si horaLlegadaEstimada <= horaAtardecer entonces
        tomar botella de agua
        salir de casa
        caminar hasta el cerrillo
        subir el cerrillo
        buscar un buen lugar para sentarme
        ver el atardecer
        imprimir("llegue a tiempo para el atardecer")
        retornar verdadero
    si no
        imprimir("no alcanzo a llegar antes de que oscurezca")
        retornar falso
    fin si

fin función
```

---

## lectura

_(Pendiente: agregar las páginas leídas de "Anarchy" de John Cage durante esta semana)_
