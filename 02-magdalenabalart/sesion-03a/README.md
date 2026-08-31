# sesion-03a

## apuntes sesión

# Pantalla OLED SSD1306

## Pantalla

- Pantalla OLED monocromática de **0,91"**
- Interfaz de comunicación: **I2C**
- Controlador: **SSD1306**
- Voltaje de operación: **3.3V - 5V**

### Pines

- **GND** → tierra
- **VCC** → alimentación
- **SDA** → señal de datos
- **SCL / SCK** → señal de clock o reloj

En I2C se utilizan principalmente dos señales:

- **SDA** → envía los datos
- **SCL** → marca el ritmo de la comunicación
  
## Conexión con Arduino

| Arduino | Pantalla |
|---|---|
| 5V | VCC |
| GND | GND |
| A4 (SDA) | SDA |
| A5 (SCL) | SCK |

En Arduino Uno:

- **A4 = SDA**
- **A5 = SCL**

# Bibliotecas

Una **biblioteca** contiene código creado previamente que podemos reutilizar.

- Librería → comprar libros
- Biblioteca → pedir libros prestados

En programación, la biblioteca nos "presta" funciones que ya fueron programadas por otra persona, entonces en vez de programar desde cero cómo funciona la pantalla SSD1306, usamos la biblioteca de **Adafruit**.

### Biblioteca utilizada

`Adafruit SSD1306 2.5.17`

El controlador de nuestra pantalla es:

`SSD1306`

## `#include` 

líneas como: 
```cpp #include <Wire.h> #include <Adafruit_GFX.h> #include <Adafruit_SSD1306.h> ``` 

`#include` significa: > anda a buscar ese archivo o biblioteca e inclúyelo en este código.


# `display` 

`display` representa nuestra pantalla dentro del código. 

Por ejemplo: 

```cpp display.clearDisplay(); ``` 

Se puede leer como: > pantalla → limpiar pantalla 

Otro ejemplo: 

```cpp display.setTextSize(2); ``` 

> pantalla → cambiar tamaño del texto
>
> El punto `.` permite acceder a funciones que pertenecen a `display`.

```cpp display.funcion(); ```

 > dispositivo → acción que quiero realizar



# Funciones `testdraw` 

El código de ejemplo de Adafruit incluye distintas funciones para probar lo que puede hacer la pantalla: 

```cpp
testdrawline();
testdrawrect();
testdrawcircle();
testdrawchar();
testdrawstyles();
testscrolltext();
```
Cada una prueba una función distinta. 

Por ejemplo: 
- `testdrawline()` → dibujar líneas
- `testdrawrect()` → dibujar rectángulos
- `testdrawcircle()` → dibujar círculos
- `testdrawchar()` → mostrar caracteres
- `testscrolltext()` → mover texto

## `testscrolltext()` 

Esta función prueba distintos movimientos del texto. 

→ movimiento hacia la derecha 
```cpp 
display.startscrollright();
```
-------
→ movimiento hacia la izquierda 
```cpp 
display.startscrollleft();
```
-------
→ movimiento diagonal hacia la derecha 
```cpp 
display.startscrolldiagright();
 ```
-------
→ movimiento diagonal hacia la izquierda 
```cpp 
display.startscrolldiagleft();
```
-------
→ detener el movimiento
```cpp 
display.stopscroll();
```
-------

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

# Proyecto 01 — Primer acercamiento

## Objetivo

Comenzar a explorar cómo mostrar y mover texto en una pantalla OLED a partir del poema **Gansos salvajes**, de Mary Oliver.

En esta primera aproximación trabajamos modificando el código de ejemplo de **Adafruit SSD1306**, probando funciones y posiciones para entender cómo se comporta el texto en pantalla.

---

## Coordenadas de la pantalla

La pantalla utilizada tiene:

`SCREEN_WIDTH = 128`  
`SCREEN_HEIGHT = 32`

La posición del contenido se organiza mediante los ejes `X` e `Y`.

    (0,0) --------------------------> X
      |
      |
      |
      v
      Y

- `X` → posición horizontal
- `Y` → posición vertical
- `(0,0)` → esquina superior izquierda

Para definir dónde aparece un texto usamos:

`display.setCursor(x, y);`

Por ejemplo:

`display.setCursor(50, 20);`

`x` e `y` funcionan como variables que representan posiciones.

---

## Pruebas de movimiento

Desde el código de ejemplo comenzamos a modificar funciones como:

`display.startscrollright();`

`display.startscrollleft();`

`display.startscrolldiagright();`

`display.startscrolldiagleft();`

También hicimos pruebas modificando las coordenadas del texto para entender cómo generar movimiento.

Uno de los intentos fue crear una función propia:

`void textoSubiendo() { }`

para probar cómo hacer que un texto apareciera desde abajo y se desplazara hacia arriba.

---

## Reflexión del primer acercamiento

Esta primera prueba fue útil para experimentar y comenzar a entender el código, pero surgieron varios errores al intentar modificar directamente el ejemplo para conseguir los movimientos que necesitábamos.

Fue un **buen primer acercamiento**, pero no la metodología correcta para desarrollar el proyecto completo.

Para continuar necesitamos:

- ordenar mejor el código 
- investigar las funciones que necesitamos 
- entender cada movimiento por separado 
- realizar pruebas pequeñas 
- avanzar paso a paso antes de juntar todo 

La siguiente etapa será **entender primero las herramientas y luego construir la animación**, en vez de intentar modificar todo el código al mismo tiempo.

---

## Referencia

https://www.youtube.com/watch?v=-i5yaTPMFDE&t=215s










## encargos

## lectura
