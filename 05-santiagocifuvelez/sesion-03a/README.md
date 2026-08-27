# sesion-03a

## apuntes sesión

## Ejercicio con mi equipo <3

1. Funciones y su función (lol)

   |Función|Lo que hace |
   ---------|------


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
      display.println(F("que rica tu agua"));
      display.display();  // muestra el texto en pantalla
      delay(2000);
    }
  
```

## lectura
