# sesion-01b
holis ;) clase 14/08
## apuntes sesión

las variables almacenan la información y las funciones utilizan esa información para realizar procesos o acciones.

*para recordar* *

| Tipo de variable | Se declara como | Uso |
|---|---|---|
| Entero | `int` | Guarda números enteros, sin decimales |
| Decimal | `float` | Guarda números con decimales |
| Decimal de mayor precisión | `double` | Guarda números decimales con mayor precisión que `float` |
| Carácter | `char` | Guarda un solo carácter, letra o símbolo |
| Texto | `string` | Guarda palabras, textos o cadenas de caracteres |
| Booleano | `bool` | Guarda valores de verdadero (`true`) o falso (`false`) |
| Entero grande | `long` | Guarda números enteros de mayor rango |
| Entero muy grande | `long long` | Guarda números enteros de un rango aún mayor |
| Entero sin signo | `unsigned int` | Guarda números enteros iguales o mayores que 0 |

gracias a Magdalena balart por su tabla, me sirve mucho para reforzar las variables <3

     int edad =21 ; 
     
*significa: creo algo llamado edad y le guardo el número 21*

+ int : que tipo de variable vamos a guardar (un número entero)
+ edad : es el nombre que elegimos
+ = : guarda esto dentro de 
+ 21 : es el valor
+ ; : significa terminé esta instrucción


## usaremos C++: es un lenguaje de programación

EJEMPLOS:  

- c++ es un lenguaje que sirve principalmente para robots y videojuegos

- javascript: para páginas web y apps como Netflix 

- python para desarrollo de inteligencia artificial o ciencia de datos

*¿Qué es sintaxis?*

Por lo que yo entiendo son las reglas de como escribir código (por ejemplo; las reglas gramaticales del español)

ejemplos: 

    #include <iostream> 

    intmain () { 

       std: cout <<"Hola mundo"; 

       return 0;

+ #include <iostream>  : incluye una biblioteca
+ int main () : define la función principal
+ {} : delimitan un bloque de código
+ std:cout : sirve para mostrar información
+ << : envía el contenido hacía el cout
+ "hola mundo" : es un texto
+ ; : indica el final de una instrucción
+ return 0; : termina main,  indicando que finalizó correctamente

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

*DESARROLLO*

En conjunto con Catalina Oyanedel, decidimos trabajar con Arduino UNO R4 WIFI. Sin experiencia previa, con ayuda y recomendación de Magdalena Balart y Marcela Zúñiga. Decidimos empezar con el ejercicio de correr un código para probar la matriz LED del Arduino. 

En clases con ayuda, Mai y Santi me ayudaron a descargar Arduino IDE para poder hacer un ejemplo de encender la matriz LED del Arduino: 

### Hacer un corazón utilizando la matriz Led del arduino UNO r4 wifi <3

+ para realizar la prueba utilizamos un Arduino UNO R4 WiFi y lo conecté directamente al computador mediante un cable USB-C.
+ el código lo trabajamos en Arduino IDE. Primero abrimos el programa y seleccionamos el Arduino UNO R4 WiFi como placa. Luego copié el código del corazón en el editor y lo cargué al microcontrolador.
+ Una vez cargado el programa, la matriz LED integrada del Arduino mostró el corazón.

 ### Resultado

El código funcionó y el corazón apareció correctamente en la matriz LED integrada del Arduino.

![IMG](./imagenes/arduino.png/)


### Código

    #include "Arduino_LED_Matrix.h"

    ArduinoLEDMatrix matrix;

    byte corazon[8][12] = {
      {0,0,1,1,0,0,0,1,1,0,0,0},
      {0,1,1,1,1,0,1,1,1,1,0,0},
      {1,1,1,1,1,1,1,1,1,1,1,0},
      {1,1,1,1,1,1,1,1,1,1,1,0},
      {0,1,1,1,1,1,1,1,1,1,0,0},
      {0,0,1,1,1,1,1,1,1,0,0,0},
      {0,0,0,1,1,1,1,1,0,0,0,0},
      {0,0,0,0,1,1,1,0,0,0,0,0}
    };

    void setup() {
      matrix.begin();
      matrix.renderBitmap(corazon, 8, 12);
    }

    void loop() {
    }
### Explicación del código (según lo que entiendo) 

+ #include "Arduino_LED_Matrix.h"
  
Incluye la biblioteca que permite controlar la matriz de LEDs del Arduino UNO R4 WiFi. Es como darle al programa las herramientas necesarias para poder trabajar con la pantalla LED.

+      byte corazon[8][12] = {
           {0,0,1,1,0,0,0,1,1,0,0,0},
           {0,1,1,1,1,0,1,1,1,1,0,0},
           {1,1,1,1,1,1,1,1,1,1,1,0},
           {1,1,1,1,1,1,1,1,1,1,1,0},
           {0,1,1,1,1,1,1,1,1,1,0,0},
           {0,0,1,1,1,1,1,1,1,0,0,0},
           {0,0,0,1,1,1,1,1,0,0,0,0},
           {0,0,0,0,1,1,1,0,0,0,0,0}
         };

Aquí se crea la imagen del corazón mediante una matriz de 8 × 12.
8 = cantidad de filas.
12 = cantidad de columnas.
1 = LED encendido.
0 = LED apagado.
Por eso, los números funcionan como si fueran píxeles. 

+ void setup() {
  matrix.begin();
  matrix.renderBitmap(corazon, 8, 12);
}

setup() contiene las instrucciones que se ejecutan una vez al iniciar el Arduino.

+ matrix.begin();
  
Inicia la matriz LED para que pueda ser utilizada.

+ matrix.renderBitmap(corazon, 8, 12);
  
Le indica al Arduino que debe mostrar la imagen guardada en corazon, utilizando sus 8 filas y 12 columnas.

+ void loop() {
}

las instrucciones que normalmente se repetirán continuamente. En este caso está vacío porque solo queremos mostrar el corazón y dejarlo fijo, sin animación.

*(le pedí ayuda a Claude para entender la función detallada del código)* 


### *segundo ejemplo*

Con ayuda de mi compañera Cata, logró instalar una librería <ArduinoGraphics.h> pero no Arduino_LED_Matrix.h, desde el link que se encontraba en ese código revisó un tutorial que venía con un ejemplo listo y que funcionó.

```cpp
#include "Arduino_LED_Matrix.h"
#include <stdint.h>

ArduinoLEDMatrix matrix;

const uint32_t frames[][4] = {
  {
    0xe0000000,
    0x0,
    0x0,
    66
  },
  {
    0x400e0000,
    0x0,
    0x0,
    66
  },
  {
    0x400e0,
    0x0,
    0x0,
    66
  },
  {
    0x40,
    0xe000000,
    0x0,
    66
  },
  {
    0x3000000,
    0x400e000,
    0x0,
    66
  },
  {
    0x3003000,
    0x400e,
    0x0,
    66
  },
  {
    0x3003,
    0x4,
    0xe00000,
    66
  },
  {
    0x3,
    0x300000,
    0x400e00,
    66
  },
  {
    0x0,
    0x300300,
    0x400e00,
    66
  },
  {
    0x1c000000,
    0x300,
    0x30400e00,
    66
  },
  {
    0x401c000,
    0x0,
    0x30430e00,
    66
  },
  {
    0x401c,
    0x0,
    0x430e30,
    66
  },
  {
    0x4,
    0x1c00000,
    0x430e30,
    66
  },
  {
    0x0,
    0x401c00,
    0x430e30,
    66
  },
  {
    0x800000,
    0x401,
    0xc0430e30,
    66
  },
  {
    0x800800,
    0x0,
    0x405f0e30,
    66
  },
  {
    0x800800,
    0x80000000,
    0x470ff0,
    66
  },
  {
    0x800800,
    0x80080000,
    0x470ff0,
    66
  },
  {
    0x800,
    0x80080080,
    0x470ff0,
    66
  },
  {
    0x38000000,
    0x80080080,
    0x8470ff0,
    66
  },
  {
    0x10038000,
    0x80080,
    0x8478ff0,
    66
  },
  {
    0x10038,
    0x80,
    0x8478ff8,
    66
  },
  {
    0x700010,
    0x3800080,
    0x8478ff8,
    66
  },
  {
    0x400700,
    0x1003880,
    0x8478ff8,
    66
  },
  {
    0x400,
    0x70001083,
    0x88478ff8,
    66
  },
  {
    0xf000000,
    0x40070081,
    0x87f8ff8,
    66
  },
  {
    0xf000,
    0x400f1,
    0x87f8ff8,
    66
  },
  {
    0x8000000f,
    0xc1,
    0xf7f8ff8,
    66
  },
  {
    0xc0080000,
    0xf00081,
    0xc7ffff8,
    66
  },
  {
    0x400c0080,
    0xf81,
    0x87fcfff,
    66
  },
  {
    0x3400c0,
    0x8000081,
    0xf87fcfff,
    66
  },
  {
    0x20200340,
    0xc008081,
    0xf87fcfff,
    66
  },
  {
    0x38220200,
    0x3400c089,
    0xf87fcfff,
    66
  },
  {
    0x38220,
    0x2003408d,
    0xf8ffcfff,
    66
  },
  {
    0x86100038,
    0x220240bd,
    0xf8ffcfff,
    66
  },
  {
    0xec186100,
    0x38260ad,
    0xfbffcfff,
    66
  },
  {
    0x3ec186,
    0x100078af,
    0xfaffffff,
    66
  },
  {
    0x114003ec,
    0x186178af,
    0xfaffffff,
    66
  },
  {
    0x3b411400,
    0x3ec1febf,
    0xfaffffff,
    66
  },
  {
    0x143b411,
    0x4ec3febf,
    0xfbffffff,
    66
  },
  {
    0xc040143b,
    0x4fd7febf,
    0xfbffffff,
    66
  },
  {
    0xc60c0439,
    0x4ff7ffff,
    0xfbffffff,
    66
  },
  {
    0x33c60f9,
    0x4ff7ffff,
    0xffffffff,
    66
  },
  {
    0x3cbc33ff,
    0x4ff7ffff,
    0xffffffff,
    66
  },
  {
    0x8ffbff,
    0x7ff7ffff,
    0xffffffff,
    66
  },
  {
    0xf0cffbff,
    0xfff7ffff,
    0xffffffff,
    66
  },
  {
    0xfe1fffff,
    0xffffffff,
    0xffffffff,
    66
  },
  {
    0xffffffff,
    0xffffffff,
    0xffffffff,
    66
  },
  {
    0x7fffffff,
    0xffffffff,
    0xfffff7ff,
    66
  },
  {
    0x3fe7ffff,
    0xffffffff,
    0xff7ff3fe,
    66
  },
  {
    0x1fc3fe7f,
    0xfffffff7,
    0xff3fe1fc,
    66
  },
  {
    0xf81fc3f,
    0xe7ff7ff3,
    0xfe1fc0f8,
    66
  },
  {
    0x500f81f,
    0xc3fe3fe1,
    0xfc0f8070,
    66
  },
  {
    0x500f,
    0x81fc1fc0,
    0xf8070020,
    66
  },
  {
    0x5,
    0xf80f80,
    0x70020000,
    66
  },
  {
    0x5,
    0xa80880,
    0x50020000,
    600
  },
  {
    0xd812,
    0x41040880,
    0x50020000,
    200
  },
  {
    0x5,
    0xa80880,
    0x50020000,
    0xFFFFFFFF
  }
};

void setup() {
  Serial.begin(115200);
  // you can also load frames at runtime, without stopping the refresh
  matrix.loadSequence(frames);
  matrix.begin();
  // turn on autoscroll to avoid calling next() to show the next frame; the parameter is in milliseconds
  // matrix.autoscroll(300);
  matrix.play(true);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

**Resultado:**

<https://youtube.com/shorts/QHDVUR6-lg0?feature=share>

Aún no logramos comprender del todo las terminologías pero creemos que es un gran paso poder hacer funcionar lo que imaginábamos ;)

**Preguntas:** Aunque el código funcionó, me quedó la duda de cómo se pueden crear otras imágenes para la matriz y cómo se podría hacer que una imagen cambie o tenga movimiento. 
También me interesa saber cómo se puede modificar el código para que el corazón tenga una animación, por ejemplo, que parezca que está latiendo.

**Aciertos:**  En este caso no tuvimos grandes problemas durante la prueba. El proceso fue relativamente directo: conectar, copiar el código, cargarlo y comprobar el resultado. 


## ÍTEM II

2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

TOMAR AWITA

+ Quiero tomar agua
+ Busco un vaso
+ Lo lleno con agua
+ Si tengo sed, tomo agua
+ Después dejo el vaso

```cpp
void tomarAgua(vaso, cantidad) {
    buscar(vaso);
    llenar(vaso, agua);

    if (vaso == lleno) {
        tomar(vaso);
    }
    else {
        llenar(vaso, agua);
    }

    dejar(vaso, mesa);
}
```

EXPLICACIÓN: 

+ Nombre: tomarAgua
+ Tipo: void
+ Argumentos: vaso, cantidad
+ Uso: tomar agua cuando tengo sed.

*Proceso :
Busco un vaso.
Lo lleno con agua.
Si el vaso está lleno, tomo agua.
Si no, lo vuelvo a llenar.
Dejo el vaso en la mesa.*

Pseudocódigo = escribir las instrucciones como si fueran código, pero sin preocuparte de que realmente funcione.

## lectura

Para el autor el "espectáculo" va directamente relacionado con la economía y sistema de producción de la sociedad moderna. menciona que las imágenes y apariencias influyen en los deseos y gcomportamientos de las personas, haciendo que la representación parece más real de lo que son las cosas. Algo que me llamo la atención es que el espectáculo ayuda a mantener el orden social y las desigualdades existentes, porque son discursos unilaterales. 

“El espectáculo es la principal producción de la sociedad actual”

"El espectáculo es el discurso ininterrumpido que el orden presente mantiene consigo mismo, su monólogo elogioso. Es el autorretrato del poder en la época de su gestión totalitaria de las condiciones de existencia"

pág 28/31


