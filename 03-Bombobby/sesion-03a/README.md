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

Necesito recordar que 

```cpp
void setup() {
  Serial.begin(9600);

// inicia e inicializa el la comunicación serie entre la placa de arduino y el computador a una velocidad de 9600 bits por segundo.

void loop() {
}

void testdrawchar(void) {
  display.clearDisplay();

  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0, 0);     // Start at top-left corner
  display.cp437(true);         // Use full 256 char 'Code Page 437' font

// Imprime en pantalla la tabla completa de caracteres para probar como los dibuja la biblioteca
// .clearDisplay borra todo el contenido anterior de la pantalla para empezar desde cero
// .setTextSize(1) establece el tamaño de texto a escala 1:1 (cada caracter ocupa aprox 6x8 pixeles
// .setTextColor (SSD1306_WHITE) Define que los pixeles del texto se encenderán
// .setCursor (0, 0) Coloca el cursor gráfico en la esquina superior izquierda
// .cp437(true) Activa la fuente "Code Page 437, lo que permite mostrar símbolos especiales, letras acentuadas y caracteres de dibujo.
// .display Envía todo el buffer de memoria creado con el bucle hacia la pantalla física Oled
// delay(2000) Pausa la ejecución del microcontrolador duranto 2000 milisegundos para que pueda observar todos los caracteres en pantalla
  }

  display.display();
  delay(2000);
}
```

## encargos

## lectura
