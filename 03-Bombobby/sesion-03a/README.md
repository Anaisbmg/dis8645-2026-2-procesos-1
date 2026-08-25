# sesion-03a

## apuntes sesión

Se ha entregado a cada grupo un protoboard, caimanes, botones, cables, una pantalla oled de 0,91' y un adaptador de tarjeta microSD.

La pantalla tiene 4 pines distintos:

VCC: Voltaje del colector común, pin de alimentación positiva de corriente continua
GND: Tierra, pin de referencia 0V, cierra el circuito eléctrico para que la corriente pueda fluir
SCL: Serial clock, transmite la señal del reloj. Sincroniza la velocidad a la que se transfieren los datos entre los dispositivos 
SDA: Serial data, se transmiten y reciben los datos reales entre los dispositivos

En la biblioteca de Arduino debemos buscar ssd1306 (ssd1306_128x32_i2c), este es el driver para la pantalla Oled. Lo usamos para evitar escribir una brutalidad de líneas.

```cpp
#include (copia el código de este archivo y pégalo en este otro archivo)
```

```cpp
#define SCREEN WIDTH 128 // Define el número de pixeles horizontales
#define SCREEN HEIGHT 32 // Define el número de pixeles verticales
```

... (significa depende)

Arduino R4 sigue compartiendo el estándar de Arduino R3, es decir que A4(SDA) y A5(SCL)

A4(SDA) utilizará el color azul y el A5(SCL) utilizará el color amarillo.

Se agrega:

```cpp
Adafruit_SSD1306 display (SCREEN WIDHT, SCREEN HEIGHT, &Wire, OLED_RESET)
```
Display es el nombre del objeto que le damos a la pantalla, entonces cada vez que queramos hacer algo con la pantalla empezamos con "display"
En reset es -1 porque nuestra pantalla Oled no tiene un pin dedicado a este

## encargos

## lectura
