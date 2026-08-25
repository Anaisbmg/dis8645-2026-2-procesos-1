# proyecto 1
## proceso

empezamos analizando el código y viendo en qué partes hacían funcionar la gráfica, sacamos todo lo que no era texto. 

elegimos el siguiente poema:

### Gansos salvajes - Mary Oliver

"No tienes que ser buena.

No tienes que recorrer el desierto de rodillas, arrepintiéndote.

Sólo deja que el suave animal de tu cuerpo ame lo que ama.

Háblame del dolor, del tuyo, yo te hablaré del mío.

Mientras tanto, el mundo sigue.

Mientras tanto, el sol y las claras piedritas de la lluvia

recorren los paisajes, caen

sobre los prados y los árboles frondosos, las montañas y los ríos.

Mientras tanto, los gansos salvajes, allá arriba, en el cielo azul y limpio,

emprenden rumbo de vuelta a casa.

Seas quien seas, por más sola que te sientas,

el mundo está ahí para tu imaginación, llamándote,

como los gansos salvajes, rudamente, emocionante:

anunciando una y otra vez

tu lugar entre todo lo que existe."

- estamos probando mantener los primeros versos para dejarlo más cortos, viendo las posibilidades del código.

**ajustes del código:**


- linea 311 texto 

```cpp
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

```

con este código al eliminar el `display.clearDisplay();` los textos quedan sobrepuestos (parte de las pruebas)

```cpp
void testdrawbitmap(void) {
  display.clearDisplay();

  display.drawBitmap(
    (display.width()  - LOGO_WIDTH ) / 2,
    (display.height() - LOGO_HEIGHT) / 2,
    logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, 1);
  display.display();
  delay(1000);


 display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();      // Show initial text
  delay(100);

  // segundo mensaje
 

  display.setCursor(10, 0);
  display.println(F("que ser buena."));
  display.display();      // Show initial text
  delay(100);

 // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);

  // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);
  delay(3000);
}
```

nos volvió a pasar lo mismo 
con este código:

```cpp
void testscrolltext(void) {
 display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();      // Show initial text
  delay(100);

  // segundo mensaje
  display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("que ser buena."));
  display.display();      // Show initial text
  delay(100);

 // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);

  // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);
  delay(3000);
}
```

con el siguiente funciono viéndose como:

"No tienes
 que ser buena."

```cpp
void testscrolltext(void) {
  
 display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();      // Show initial text
  delay(100);

  // segundo mensaje
  display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 10);
  display.println(F("que ser buena."));
  display.display();      // Show initial text
  delay(100);

 // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);

  // Scroll in various directions, pausing in-between:
 display.startscrollleft(0x00, 0x0F);
  delay(3000);
```
