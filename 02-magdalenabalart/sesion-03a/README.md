# sesion-03a

## apuntes sesión

pantalla lcd oled 0,91" interfaz **I2C** monocromática, **controlador SSD1306** conexión paralela en bread board, x ddistante en paralelo del medio, de esta forma cada pantita de la pnatlla va a vivir en la bread board 

gnd = tierra 
vcc = Voltaje del Colector Común
sck = señal de clock
sda = señal de datos

voltaje de operación : 3.3v - 5v 

Pantalla       Microcontrolador
VCC     →      5V
GND     →      GND
SDA     →      SDA
SCL     →      SCL

Arduino        Pantalla
A4 (SDA)   →   SDA
A5 (SCL)   →   SCK

testdraw codigo 

Librería comprar libros
biblbioteca pedir prestado 

biblioteca presta mini codigos que vamos a usar
proyecto de distintos archivos de codigos que en conjunto creamos un solo proyecto 

**controlador SSD1306** 
instalar en arduino biblioteca dde adafruit 2.5.17 es un a función, alguien se hace cargo de hcaer un biblioteca donde reduce la función 

https://github.com/adafruit/Adafruit_SSD1306/blob/master/Adafruit_SSD1306.cpp 

#include (anda a ese archivo anda e inclúyelo aquí) 

Aarón colecciona muchas bibliotecas, es como frieren 

display es una pantalla o dispositivo visual 

... (depende) 


las patitas de arduino tienen varias vidas: 

arduino uno r4 sigue comparteindo los entandares de arduino uno r3

azul = scl = chile lo mas grandde = conexión  a numero mas grande 
amarillo = sda 




```cpp
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES     10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16

void setup() {
  Serial.begin(9600);

  // Wait for display
  delay(500);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

 void testscrolltext(void) {
  display.clearDisplay();

  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("scroll"));
  display.display();      // Show initial text
  delay(100);

  // Scroll in various directions, pausing in-between:
  display.startscrollright(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrollleft(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrolldiagright(0x00, 0x07);
  delay(2000);
  display.startscrolldiagleft(0x00, 0x07);
  delay(2000);
  display.stopscroll();
  delay(1000);
}

void testdrawbitmap(void) {
  display.clearDisplay();

  display.drawBitmap(
    (display.width()  - LOGO_WIDTH ) / 2,
    (display.height() - LOGO_HEIGHT) / 2,
    logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, 1);
  display.display();
  delay(1000);
}

#define XPOS   0 // Indexes into the 'icons' array in function below
#define YPOS   1
#define DELTAY 2


      }
    }
  }
}
```


describir en texto

imprimir en pantalla el siguiente poema de Gansos salvajes

Mary Oliver


describir en coreografías 

//aparece en scroll subiendo:
-no tienes
-que ser buena 

//aparece en scroll diagonal izq:
-no tienes 
//aparece en scroll diagonal y seguir scroll para que aparezca todo el texto:
-que recorrer el desierto de rodillas 
//aparece en scroll subiendo:
-arrepintiéndote 

-háblame del dolor
-del tuyo
-yo 
-te hablaré
-del míio

//el primer párrafo entra 



SCREEN_WIDTH = 128
SCREEN_HEIGHT = 32

(0,0) --------------------------> X
  |
  |
  |
  |
  v
  Y

x = 0
y = 0

display.setCursor(50, 20);

┌─────────────────────────────┐
│                             │
│                             │
│           TEXTO             │
│                             │
└─────────────────────────────┘
            ↑
         x=50 y=20


variables que representan posiciones

https://www.youtube.com/watch?v=-i5yaTPMFDE&t=215s


dibujar

programar

void textoSubiendo() {










## encargos

## lectura
