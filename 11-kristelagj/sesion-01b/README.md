# sesion-01b

## apuntes sesión

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

# Encargo 1
Con Santi nos juntamos en la universidad a realizar la tarea la cual ambos comenzamos de 0 porque no entendíamos del todo lo que estábamos haciendo, pero para eso somos grupo, para aprender. 

Primero cada uno por su parte investigo un poco para no partir de 0. 

Arduino se refiere a muchas cosas, pero podemos decir es una empresa italiana una compañía de desarrollo de software y hardware libres, además una software libre que permite crear dispositivos digitales y prototipos electrónicos interactivos que tiene de apellido IDE que es amigable para principiantes, entre otras cosas 

Con esto podemos utilizar para controlar motores, iluminación, cámaras, robots, etc.

 Matrix= pantalla LED
Tx y RX se encienden cuando enviamos la señal del computador
Hexadecimal: coordenadas o tabla de 0 y 1

Siempre hay que declarar lo que llamamos de la matrix entre comas. 

Primero comenzamos el ejemplo que siempre está en internet del corazón para así comenzar a analizar, sus partes y que no entendíamos, además de comprobar si el ARDUINO estaba funcionando.

```cpp
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

// Matriz 2D predefinida
byte frame[8][12] = {
     { 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
     { 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
     { 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
     { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
     { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void setup() {
  // Inicializar la matriz LED
  matrix.begin();
}

void loop() {
  // Mostrar el patrón en la matriz LED
  matrix.renderBitmap(frame, 8, 12);
  delay(1000);
}
```
Declaramos primero que hara nuestra pantalla con 0 y 1 que en este caso es un corazón, iniciamos la matriz LED y después en loop hicimos que nunca terminara.

Con este segundo ejemplo, que hay dos formas escribir código para reflejar en la pantalla 

Una es: Hexadecimal, y la otra es indicar literalmente que led de la "pantallita" queremos que se encienda

```cpp
#include "Arduino_LED_Matrix.h" // Incluimos la librería oficial de la matriz

ArduinoLEDMatrix matrix; // Creamos el objeto para controlar la pantalla

// 1. VARIABLES: Creamos los marcos (dibujos de 12x8 LEDs)
// 1 = LED encendido, 0 = LED apagado

// Cara feliz
const uint32_t caritaFeliz[] = {
  0x19785,
  0x80000001,
  0x81800000
};

// Cara seria
const uint32_t caritaSeria[] = {
  0x19819,
  0x0,
  0x1f800000
};

// Variable para controlar la velocidad del cambio
int velocidadAnimacion = 5000; // 1 segundo en milisegundos

// 2. FUNCIÓN SETUP: Inicializamos la matriz
void setup() {
  matrix.begin(); // Enciende el controlador interno de la matriz LED
}

// 3. FUNCIÓN LOOP: Alternamos entre los dos dibujos
void loop() {
  // Mostramos la cara feliz
  matrix.loadFrame(caritaFeliz);
  delay(velocidadAnimacion);

  // Mostramos la cara seria
  matrix.loadFrame(caritaSeria);
  delay(velocidadAnimacion);
}
```

Entonces despues de analizar y comprender, nos decidimos a realizar desde 0 dos codigos los cuales graficamos el glifo B y O


```cpp
#include "Arduino_LED_Matrix.h" // Esto es para especificar que queremos correr el codigo en la pantallita del arduino. 
ArduinoLEDMatrix matrix;

// Creamos nuestra cuadrícula visual de 8 filas por 12 columnas:
// 1 = LED encendido, 0 = LED apagado
uint8_t dibujoLetraB[8][12] = {
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}
};

void setup (){
  matrix.begin();
  
  //Renderizamos el dibujo en la pantalla usando la función de renderizado
  matrix.renderBitmap(dibujoLetraB, 8, 12);
}

void loop (){
  //Mostrar patron de dibujoLetraB
}
```
Lo que nos complicó con este ejercicio fue el tema de declarar ya que cada cosa debe ir entre comas. 

```cpp
#include "Arduino_LED_Matrix.h" // Esto es para especificar que queremos correr el codigo en la pantallita del arduino. 
ArduinoLEDMatrix matrix;

// Creamos nuestra cuadrícula visual de 8 filas por 12 columnas:
// 1 = LED encendido, 0 = LED apagado
uint8_t dibujoLetraB[8][12] = {
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}
};

uint8_t dibujoLetraO[8][12] = {
  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0}
};

void setup (){
  matrix.begin();
  
  //Renderizamos el dibujo en la pantalla usando la función de renderizado
  matrix.renderBitmap(dibujoLetraB, 8, 12);
  matrix.renderBitmap(dibujoLetraO, 8, 12);
}

void loop (){
  //Mostrar patron de dibujoLetraB y luego el de dibujoLetraO
  matrix.renderBitmap(dibujoLetraB, 8, 12);
  delay (1000);

  matrix.renderBitmap(dibujoLetraO, 8, 12);
  delay (1000);
}
```
Pero ahora mi pregunta es como no siempre hay que declarar setup y loop, en los ejercicios que no existe esta acción ¿es necesario declararla? no creo, porque básicamente no está haciendo nada.

https://www.youtube.com/watch?v=MBTPU8PwS3Y

https://www.youtube.com/watch?v=nL34zDTPkcs&t=496s

https://docs.sunfounder.com/projects/elite-explorer-kit/es/latest/new_feature_projects/04_led_matrix.html#mostrar-animaciones

