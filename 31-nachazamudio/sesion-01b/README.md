# sesion-01b

## apuntes sesión

variables enteras, sin numero decimal; variables string, bool: con valor 0 y 1(si o no), char, double. 

3bits: 8variables, 4bits 16variables, 2 elevado a x, donde x es la cantidad de bits presentes. 

intx_t, int para usar numeros enteros, donde x es la cantidad de bits a utilizar, por ejemplo para decir la edad podemos utilizar un bit contenga el rango de edades optima, 8 bits sería demasiado. 

**ARDUINO** c++

setup: función de configuración, para empezar. (secuencia de instrucciones para que ocurran acciones) 

void: vacio, no expulsa valor como respuesta, para funciones que no necesitan esta respuesta. va antes de setup

VOID SETUP() {CODIGO}

loop: se repite constantemente hasta que se interrumpa la función. 

VOID LOOP() {CODIGO}

{}: murcielago para anotar la acción a ocurrir. puede ocurrir una vez al principio(run once) o repeatedly

está prohibido escribir una línea de código antes de escribir un comentario de lo que se espera de él. SEUDOCODIGO.

Ejemplo para encargo variantes:, verdadero o falso

BOOL: respuesta de si o no

Int: respuestas numéricas, edad, nacimiento.





## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

idea de código: ocupar la matriz del microcontrolador para hacer animaciones.

https://docs.52pi.com/md/kz-0073/arduino/p3/ muy buena pagina explicando el paso a paso de como generar los codigos. 

Para familiarizarnos con el trabajo copiamos un código de ejemplo que encontramos para saber como es el proceso de enviarlo al microprocesador. Conectamos el Arduino 1 r4 wifi al computador y enviamos la función. 

![Prueba de carita feliz](./carita-feliz.jpeg)

![carita editada](./carita-feliz-2.jpeg)

editamos el código para variar la forma de la carita feliz


Dentro de está página encontramos información de como funciona la matriz y como ocuparla. En primer lugar entendimos que cada LED del panel funcionan como un pixel que podemos controlar de forma individual, enviandole señales a través de Arduino para prenderlos y apagarlos. 

Para iniciar esta funcion debemos escribir el siguiente código al inicio del boceto:

```
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);
  matrix.begin();
}
```
la primera parte: #include "Arduino_LED_Matrix.h"  y ArdionoLEDMatrix Matrix crean el objeto LED en el boceto de Arduino, luego el código matrix.begin() dentro del setup para iniciarlo.

Luego se añade la matriz de esta manera para tener todos los espacios y ocupar los 0 y 1 como apagado y encendido respectivamente en filas que formen los pixeles de 8 x 12:
```
byte frame[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};
```

En esta parte ya pudimos hacer figuras y definirlos como frames para luego pasar a usar comandos de loop que los muestren en secuencias. podemos dibujar nuestra figura de esa forma o tratarlo individualmente usando el panel y los espacios con coordenadas, contando de iqz a derecha desde el 0 al 11 y de arriba a abajo desde el 0 al 7.
```
frame[2][1] = 1;

matrix.renderBitmap(frame, 8, 12);
```
aquí el pixel de esa ubicación estaría prendido ya que el frame es = 1, este frame va con el código inferior para que se ejecute. 

Encontramos más información de otras formas de escribir estas figuras pero no entendimos como funcionaba, por lo que nos limitamos a estas dos por ahora. 

![imagen numero 1](./numero1.png)
![imagen numero 2](./numero2.png)

2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
