# sesion-02a

2026-08-18

## Potenciómetros y botones

**Potenciómetro:** (POT, perillas, o resistencia variable). Regula potencias, o sea, que puede variar una propiedad eléctrica (resistencia) que controla el flujo de electrones (e.). Es una forma de encapsular 2 resistencias. Giran en torno a un rango (lineal)

Foto de mi croquera de diagrama de cómo funciona un potenciómetro.

![Foto de mi croquera](./imagenes/foto-funcionamiento-pot.jpg)

Tipos de potenciómetro: A y B

 - A = Audio
 - B = Lineal

Para que algo suene el doble de fuerte, debe sonar igual 10 veces.

encoders: codificadores, perillas de giro infinito.

Potencia = energía/tiempo

En electricidad:

Potencia = Voltaje * corriente

**Botones:** (Pulsadores = Push Buttons, **NO** toggles)

Toggles = interruptor

! = lo contrario de

printlm = imprime y luego sáltate una línea

## Intento 1: Arduino UNO r4 minima

```c++
  // se agrega const para bloquear la variable
  // y no la puedan cambiar

const int pinLectura = A0;

  // es un entero y hay que declararlo
  // le damos un valor para partir
  // este valor va a ser reemplazado constantemente
  // por la perila del potenciometro

int valorLectura = -1; 

void setup() {

  // puede estar vacio
  // serial es un objeto
  // por eso esta en mayuscula
  // y es uno a la vez en orden
  // no en paralelo

  // 9600 baud (simbolos) es un numero moderado
  // y no puede ser cualquiera
  // debe ser el resultado de un 2 elevado a algo

  Serial.begin(9600);

}

void loop() {

  // pinLectura es paramétrico
  // y en este caso es A0
  // aunque no siempre sera el caso

  valorLectura = analogRead(pinLectura);
Serial.println(valorLectura);

  // ahora podemos conectar el potenciometro
  // y ver como reacciona al mover la perilla
}
```

Fotos Arduino uno r4 wifi conectado a potenciómetro con cables caimán.

![Fotos Arduino uno r4 wifi conectado a potenciómetro con cables caimán](./imagenes/fotos-arduino-wifi-pot.jpg)

## Intento 2: Raspberry Pi Pico

## encargos

## lectura

Mi libro es: **grokking algorithms** de Aditya Y. Bhargava.

Actualmente voy en la página 9.

**Citas:**

 1. "Whatever number I´m thinking of you can guess in a maximum of seven guesses—because you eliminate so many numbers with every guess!" (pag. 6)

Elegí esta por qué la verdad nunca había comprendido muy bien qué era todo este tema de la **búsqueda binaria**, pero ahora puedo comprenderlo un poco mejor, y la verdad es que jamás se me ocurriría buscar así un número. Y si lo tuviera que explicar ahora con mis palabras, preobablemente diría algo como: es un algoritmo que permite buscar y encontrar elemento de forma mucho más rápida y eficiente.

 2. ""How many 10s do we multiply together to get 100?" The answer is 2: 10 x 10. So log10 = 2. Logs are the flip of exponentials" (pag. 7).

Quizás la razón de por qué elegí esta, para alguien, pueda ser muy absurda, pero para mí fue comprender los logaritmos, porque, de hecho, en el colegio nunca lo logré, por más que lo estudié y analicé no era lo mío. Pero ahora fue casi revelador que mi profesor nunca supo explicarlo de manera en que lo lograra entender, aún con todas las veces que se lo pregunté.

**Opiniones generales:**

Me encantó, porque de verdad que explica con peras y manzanas, además las ilustraciones me hacen feliz. Son lindas y además me explican lo que estoy intentando comprender, simplemente un 2x1.

Le tenía un poco de miedo al libro al principio, pero creo q ya me solté un poco, además es muy rápido de leer, aunque esté en inglés.

PD. Es mi primer libro en inglés.
