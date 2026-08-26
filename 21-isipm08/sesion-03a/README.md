# sesion-03a

## apuntes sesión
- realizaremos un gran proyecto antes del 18
- martes 8 septiembre -- entrega

pantalla LCD Oled 0.91" I2C
- I2C protocolo (proto, tierra, reloj, dato)
- circuito inter-integrado
- conectar circuitos integrados y dispositivos a corta distancia

- patas más fáciles a conectar VCC - GND
- sck -- señal de clock
- sda -- señal de datos
- BIBLIOTECA no librería
- instalar bibliotecas SSD1306/ Adafruit SSD1306
- borrar de una forma no destructiva -- comentar

poesía + computación
Ramsey Nasser
Allison Parrish
Nick Montfort

utilizamos dos ejemplos para utilizar en la pantalla LCD, el cual los subimos desde Arduino IDE 

### ejemplo principal pantalla 

```cpp
/\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*

\&#x20;This is an example for our Monochrome OLEDs based on SSD1306 drivers



\&#x20;Pick one up today in the adafruit shop!

\&#x20;------> http://www.adafruit.com/category/63\\\_98



\&#x20;This example is for a 128x32 pixel display using I2C to communicate

\&#x20;3 pins are required to interface (two I2C and one reset).



\&#x20;Adafruit invests time and resources providing this open

\&#x20;source code, please support Adafruit and open-source

\&#x20;hardware by purchasing products from Adafruit!



\&#x20;Written by Limor Fried/Ladyada for Adafruit Industries,

\&#x20;with contributions from the open source community.

\&#x20;BSD license, check license.txt for more information

\&#x20;All text above, and the splash screen below must be

\&#x20;included in any redistribution.

\&#x20;\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*\\\*/



\\#include <SPI.h>

\\#include <Wire.h>

\\#include <Adafruit\\\_GFX.h>

\\#include <Adafruit\\\_SSD1306.h>



\\#define SCREEN\\\_WIDTH 128 // OLED display width, in pixels

\\#define SCREEN\\\_HEIGHT 32 // OLED display height, in pixels



// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)

// The pins for I2C are defined by the Wire-library. 

// On an arduino UNO:       A4(SDA), A5(SCL)

// On an arduino MEGA 2560: 20(SDA), 21(SCL)

// On an arduino LEONARDO:   2(SDA),  3(SCL), ...

\\#define OLED\\\_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)

\\#define SCREEN\\\_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit\\\_SSD1306 display(SCREEN\\\_WIDTH, SCREEN\\\_HEIGHT, \\\&Wire, OLED\\\_RESET);



\\#define NUMFLAKES     10 // Number of snowflakes in the animation example



\\#define LOGO\\\_HEIGHT   16

\\#define LOGO\\\_WIDTH    16

static const unsigned char PROGMEM logo\\\_bmp\\\[] =

{ 0b00000000, 0b11000000,

\&#x20; 0b00000001, 0b11000000,

\&#x20; 0b00000001, 0b11000000,

\&#x20; 0b00000011, 0b11100000,

\&#x20; 0b11110011, 0b11100000,

\&#x20; 0b11111110, 0b11111000,

\&#x20; 0b01111110, 0b11111111,

\&#x20; 0b00110011, 0b10011111,

\&#x20; 0b00011111, 0b11111100,

\&#x20; 0b00001101, 0b01110000,

\&#x20; 0b00011011, 0b10100000,

\&#x20; 0b00111111, 0b11100000,

\&#x20; 0b00111111, 0b11110000,

\&#x20; 0b01111100, 0b11110000,

\&#x20; 0b01110000, 0b01110000,

\&#x20; 0b00000000, 0b00110000 };



void setup() {

\&#x20; Serial.begin(9600);



\&#x20; // Wait for display

\&#x20; delay(500);



\&#x20; // SSD1306\\\_SWITCHCAPVCC = generate display voltage from 3.3V internally

\&#x20; if(!display.begin(SSD1306\\\_SWITCHCAPVCC, SCREEN\\\_ADDRESS)) {

\&#x20;   Serial.println(F("SSD1306 allocation failed"));

\&#x20;   for(;;); // Don't proceed, loop forever

\&#x20; }



\&#x20; // Show initial display buffer contents on the screen --

\&#x20; // the library initializes this with an Adafruit splash screen.

\&#x20; display.display();

\&#x20; delay(2000); // Pause for 2 seconds



\&#x20; // Clear the buffer

\&#x20; display.clearDisplay();



\&#x20; // Draw a single pixel in white

\&#x20; display.drawPixel(10, 10, SSD1306\\\_WHITE);



\&#x20; // Show the display buffer on the screen. You MUST call display() after

\&#x20; // drawing commands to make them visible on screen!

\&#x20; display.display();

\&#x20; delay(2000);

\&#x20; // display.display() is NOT necessary after every single drawing command,

\&#x20; // unless that's what you want...rather, you can batch up a bunch of

\&#x20; // drawing operations and then update the screen all at once by calling

\&#x20; // display.display(). These examples demonstrate both approaches...



\&#x20; testdrawline();      // Draw many lines



\&#x20; testdrawrect();      // Draw rectangles (outlines)



\&#x20; testfillrect();      // Draw rectangles (filled)



\&#x20; testdrawcircle();    // Draw circles (outlines)



\&#x20; testfillcircle();    // Draw circles (filled)



\&#x20; testdrawroundrect(); // Draw rounded rectangles (outlines)



\&#x20; testfillroundrect(); // Draw rounded rectangles (filled)



\&#x20; testdrawtriangle();  // Draw triangles (outlines)



\&#x20; testfilltriangle();  // Draw triangles (filled)



\&#x20; testdrawchar();      // Draw characters of the default font



\&#x20; testdrawstyles();    // Draw 'stylized' characters



\&#x20; testscrolltext();    // Draw scrolling text



\&#x20; testdrawbitmap();    // Draw a small bitmap image



\&#x20; // Invert and restore display, pausing in-between

\&#x20; display.invertDisplay(true);

\&#x20; delay(1000);

\&#x20; display.invertDisplay(false);

\&#x20; delay(1000);



\&#x20; testanimate(logo\\\_bmp, LOGO\\\_WIDTH, LOGO\\\_HEIGHT); // Animate bitmaps

}



void loop() {

}



void testdrawline() {

\&#x20; int16\\\_t i;



\&#x20; display.clearDisplay(); // Clear display buffer



\&#x20; for(i=0; i<display.width(); i+=4) {

\&#x20;   display.drawLine(0, 0, i, display.height()-1, SSD1306\\\_WHITE);

\&#x20;   display.display(); // Update screen with each newly-drawn line

\&#x20;   delay(1);

\&#x20; }

\&#x20; for(i=0; i<display.height(); i+=4) {

\&#x20;   display.drawLine(0, 0, display.width()-1, i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; delay(250);



\&#x20; display.clearDisplay();



\&#x20; for(i=0; i<display.width(); i+=4) {

\&#x20;   display.drawLine(0, display.height()-1, i, 0, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; for(i=display.height()-1; i>=0; i-=4) {

\&#x20;   display.drawLine(0, display.height()-1, display.width()-1, i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; delay(250);



\&#x20; display.clearDisplay();



\&#x20; for(i=display.width()-1; i>=0; i-=4) {

\&#x20;   display.drawLine(display.width()-1, display.height()-1, i, 0, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; for(i=display.height()-1; i>=0; i-=4) {

\&#x20;   display.drawLine(display.width()-1, display.height()-1, 0, i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; delay(250);



\&#x20; display.clearDisplay();



\&#x20; for(i=0; i<display.height(); i+=4) {

\&#x20;   display.drawLine(display.width()-1, 0, 0, i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }

\&#x20; for(i=0; i<display.width(); i+=4) {

\&#x20;   display.drawLine(display.width()-1, 0, i, display.height()-1, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000); // Pause for 2 seconds

}



void testdrawrect(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<display.height()/2; i+=2) {

\&#x20;   display.drawRect(i, i, display.width()-2\\\*i, display.height()-2\\\*i, SSD1306\\\_WHITE);

\&#x20;   display.display(); // Update screen with each newly-drawn rectangle

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testfillrect(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<display.height()/2; i+=3) {

\&#x20;   // The INVERSE color is used so rectangles alternate white/black

\&#x20;   display.fillRect(i, i, display.width()-i\\\*2, display.height()-i\\\*2, SSD1306\\\_INVERSE);

\&#x20;   display.display(); // Update screen with each newly-drawn rectangle

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testdrawcircle(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<max(display.width(),display.height())/2; i+=2) {

\&#x20;   display.drawCircle(display.width()/2, display.height()/2, i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testfillcircle(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=max(display.width(),display.height())/2; i>0; i-=3) {

\&#x20;   // The INVERSE color is used so circles alternate white/black

\&#x20;   display.fillCircle(display.width() / 2, display.height() / 2, i, SSD1306\\\_INVERSE);

\&#x20;   display.display(); // Update screen with each newly-drawn circle

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testdrawroundrect(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<display.height()/2-2; i+=2) {

\&#x20;   display.drawRoundRect(i, i, display.width()-2\\\*i, display.height()-2\\\*i,

\&#x20;     display.height()/4, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testfillroundrect(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<display.height()/2-2; i+=2) {

\&#x20;   // The INVERSE color is used so round-rects alternate white/black

\&#x20;   display.fillRoundRect(i, i, display.width()-2\\\*i, display.height()-2\\\*i,

\&#x20;     display.height()/4, SSD1306\\\_INVERSE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testdrawtriangle(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=0; i<max(display.width(),display.height())/2; i+=5) {

\&#x20;   display.drawTriangle(

\&#x20;     display.width()/2  , display.height()/2-i,

\&#x20;     display.width()/2-i, display.height()/2+i,

\&#x20;     display.width()/2+i, display.height()/2+i, SSD1306\\\_WHITE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testfilltriangle(void) {

\&#x20; display.clearDisplay();



\&#x20; for(int16\\\_t i=max(display.width(),display.height())/2; i>0; i-=5) {

\&#x20;   // The INVERSE color is used so triangles alternate white/black

\&#x20;   display.fillTriangle(

\&#x20;     display.width()/2  , display.height()/2-i,

\&#x20;     display.width()/2-i, display.height()/2+i,

\&#x20;     display.width()/2+i, display.height()/2+i, SSD1306\\\_INVERSE);

\&#x20;   display.display();

\&#x20;   delay(1);

\&#x20; }



\&#x20; delay(2000);

}



void testdrawchar(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(1);      // Normal 1:1 pixel scale

\&#x20; display.setTextColor(SSD1306\\\_WHITE); // Draw white text

\&#x20; display.setCursor(0, 0);     // Start at top-left corner

\&#x20; display.cp437(true);         // Use full 256 char 'Code Page 437' font



\&#x20; // Not all the characters will fit on the display. This is normal.

\&#x20; // Library will draw what it can and the rest will be clipped.

\&#x20; for(int16\\\_t i=0; i<256; i++) {

\&#x20;   if(i == '\\\\n') display.write(' ');

\&#x20;   else          display.write(i);

\&#x20; }



\&#x20; display.display();

\&#x20; delay(2000);

}



void testdrawstyles(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(1);             // Normal 1:1 pixel scale

\&#x20; display.setTextColor(SSD1306\\\_WHITE);        // Draw white text

\&#x20; display.setCursor(0,0);             // Start at top-left corner

\&#x20; display.println(F("Hello, world!"));



\&#x20; display.setTextColor(SSD1306\\\_BLACK, SSD1306\\\_WHITE); // Draw 'inverse' text

\&#x20; display.println(3.141592);



\&#x20; display.setTextSize(2);             // Draw 2X-scale text

\&#x20; display.setTextColor(SSD1306\\\_WHITE);

\&#x20; display.print(F("0x")); display.println(0xDEADBEEF, HEX);



\&#x20; display.display();

\&#x20; delay(2000);

}



void testscrolltext(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(2); // Draw 2X-scale text

\&#x20; display.setTextColor(SSD1306\\\_WHITE);

\&#x20; display.setCursor(10, 0);

\&#x20; display.println(F("scroll"));

\&#x20; display.display();      // Show initial text

\&#x20; delay(100);



\&#x20; // Scroll in various directions, pausing in-between:

\&#x20; display.startscrollright(0x00, 0x0F);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

\&#x20; display.startscrollleft(0x00, 0x0F);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

\&#x20; display.startscrolldiagright(0x00, 0x07);

\&#x20; delay(2000);

\&#x20; display.startscrolldiagleft(0x00, 0x07);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

}



void testdrawbitmap(void) {

\&#x20; display.clearDisplay();



\&#x20; display.drawBitmap(

\&#x20;   (display.width()  - LOGO\\\_WIDTH ) / 2,

\&#x20;   (display.height() - LOGO\\\_HEIGHT) / 2,

\&#x20;   logo\\\_bmp, LOGO\\\_WIDTH, LOGO\\\_HEIGHT, 1);

\&#x20; display.display();

\&#x20; delay(1000);

}



\\#define XPOS   0 // Indexes into the 'icons' array in function below

\\#define YPOS   1

\\#define DELTAY 2



void testanimate(const uint8\\\_t \\\*bitmap, uint8\\\_t w, uint8\\\_t h) {

\&#x20; int8\\\_t f, icons\\\[NUMFLAKES]\\\[3];



\&#x20; // Initialize 'snowflake' positions

\&#x20; for(f=0; f< NUMFLAKES; f++) {

\&#x20;   icons\\\[f]\\\[XPOS]   = random(1 - LOGO\\\_WIDTH, display.width());

\&#x20;   icons\\\[f]\\\[YPOS]   = -LOGO\\\_HEIGHT;

\&#x20;   icons\\\[f]\\\[DELTAY] = random(1, 6);

\&#x20;   Serial.print(F("x: "));

\&#x20;   Serial.print(icons\\\[f]\\\[XPOS], DEC);

\&#x20;   Serial.print(F(" y: "));

\&#x20;   Serial.print(icons\\\[f]\\\[YPOS], DEC);

\&#x20;   Serial.print(F(" dy: "));

\&#x20;   Serial.println(icons\\\[f]\\\[DELTAY], DEC);

\&#x20; }



\&#x20; for(;;) { // Loop forever...

\&#x20;   display.clearDisplay(); // Clear the display buffer



\&#x20;   // Draw each snowflake:

\&#x20;   for(f=0; f< NUMFLAKES; f++) {

\&#x20;     display.drawBitmap(icons\\\[f]\\\[XPOS], icons\\\[f]\\\[YPOS], bitmap, w, h, SSD1306\\\_WHITE);

\&#x20;   }



\&#x20;   display.display(); // Show the display buffer on the screen

\&#x20;   delay(200);        // Pause for 1/10 second



\&#x20;   // Then update coordinates of each flake...

\&#x20;   for(f=0; f< NUMFLAKES; f++) {

\&#x20;     icons\\\[f]\\\[YPOS] += icons\\\[f]\\\[DELTAY];

\&#x20;     // If snowflake is off the bottom of the screen...

\&#x20;     if (icons\\\[f]\\\[YPOS] >= display.height()) {

\&#x20;       // Reinitialize to a random position, just off the top

\&#x20;       icons\\\[f]\\\[XPOS]   = random(1 - LOGO\\\_WIDTH, display.width());

\&#x20;       icons\\\[f]\\\[YPOS]   = -LOGO\\\_HEIGHT;

\&#x20;       icons\\\[f]\\\[DELTAY] = random(1, 6);

\&#x20;     }

\&#x20;   }

\&#x20; }

}
```

```
Arduino
IIC = I2C
A4 -- SDA amarillo
A5 -- SCL azul
```

### ejemplo Aarón

```cpp
\\#include <SPI.h>

\\#include <Wire.h>

\\#include <Adafruit\\\_GFX.h>

\\#include <Adafruit\\\_SSD1306.h>



\\#define SCREEN\\\_WIDTH 128 // OLED display width, in pixels

\\#define SCREEN\\\_HEIGHT 32 // OLED display height, in pixels



\\#define OLED\\\_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)

\\#define SCREEN\\\_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit\\\_SSD1306 display(SCREEN\\\_WIDTH, SCREEN\\\_HEIGHT, \\\&Wire, OLED\\\_RESET);



\\#define NUMFLAKES     10 // Number of snowflakes in the animation example



\\#define LOGO\\\_HEIGHT   16

\\#define LOGO\\\_WIDTH    16



void setup() {

\&#x20; Serial.begin(9600);



\&#x20; // Wait for display

\&#x20; delay(500);



\&#x20; // SSD1306\\\_SWITCHCAPVCC = generate display voltage from 3.3V internally

\&#x20; if(!display.begin(SSD1306\\\_SWITCHCAPVCC, SCREEN\\\_ADDRESS)) {

\&#x20;   Serial.println(F("SSD1306 allocation failed"));

\&#x20;   for(;;); // Don't proceed, loop forever

\&#x20; }



\&#x20; // Show initial display buffer contents on the screen --

\&#x20; // the library initializes this with an Adafruit splash screen.

\&#x20; display.display();

\&#x20; delay(2000); // Pause for 2 seconds



\&#x20; // Clear the buffer

\&#x20; display.clearDisplay();



\&#x20; // Draw a single pixel in white

\&#x20; display.drawPixel(10, 10, SSD1306\\\_WHITE);



\&#x20; // Show the display buffer on the screen. You MUST call display() after

\&#x20; // drawing commands to make them visible on screen!

\&#x20; display.display();

\&#x20; delay(2000);

\&#x20; // display.display() is NOT necessary after every single drawing command,

\&#x20; // unless that's what you want...rather, you can batch up a bunch of

\&#x20; // drawing operations and then update the screen all at once by calling

\&#x20; // display.display(). These examples demonstrate both approaches...



\&#x20; testdrawchar();      // Draw characters of the default font



\&#x20; testdrawstyles();    // Draw 'stylized' characters



\&#x20; testscrolltext();    // Draw scrolling text

\&#x20; // Invert and restore display, pausing in-between

\&#x20; display.invertDisplay(true);

\&#x20; delay(1000);

\&#x20; display.invertDisplay(false);

\&#x20; delay(1000);



\&#x20; 

}



void loop() {

}



void testdrawchar(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(1);      // Normal 1:1 pixel scale

\&#x20; display.setTextColor(SSD1306\\\_WHITE); // Draw white text

\&#x20; display.setCursor(0, 0);     // Start at top-left corner

\&#x20; display.cp437(true);         // Use full 256 char 'Code Page 437' font



\&#x20; // Not all the characters will fit on the display. This is normal.

\&#x20; // Library will draw what it can and the rest will be clipped.

\&#x20; for(int16\\\_t i=0; i<256; i++) {

\&#x20;   if(i == '\\\\n') display.write(' ');

\&#x20;   else          display.write(i);

\&#x20; }



\&#x20; display.display();

\&#x20; delay(2000);

}



void testdrawstyles(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(1);             // Normal 1:1 pixel scale

\&#x20; display.setTextColor(SSD1306\\\_WHITE);        // Draw white text

\&#x20; display.setCursor(0,0);             // Start at top-left corner

\&#x20; display.println(F("Hello, world!"));



\&#x20; display.setTextColor(SSD1306\\\_BLACK, SSD1306\\\_WHITE); // Draw 'inverse' text

\&#x20; display.println(3.141592);



\&#x20; display.setTextSize(2);             // Draw 2X-scale text

\&#x20; display.setTextColor(SSD1306\\\_WHITE);

\&#x20; display.print(F("0x")); display.println(0xDEADBEEF, HEX);



\&#x20; display.display();

\&#x20; delay(2000);

}



void testscrolltext(void) {

\&#x20; display.clearDisplay();



\&#x20; display.setTextSize(2); // Draw 2X-scale text

\&#x20; display.setTextColor(SSD1306\\\_WHITE);

\&#x20; display.setCursor(10, 0);

\&#x20; display.println(F("scroll"));

\&#x20; display.display();      // Show initial text

\&#x20; delay(100);



\&#x20; // Scroll in various directions, pausing in-between:

\&#x20; display.startscrollright(0x00, 0x0F);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

\&#x20; display.startscrollleft(0x00, 0x0F);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

\&#x20; display.startscrolldiagright(0x00, 0x07);

\&#x20; delay(2000);

\&#x20; display.startscrolldiagleft(0x00, 0x07);

\&#x20; delay(2000);

\&#x20; display.stopscroll();

\&#x20; delay(1000);

}



\\#define XPOS   0 // Indexes into the 'icons' array in function below

\\#define YPOS   1

\\#define DELTAY 2



void testanimate(const uint8\\\_t \\\*bitmap, uint8\\\_t w, uint8\\\_t h) {

\&#x20; int8\\\_t f, icons\\\[NUMFLAKES]\\\[3];



\&#x20; // Initialize 'snowflake' positions

\&#x20; for(f=0; f< NUMFLAKES; f++) {

\&#x20;   icons\\\[f]\\\[XPOS]   = random(1 - LOGO\\\_WIDTH, display.width());

\&#x20;   icons\\\[f]\\\[YPOS]   = -LOGO\\\_HEIGHT;

\&#x20;   icons\\\[f]\\\[DELTAY] = random(1, 6);

\&#x20;   Serial.print(F("x: "));

\&#x20;   Serial.print(icons\\\[f]\\\[XPOS], DEC);

\&#x20;   Serial.print(F(" y: "));

\&#x20;   Serial.print(icons\\\[f]\\\[YPOS], DEC);

\&#x20;   Serial.print(F(" dy: "));

\&#x20;   Serial.println(icons\\\[f]\\\[DELTAY], DEC);

\&#x20; }



\&#x20; for(;;) { // Loop forever...

\&#x20;   display.clearDisplay(); // Clear the display buffer



\&#x20;   // Draw each snowflake:

\&#x20;   for(f=0; f< NUMFLAKES; f++) {

\&#x20;     display.drawBitmap(icons\\\[f]\\\[XPOS], icons\\\[f]\\\[YPOS], bitmap, w, h, SSD1306\\\_WHITE);

\&#x20;   }



\&#x20;   display.display(); // Show the display buffer on the screen

\&#x20;   delay(200);        // Pause for 1/10 second



\&#x20;   // Then update coordinates of each flake...

\&#x20;   for(f=0; f< NUMFLAKES; f++) {

\&#x20;     icons\\\[f]\\\[YPOS] += icons\\\[f]\\\[DELTAY];

\&#x20;     // If snowflake is off the bottom of the screen...

\&#x20;     if (icons\\\[f]\\\[YPOS] >= display.height()) {

\&#x20;       // Reinitialize to a random position, just off the top

\&#x20;       icons\\\[f]\\\[XPOS]   = random(1 - LOGO\\\_WIDTH, display.width());

\&#x20;       icons\\\[f]\\\[YPOS]   = -LOGO\\\_HEIGHT;

\&#x20;       icons\\\[f]\\\[DELTAY] = random(1, 6);

\&#x20;     }

\&#x20;   }

\&#x20; }

}
```
## lectura

### Mindstorms: Children, Computers and Powerful Ideas - Seymour Papert

etapa formal desarrollo intelectual
- pensamiento combinatorio: razonar en términos de conjunto todos los estados posibles de un sistema
- pensamiento autorreferencial: pensamiento mismo
- pensamiento concreto y pensamiento formal

circuito integrado como un todo — proceso preparatorio

computadora como una influencia potente en la mente humana

programa de computadora procede paso a paso, este estilo de pensamiento puede ser útil y aplicable en la vida cotidiana, en como nosotros como seres humanos podemos usar este procedimiento para poder generar un aprendizaje más rápido de las cosas y ordenado (pensamiento mecánico)

programar computadora y tomar decisiones complejas — reflexionar aspectos más complejos de su propio pensamiento

escritura — manual es laboriosa, priorizando así que reescribir un texto es tu copia final y el umbral de relectura con ojo crítico nunca es adquirida, mientras tanto la escritura digital es distinta, primer borrador desde un teclado, correcciones fáciles 

lenguaje programación — lenguaje natural

favorece ciertas formas de pensar 

lenguaje como sinónimo de programación 

```
BASIC — computacion
QWERTY — escribir
```

```
"When a child learns to program, the process of learning is transformed. It becomes more active and self-directed. In particular, the knowledge is acquired for a recognizable personal purpose. The child does something with it."

"Cuando un niño aprende a programar, el proceso de aprendizaje se transforma. Se vuelve más activo y autodirigido. En particular, el conocimiento se adquiere para un propósito personal reconocible. El niño hace algo con eso."
```

```
"But our culture is relative poor in models of systematic procedures."

"Pero nuestra cultura es relativamente pobre en modelos de procedimientos sistemáticos."
```

```
"The question to ask about the program is not whether it is right or wrong, but if it is fixable. If this way of looking at intellectual  products were generalized to how the larger culture thinks about knowledge and its acquisition, we all might be less intimidated by our fears ob “being wrong."

"La pregunta que hay que hacer sobre el programa no es si está bien o mal, sino si se puede arreglar. Si esta forma de ver los productos intelectuales se generalizara a cómo la cultura en general piensa sobre el conocimiento y su adquisición, todos podríamos estar menos intimidados por nuestros miedos de "equivocarnos".
```
