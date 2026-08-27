# sesion-03a

## apuntes sesión

# Ejercicio con mi equipo <3
## Funciones utilizadas

| Función | Qué hace |
|---|-----|
| `Wire.h` | Habilita la comunicación **I2C** (necesaria porque la pantalla usa I2C, no SPI) |
| `Adafruit_SSD1306 display(...)` | Crea el objeto `display`, vinculado a la resolución de la pantalla |
| `display.begin(...)` | Inicializa la pantalla y la conexión I2C — debe tener éxito o nada funciona |
| `display.clearDisplay()` | Borra el buffer interno de dibujo (en RAM), **no** la pantalla física todavía |
| `display.setTextSize(n)` | Escala el tamaño de la letra multiplicando por un número entero |
| `display.setTextColor(...)` | Define el color del píxel (casi siempre `SSD1306_WHITE` en OLEDs monocromáticas) |
| `display.setCursor(x, y)` | Define dónde empieza el próximo texto o dibujo |
| `display.println(...)` / `display.print(...)` | Escribe texto en el buffer |
| `display.getTextBounds(...)` | Calcula el ancho/alto en píxeles de un texto antes de dibujarlo (útil para centrar o alinear) |
| `display.display()` | Envía el buffer a la pantalla física — nada se muestra sin esto |
| `display.invertDisplay(true/false)` | Invierte los colores de la pantalla (blanco↔negro) como efecto visual |
| `Serial.begin(9600)` | Inicia la comunicación serial con la computadora, a 9600 baudios, para depuración (debug) |
| `F("texto")` | Guarda el texto en memoria Flash en vez de RAM, para ahorrar memoria RAM (muy limitada en microcontroladores) |
| `display.cp437(true)` | Activa el set extendido de caracteres "Code Page 437" (símbolos adicionales, no solo ASCII básico) |
| `display.write(i)` | Escribe un solo carácter (por su código numérico) en el buffer |
| `for(;;);` | Bucle infinito vacío — congela el programa ahí (se usa cuando algo falla y no se debe continuar) |


```cpp
//esta parte es OBLIGATORIA en todas las estructuras con Adafruit, 
//ya que son las librerias.
//de aquí:
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//hasta aquí. 





//setup() — se ejecuta una sola vez al encender
void setup() {
  Serial.begin(9600); //inicialización de la pantalla
  delay(500);   // Wait for display para prenderse

//Esta parte igual, es obligatoria por el bien de la sociedad.
//Esta parte es por si a la pantalla no le llega la suficiente energía y hay un error, 
//ella pueda procesarlo y resistir, y nosotres actuar.
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }




// Al inicializarse, la librería carga automáticamente un logo de Adafruit en el buffer. 
//display.display() lo muestra en pantalla, y se queda 2 segundos.
  display.display();
  delay(2000); // Pause for 2 seconds
  // para borrar el buffer, lo que apareció en la pantalla
  display.clearDisplay();


  testdrawstyles(); // llama a la función (ya definida más abajo)

//si no quieres poner lo de la animación de cambiar de color que está en el
//siguiente parrafo de código...,
//se borra, duhh, pero, se debe cerrar entonces esta parte con un "}"


//SOLO SI SE QUIERE CAMBIAR EL COLOR.
//si queremos invertir los colores de la pantalla (recordemos que la pantalla es monocromatica
//podemos hacerlo así).
  display.invertDisplay(true); //esa función es para cambiar el colorrrrrrr. periodo.
  delay(1000);
  display.invertDisplay(false);
  delay(1000);
}
//Hay dos display.invertDisplay, porque hace como una pequeña animación.



  void loop() {
    // vacío, o lo que quieras que se repita  
  }

  // Aquí, AFUERA de setup() y loop(), defines las funciones:
    void testdrawstyles(void) {
      display.clearDisplay();
      display.setTextSize(2); //tamaño de la letra
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(1, 4); //esta es la posición en x,y
      display.println(F("que rica tu agua")); //recordad que la "F", siempre va igual para que no se nos tueste la RAM del Arduino.
      display.display();  // muestra el texto en pantalla
      delay(2000);
    }
  
```



## lectura
