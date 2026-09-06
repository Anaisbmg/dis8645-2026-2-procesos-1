# sesion-03b

## apuntes sesión

25-08 — String, Char y Arrays

Partimos hablando de licencias y copyright. Ahora debemos revisar si la licencia de nuestro poema permite utilizarlo y hacer lo que estamos haciendo en el taller.

Arduino va a ser dejado de lado después del break de septiembre, así que vamos a trabajar en cpp / c++ más general.

La idea es no codificar solamente en Arduino, sino aprender código C++ que sea más agnóstico y que ayude para otros lenguajes también.

Arduino hizo sus propias soluciones para que podamos usar cosas más fácil, como los String, pero como vamos a salir de Arduino hay que aprender a vivir sin eso y entender cómo funciona realmente.

String

Un string es una cadena de caracteres.

Es como un hilito de cuentas, donde cada cuenta representa un carácter.

Ejemplo:

H - O - L - A

Cada letra es un carácter.

Además, el string tiene un final que también cuenta como carácter, por eso hay que considerar ese espacio extra.

Un String es una clase, por eso Arduino nos permite usarlo de una forma más sencilla.

En Arduino se puede escribir:

```cpp
String nombre = "Aaron";
```

Char

Char = carácter.

Sirve para guardar solamente un carácter.

Puede ser una letra, número o símbolo.

```cpp
char letra = 'A';
```

Crear strings

Hay dos formas:

Un conjunto de caracteres entre comillas:

```cpp
"Hola"
```
Array / Arreglo

Los corchetes:

```cpp
[]
```
Un arreglo sirve para guardar varias cosas dentro de una misma variable.

```cpp
int edadAaron = 37;
int edadSeba = 22;
int edadEmi = 24;
```

en un arreglo:

```cpp
int edades[3] = {37,22,24};
```
También podemos escribir:
```cpp
int edades[] = {32,15,25,100,200};
```

Aquí no decimos cuántos elementos hay.

El programa cuenta solo cuántos valores tiene.

Usar char en vez de String

Como vamos a salir de Arduino, usamos un arreglo de caracteres en vez de String.

Esto permite que el código funcione en más lugares y no dependa solamente de Arduino.

Ejemplo que vuela la cabeza:

```cpp
// se probo en vivo y no funcionó
char nombre[6] = "aaron";
```

Estamos diciendo que el arreglo nombre tiene espacio para 6 caracteres.

¿Por qué 6 si aaron tiene 5 letras?

Porque el string necesita un espacio extra para indicar el final.

Asterisco *

El asterisco permite hacer un arreglo de arreglos.

```cpp
char *misVersos[]
```

Pensarlo como un poemario

Un poemario funciona como varios arreglos juntos:

Un poemario es un arreglo de páginas.

Una página es un arreglo de líneas.

Una línea es un arreglo de caracteres.

Entonces:

Caracteres → forman líneas
Líneas → forman páginas
Páginas → forman un poemario

For

El for sirve para recorrer conjuntos.

Tiene 3 partes:

Inicio de los tiempos

¿Dónde parto?

```cpp
int i = 0
```

Oye pero cuando paro

¿Cuándo dejo de repetir?

```cpp
i < 5
```

Mientras siga siendo verdadero, continúa.

¿Qué hago después de cada iteración?

Qué pasa después de cada vuelta.

```cpp
i++
```

Significa que i aumenta en 1.

Si:

i = 0

después:

i = 1

después:

i = 2

y así va recorriendo el arreglo.


Fuentes de información:

https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/

https://docs.arduino.cc/built-in-examples/strings/StringCharacters/


Ahora vamos con el trabajo:

Primero escribimos todo lo que queríamos que sucediera:

```cpp
// primera estrofa

// mostrar "I pray for that grandmother" lentamente
// hacer que aparezca primero i pray
// for that
// grandmother 
// dejar una pausa al terminar

// mostrar "grinding her teeth"
// aumentar un poco la velocidad respecto a la frase anterior
// hacer que se sienta como el primer cambio de intensidad

// mostrar "one hand pushing in fresh hot peppers, seeds and all"
// mantener una velocidad intermedia
// mostrar el texto de forma más continua

// mostrar "turning the handle of that old iron mill"
// mover el texto horizontalmente
// hacer que el texto rebote y se vaya hacía la izquierda


// mostrar "squeezing the limes, knowing"
// volver a una lectura más estable
// mantener una pausa breve antes del cierre de la estrofa

// mostrar "they will burn and cut raw like acid"
// aumentar nuevamente la intensidad
// destacar las palabras "burn", "cut", "raw" y "acid" en fondo blanco con letras negra y tamaño de toda la pantalla.
// hacer que aparezcan de forma más brusca o rápida

// dejar la pantalla vacía por un momento
// terminar la primera estrofa


// segunda estrofa

// mostrar "She pours in vinegar and gets Anne to chop five onions"
// mantener una velocidad intermedia
// hacer que el texto avance de forma relativamente continua
// empezar a preparar visualmente la acción de cortar

// mostrar "with a whole bulb of garlic"
// mantener el mismo ritmo
// dejar una pausa breve al terminar

// mostrar "Chop them up real fine girl, you hear?"
// cortar la frase en partes
// mostrar cada parte por separado
// hacer que aparezcan más rápido entre sí
// relacionar la forma de aparición con la acción de cortar

// mostrar "And Anne dicing, and crying"
// continuar con apariciones fragmentadas
// hacer que "dicing" y "crying" aparezcan separadas
// aumentar un poco la tensión agrandando y achicando el texto

// mostrar "relieved that no belt has blistered her skin"
// bajar un poco la velocidad
// mostrar más texto junto
// mantener una lectura más estable antes del siguiente cambio

// mostrar "no knife handle smashed down onto her knuckles"
// hacer que el texto aparezca de golpe
// generar un cambio brusco respecto a lo anterior
// marcar desde aquí un aumento más evidente de violencia

// mostrar "until they bleed"
// mantener la aparición brusca
// destacar "bleed" dejándola sola por un momento

// mostrar "for stealing money from she grandmother purse"
// volver a mostrar más texto junto
// mantener una velocidad intermedia
// dejar una pausa al terminar la estrofa


// tercera estrofa

// mostrar "I hear she made Anne pour in the oil and vinegar"
// mantener una velocidad intermedia
// hacer que "I hear" aparezca primero como una frase que comienza a repetirse en esta parte

// mostrar "and stir up that hot sauce, how she hold her down"
// hacer que "stir up that hot sauce" tenga un movimiento circular o repetitivo, como las burbujas de windows 
// relacionar el movimiento con la acción de revolver
// mantener el resto de la frase más estable

// mostrar "I hear she tied that girl to the bedposts"
// volver a mostrar "I hear"
// ir colocando las letras lentamente como máquina de escribir lenta
// mostrar el resto del verso de forma más continua

// mostrar "strung her out naked, like she there lying on a crucifix"
// mantener una aparición más lenta y pesada
// destacar la palabra "crucifix"
// hacer aparecer un dibujo simple de una cruz en píxeles junto a la palabra
// dejar una pausa breve

// mostrar "I hear she spread she out, then say"
// volver a mostrar "I hear"
// hacer que la repetición se empiece a sentir más insistente, llenar la pantalla de la frase 
// mantener una velocidad intermedia

// mostrar "I go teach you to go and steal from me, Miss Lady"
// mostrar primero la frase de forma continua
// separar "Miss Lady" del resto
// hacer que "Miss Lady" aparezca sola y más grande
// dejarla en pantalla por un momento
// dejar una pausa antes de continuar con la siguiente estrofa


// cuarta estrofa

// mostrar un trigger warning antes de comenzar esta parte
// avisar que la siguiente sección contiene violencia sexual y abuso
// dejar una pausa suficiente para que se pueda leer

// mostrar "I hear she scoop that pepper sauce out of a white enamel bowl"
// volver a usar "I hear" como inicio repetitivo
// mantener una velocidad más lenta y tensa
// mostrar el resto de la frase de forma continua

// mostrar la “ and pack it deep into she granddaughter’s pussy,”
// evitar una animación demasiado literal
// trabajar principalmente con pausas, lentitud y acumulación
// hacer que la lectura se sienta más pesada que en las estrofas anteriores

// mostrar "I hear there was one piece of screaming in the house that day"
// hacer aparecer "I hear" nuevamente
// destacar "screaming"
// hacer que "screaming" aumente de tamaño o ocupe gran parte de la pantalla
// dejar el resto de la frase aparecer después

// dejar la pantalla vacía por un momento
// marcar el punto de mayor intensidad hasta ahora



// quinta estrofa

// mostrar "Anne bawl till she turn hoarse"
// empezar a acumular más texto en pantalla
// aumentar la intensidad respecto a la estrofa anterior
// destacar "bawl" como palabra que se repetirá

// mostrar "bawl till the hair on the neighbours skin raise up"
// volver a mostrar "bawl"
// hacer que aparezca más grande o más rápido que antes
// mantener parte del verso anterior visible para generar acumulación

// mostrar "bawl till she start hiss through her teeth"
// repetir nuevamente "bawl"
// seguir aumentando el tamaño o la velocidad
// hacer que la pantalla se sienta cada vez más llena

// mostrar "bawl till she mouth could make no more sound"
// mostrar la última repetición de "bawl"
// alcanzar el punto de mayor acumulación
// hacer que el texto ocupe gran parte de la pantalla

// borrar todo de golpe
// dejar la pantalla completamente vacía
// mantener una pausa más larga

// mostrar "I hear how she turn raw"
// volver a una velocidad lenta
// hacer que aparezca poco texto a la vez
// bajar la intensidad después del momento anterior

// mostrar "how that grandmother leave her there all day"
// mantener el ritmo lento
// mostrar la frase de forma continua
// dejar una pausa al terminar


// ultimo verso

// mostrar "I hear how she couldn’t walk or talk for weeks"
// mostrar la frase sola
// mantener una aparición lenta
// dejarla en pantalla durante más tiempo
// terminar con una pausa larga
// dejar la pantalla vacía al final
```

Probamos un primer código con lo que aprendimos:

```cpp
 /*
 * ---------------------------------------------------------------
 * USAGE NOTICE / FAIR USE - FAIR DEALING
 * ---------------------------------------------------------------
 * The text of the poem "Pepper Sauce" (from the collection
 * "Pepper Seed", 2013) used in this code belongs to its author,
 * Malika Booker.
 *
 * This text is partially reproduced in this project for strictly
 * educational, non-commercial purposes, as part of an academic
 * project at Universidad Diego Portales (UDP). The use is
 * transformative: the poem is reinterpreted through text animations
 * on an OLED display as an installation piece, not reproduced or
 * distributed as a standalone work.
 *
 * No authorship over the original poem text is claimed.
 * All rights to the poem belong to Malika Booker.
 *
 * This project is non-profit and does not seek to substitute
 * for the acquisition or reading of the original work.
 * ---------------------------------------------------------------
 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 32

Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);

// frame de introduccion: titulo y autora
char *intro[] = {
  "Poema 1:",
  "Pepper Sauce",
  "Malika Booker",
};

int cantidadLineasIntro = 3;

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  for (int i = 0; i < cantidadLineasIntro; i++) {
    escribirLetraPorLetra(intro[i], 0, 0, 100);
    delay(700);
  }
}

void loop() {
  // vacio por ahora
}

void escribirLetraPorLetra(char *texto, int x, int y, int velocidad) {
  display.clearDisplay();
  display.setCursor(x, y);

  for (int i = 0; texto[i] != '\0'; i++) {
    display.print(texto[i]);
    display.display();
    delay(velocidad);
  }
}
```


## encargos

encargo-03b:

1. apuntes personales de String, string, array, con bibliografia y con pantallazos de resultados, y dudas textuales.
2. subir código a su bitácora ordenado con el formato de backticks a continuación, del proyecto hasta ahora.

Probamos un primer código con lo que aprendimos:

```cpp
 /*
 * ---------------------------------------------------------------
 * USAGE NOTICE / FAIR USE - FAIR DEALING
 * ---------------------------------------------------------------
 * The text of the poem "Pepper Sauce" (from the collection
 * "Pepper Seed", 2013) used in this code belongs to its author,
 * Malika Booker.
 *
 * This text is partially reproduced in this project for strictly
 * educational, non-commercial purposes, as part of an academic
 * project at Universidad Diego Portales (UDP). The use is
 * transformative: the poem is reinterpreted through text animations
 * on an OLED display as an installation piece, not reproduced or
 * distributed as a standalone work.
 *
 * No authorship over the original poem text is claimed.
 * All rights to the poem belong to Malika Booker.
 *
 * This project is non-profit and does not seek to substitute
 * for the acquisition or reading of the original work.
 * ---------------------------------------------------------------
 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 32

Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);

// frame de introduccion: titulo y autora
char *intro[] = {
  "Poema 1:",
  "Pepper Sauce",
  "Malika Booker",
};

int cantidadLineasIntro = 3;

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  for (int i = 0; i < cantidadLineasIntro; i++) {
    escribirLetraPorLetra(intro[i], 0, 0, 100);
    delay(700);
  }
}

void loop() {
  // vacio por ahora
}

void escribirLetraPorLetra(char *texto, int x, int y, int velocidad) {
  display.clearDisplay();
  display.setCursor(x, y);

  for (int i = 0; texto[i] != '\0'; i++) {
    display.print(texto[i]);
    display.display();
    delay(velocidad);
  }
}
```
  
4. definir y escribir el corpus a usar: autora, poemas, licencias, poblarlo en la carpeta 00-proyecto-1

Licencia: Copyright © 2013 Malika Booker. All rights reserved.
El poema no presenta una licencia Creative Commons o licencia abierta. La reproducción y creación de obras derivadas requiere autorización del titular de los derechos, salvo las excepciones legales aplicables a usos educativos, investigación o cita.

## lectura

