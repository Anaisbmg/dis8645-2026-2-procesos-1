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
Declaramos primero que hara nuestra pantalla con 0 y 1 que en este caso es un corazón, iniciamos la matriz LED y después en loop hicimos que nunca terminara, pero encontramos que es innecesaria esa sección, ya que con lo anterior debería aparecer y estar constante. 

https://www.youtube.com/watch?v=MBTPU8PwS3Y
https://www.youtube.com/watch?v=nL34zDTPkcs&t=496s
https://docs.sunfounder.com/projects/elite-explorer-kit/es/latest/new_feature_projects/04_led_matrix.html#mostrar-animaciones

