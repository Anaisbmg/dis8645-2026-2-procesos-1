# sesion-04a

## apuntes sesión

## encargos


partimos fulll trabajo

Ya teníamos el poema descargado, y ya le dimos acciones a cada verso, palabra, dependiendo. Lo dejamos así:

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


// mostrar "and pack it deep into she granddaughter’s pussy,"
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



// último verso


// mostrar "I hear how she couldn’t walk or talk for weeks"
// mostrar la frase sola
// mantener una aparición lenta
// dejarla en pantalla durante más tiempo
// terminar con una pausa larga
// dejar la pantalla vacía al final
```


Declaramos primero las variables, los arrays de cada verso, que va variando dependiendo de lo que haremos con ese verso, así que eso es lo primero del código después del título, y después ya empezamos a codificar por partes 


Fuimos viendo verso por verso con Chat, pidiéndole siempre que nos explique lo que hace. En un punto ya entendíamos lo que estábamos haciendo, aunque muy principiantemente}}

NO TENÍAMOS IDEA que había que usar un botón y un potenciómetro, claramente de distraídos, así que decidimos terminar el código de todo primero y después veremos qué función darle al botón y al potenciómetro.

El potenciómetro puede hacer:

- turning
  
- tamaño de fuente
  
- brillo


Tenemos cuatro botones, usaremos tres!!

- play
  
- pausa
  
- repeat


Entre esas opciones dejamos el play, pausa y repeat, y el potenciómetro va a manejar el tamaño de la fuente.


Para conectar a tierra toda la línea sirve, porque en la electricidad significa que es el mismo punto.


Agregamos las funciones de los botones y el potenciómetro. Aún no sabemos si funciona, estamos intentando conectar los botones primero (difícil).
  

Si dos componentes tienen I2C (cómo se comunica) son compatibles.


ORDENAR ARCHIVOS

Carpeta dentro de códigos (con fechas) en el proyecto!! 


Cpp tiene:

.h propone, anuncia.

.cpp hace que pase.

En Arduino separar por pestañas (archivos). 

aquí va lo que está en X pestaña. sería::

#include "cuadros.h"


Se puede usar para lo que sea mientras esté el #include.


Cómo va nuestro código:

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


// ------------------------------------------------
// CONTROLES
// ------------------------------------------------

#define BOTON_PLAY 2
#define BOTON_STOP 3
#define BOTON_REPEAT 4

#define POTENCIOMETRO A0


bool reproduciendo = false;
bool repetir = false;

int tamanoLetra = 1;


// ------------------------------------------------
// TEXTOS DEL POEMA
// ------------------------------------------------

// PRIMERA ESTROFA

char e1_v1[] = "I pray";
char e1_v2[] = "for that";
char e1_v3[] = "grandmother";
char e1_v4[] = "grinding her teeth";
char e1_v5[] = "one hand pushing in fresh hot peppers, seeds and all";
char e1_v6[] = "turning the handle of that old iron mill";
char e1_v7[] = "squeezing the limes, knowing";
char e1_v8[] = "they will burn and cut raw like acid";

char e1_golpe1[] = "BURN";
char e1_golpe2[] = "CUT";
char e1_golpe3[] = "RAW";
char e1_golpe4[] = "ACID";


// SEGUNDA ESTROFA

char e2_v1[] = "She pours in vinegar and gets Anne to chop five onions";
char e2_v2[] = "with a whole bulb of garlic";
char e2_v3[] = "Chop them up";
char e2_v4[] = "real fine girl";
char e2_v5[] = "you hear?";
char e2_v6[] = "And Anne dicing";
char e2_v7[] = "and crying";
char e2_v8[] = "relieved that no belt has blistered her skin";
char e2_v9[] = "no knife handle smashed down onto her knuckles";
char e2_v10[] = "until they bleed";
char e2_v11[] = "for stealing money from she grandmother purse";


// TERCERA ESTROFA

char e3_v1[] = "I hear she made Anne pour in the oil and vinegar";
char e3_v2[] = "stir up that hot sauce";
char e3_v3[] = "how she hold her down";
char e3_v4[] = "I hear she tied that girl to the bedposts";
char e3_v5[] = "strung her out naked";
char e3_v6[] = "like she there lying on a crucifix";
char e3_v7[] = "I hear she spread she out, then say";
char e3_v8[] = "I go teach you to go and steal from me";
char e3_v9[] = "Miss Lady";


// CUARTA ESTROFA

char e4_warning[] = "WARNING: violence and abuse";
char e4_v1[] = "I hear she scoop that pepper sauce out of a white enamel bowl";
char e4_v2[] = "and pack it deep into she granddaughter's";
char e4_v3[] = "I hear there was one piece of screaming in the house that day";
char e4_golpe[] = "SCREAMING";


// QUINTA ESTROFA

char e5_v1[] = "Anne bawl till she turn hoarse";
char e5_v2[] = "bawl till the hair on the neighbours skin raise up";
char e5_v3[] = "bawl till she start hiss through her teeth";
char e5_v4[] = "bawl till she mouth could make no more sound";
char e5_v5[] = "I hear how she turn raw";
char e5_v6[] = "how that grandmother leave her there all day";


// FINAL

char final_v1[] = "I hear how she couldn't walk or talk for weeks";


// ------------------------------------------------
// FRAME INTRODUCCION
// ------------------------------------------------

char *intro[] = {
  "Poema 1:",
  "Pepper Sauce",
  "Malika Booker",
};

int cantidadLineasIntro = 3;


// ------------------------------------------------
// DECLARACIONES DE FUNCIONES
// ------------------------------------------------

void escribirLetraPorLetra(char *texto, int x, int y, int velocidad);
void moverMolino(char *texto);
void mostrarGolpe(char *texto);

void primeraEstrofa();
void segundaEstrofa();

void leerControles();
void reproducirPoema();


// ------------------------------------------------
// SETUP
// ------------------------------------------------

void setup() {

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }


  pinMode(BOTON_PLAY, INPUT_PULLUP);
  pinMode(BOTON_STOP, INPUT_PULLUP);
  pinMode(BOTON_REPEAT, INPUT_PULLUP);


  display.setTextColor(SSD1306_WHITE);


  for (int i = 0; i < cantidadLineasIntro; i++) {

    escribirLetraPorLetra(intro[i], 0, 0, 100);

    delay(700);

  }

}


// ------------------------------------------------
// LOOP
// ------------------------------------------------

void loop() {


  leerControles();


  if (reproduciendo == true) {

    reproducirPoema();


    if (repetir == false) {

      reproduciendo = false;

    }

  }

}


// ------------------------------------------------
// FUNCIONES DE ANIMACION
// ------------------------------------------------


void escribirLetraPorLetra(char *texto, int x, int y, int velocidad) {

  display.clearDisplay();
  display.setCursor(x, y);


  for (int i = 0; texto[i] != '\0'; i++) {

    display.print(texto[i]);
    display.display();

    delay(velocidad);

  }

}



void moverMolino(char *texto) {


  for (int x = 128; x >= 0; x--) {

    display.clearDisplay();

    display.setCursor(x, 10);
    display.print(texto);

    display.display();

    delay(30);

  }


  for (int x = 0; x <= 128; x++) {

    display.clearDisplay();

    display.setCursor(x, 10);
    display.print(texto);

    display.display();

    delay(30);

  }

}



void mostrarGolpe(char *texto) {


  display.clearDisplay();

  display.fillScreen(SSD1306_WHITE);

  display.setTextColor(SSD1306_BLACK);

  display.setTextSize(2);

  display.setCursor(10, 10);

  display.print(texto);

  display.display();


  delay(550);


  display.clearDisplay();

  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);

  display.display();


  delay(200);

}


// ------------------------------------------------
// ESTROFAS
// ------------------------------------------------


void primeraEstrofa() {

  escribirLetraPorLetra(e1_v1, 0, 0, 150);
  delay(500);

  escribirLetraPorLetra(e1_v2, 0, 0, 150);
  delay(500);

  escribirLetraPorLetra(e1_v3, 0, 0, 150);
  delay(1000);

  escribirLetraPorLetra(e1_v4, 0, 0, 70);
  delay(700);

  escribirLetraPorLetra(e1_v5, 0, 0, 100);
  delay(800);

  moverMolino(e1_v6);
  delay(800);

  escribirLetraPorLetra(e1_v7, 0, 0, 120);
  delay(800);

  escribirLetraPorLetra(e1_v8, 0, 0, 120);
  delay(800);


  mostrarGolpe(e1_golpe1);
  mostrarGolpe(e1_golpe2);
  mostrarGolpe(e1_golpe3);
  mostrarGolpe(e1_golpe4);


  display.clearDisplay();
  display.display();

  delay(2000);

}



void segundaEstrofa() {


  escribirLetraPorLetra(e2_v1, 0, 0, 100);

  delay(800);

}


// ------------------------------------------------
// CONTROLADORES
// ------------------------------------------------


void leerControles() {


  if (digitalRead(BOTON_PLAY) == LOW) {

    reproduciendo = true;

    delay(200);

  }



  if (digitalRead(BOTON_STOP) == LOW) {

    reproduciendo = false;

    display.clearDisplay();
    display.display();

    delay(200);

  }



  if (digitalRead(BOTON_REPEAT) == LOW) {

    repetir = !repetir;

    delay(200);

  }



  int lecturaPot = analogRead(POTENCIOMETRO);


  tamanoLetra = map(lecturaPot, 0, 1023, 1, 3);

}



// ------------------------------------------------
// REPRODUCCION DEL POEMA
// ------------------------------------------------

void reproducirPoema() {

  primeraEstrofa();

  segundaEstrofa();

}


```

## lectura


PAG 15-30

En estas páginas sentí que el autor se mete más en explicar por qué cuesta tanto definir la poesía digital. Habla de que puede mezclar texto, programación, imágenes, sonido, movimiento, links y otras cosas, entonces no hay una sola forma de hacerla.

También aparece harto el hipertexto y la idea de que el lector puede participar más en cómo recorre una obra, porque no siempre tiene que leer todo en un orden fijo.

Otra cosa que entendí es que la poesía digital no tiene que ser algo estático. Puede cambiar, moverse o depender del programa con el que fue hecha. Eso igual la hace más difícil de conservar, porque si el software o el computador queda viejo, la obra puede dejar de funcionar.

Después habla de todos los nombres que se han usado para estas obras: e-poetry, cyberpoetry, computer poetry, kinetic poetry, web poetry, etc. Básicamente confirma que ni los mismos autores se ponen completamente de acuerdo con cómo llamarla.



Citas


“Digital poetry is not a fixed object” (p. 18)


“A poem is a digital poem if computer programming or processes (software) are distinctively used in the composition, generation, or presentation of the text.” (p. 22)



Cosas que me quedaron

Me quedó más claro por qué el libro insiste tanto en que es difícil definir la poesía digital, porque puede tomar demasiadas formas distintas.

También me llamó la atención que algunas obras puedan dejar de funcionar solo porque la tecnología con la que fueron hechas quedó obsoleta.

Y esto igual se relaciona con lo que estamos haciendo en clases, porque al cambiar cómo aparece un poema en una pantalla, cambia un poco cómo se lee.
