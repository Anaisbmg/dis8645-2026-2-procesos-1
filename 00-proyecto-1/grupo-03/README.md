# **Proyecto 1: ;p0ema** 

*Tomás Catrileo (tomascarti)*                
*Kristel Ladrón de Guevara (kristelagj)*                
*Angel Savolgal (angel-udp)*

<br>

## **1\. Concepto y Extracto Escogido**

Nuestro grupo eligió ;p0ema de Leonor Olmos. Es el extracto del poema 4, página 9\. 

> Este poema nada puede resolver.  
> Adentro del poema, la muerte se consume.
>
> Ya, dilo de nuevo, el porcentaje de pureza  
> mezclado con un poco de sol.  
> Con un poco de hambre
>
> Todo acaba aquí y de pronto no.  
> Un nuevo servidor, un poema electrónico, un mesías.
>
> Poema bajando desde el cielo  
> Solo los elegidos contemplan su propia destrucción.
>
> No, en serio, este poema nada puede resolver.

## **2\. Corpus y Licencias (Legal)**

La obra original establece en su página legal: *"Ninguna parte de esta publicación puede ser reproducida o transmitida mediante cualquier soporte sin la expresa autorización de la editorial"*.

Para cumplir con las normativas de derechos de autor nos contactamos directamente con la editorial vía correo electrónico, la cual nos otorgó el permiso para su uso meramente académico. 

<div align="center">
  <img src="./imagenes/autorizacion-editorial.png" width="50%">
</div>

Lo primero que desarrollamos como grupo fue proponer cómo representar visualmente el poema en base a referentes y cómo podríamos expresar las líneas con distintos énfasis mediante posibles tipografías, tamaños y contrastes que nos ayudarán a construir los style frames, que posteriormente pasarán a código y serán parte fundamental de la construcción de este, además de buscar personas que ocuparan este tipo de pantallas, usos, etc.

Destacamos que revisamos los ejemplos del año pasado y preguntándonos como por ejemplo, el uso de los potenciómetros, lo cual nos ayudó en el futuro a poder avanzar el poema, en este caso utilizamos el ejemplo que se hizo en clases de un extracto de akriila

https://www.youtube.com/shorts/XyG0R0R_QLA

https://youtube.com/shorts/wRhWjAYHneg?si=3jWqMo152J_n11eG

Para la realizacion de codigo le preguntamos a Gemini de a poco para experimentar

https://share.gemini.google/zP8mZ9fykuPX (conversacion)

El primer paso fue probar con un potenciometro de b500k poder cambiar de numero del 1 al 7 en la pantalla 128 x32

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C // Cambiar a 0x3D si tu pantalla usa esa dirección

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int potPin = A0;
int valorAnterior = -1;

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;); // Bloqueo si no detecta la pantalla
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  int lecturaADC = analogRead(potPin);

  // Mapea de 0-1023 al rango 1-7 (se usa 8 en el límite superior para abarcar bien el 7)
  int numero = map(lecturaADC, 0, 1024, 1, 8);
  numero = constrain(numero, 1, 7);

  // Solo actualiza la pantalla si el valor cambió para evitar parpadeos
  if (numero != valorAnterior) {
    valorAnterior = numero;

    display.clearDisplay();
    display.setTextSize(3);
    
    // Centrar el número en la pantalla (128x32)
    display.setCursor(55, 6);
    display.print(numero);
    display.display();
  }

  delay(20);
}
```
primer fallo que encontramos fue que los numeros eran muy susteptibles al cambio si se tocaba el potenciometro o si se movia, por lo que añadimos un filtro de ruido y cambiamos los numeros por la cancion de akrila.

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C // 0x3C o 0x3D según tu módulo

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int potPin = A0;

// Arreglo de versos (5 elementos: índices 0 a 4)
const char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaria perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estas con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mi, te lo juro, ah"
};

const int totalVersos = sizeof(misVersos) / sizeof(misVersos[0]);

int versoActual = -1;
int lecturaFiltrada = 0;

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextWrap(true); // Permite que el texto baje a la siguiente línea si es largo

  lecturaFiltrada = analogRead(potPin);
}

void loop() {
  // 1. Filtro paso bajo (Exponential Moving Average) para suavizar la lectura
  int lecturaRaw = analogRead(potPin);
  lecturaFiltrada = (lecturaFiltrada * 7 + lecturaRaw) / 8;

  // 2. Mapeo seguro al rango de índices (0 a 4)
  int nuevoVerso = map(lecturaFiltrada, 0, 1024, 0, totalVersos);
  nuevoVerso = constrain(nuevoVerso, 0, totalVersos - 1);

  // 3. Actualización de pantalla solo al cambiar de verso
  if (nuevoVerso != versoActual) {
    versoActual = nuevoVerso;

    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(0, 4);
    display.print(misVersos[versoActual]);
    display.display();
  }

  delay(20);
}
```
Despues le dijimos a gemini que nos explicara cada linea de codigo para que entendieramos que cambio respecto a la explicacion de Aaron
por ultimo experimentamos con nuestros propias propuestas de poemas para darnos una idea de como seria.
