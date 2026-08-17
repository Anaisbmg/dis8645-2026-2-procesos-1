# sesion-01b

## apuntes sesión

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

```cpp
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

// Matriz 2D predefinida
byte frame[8][12] = {
     { 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
     { 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
     { 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
     { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
     { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void setup() {
  // Inicializar la matriz LED
  matrix.begin();
}

void loop() {
  // Mostrar el patrón en la matriz LED
  matrix.renderBitmap(frame, 8, 12);
  delay(1000);
}
```

```cpp
#include "Arduino_LED_Matrix.h" // Incluimos la librería oficial de la matriz

ArduinoLEDMatrix matrix; // Creamos el objeto para controlar la pantalla

// 1. VARIABLES: Creamos los marcos (dibujos de 12x8 LEDs)
// 1 = LED encendido, 0 = LED apagado

// Cara feliz
const uint32_t caritaFeliz[] = {
  0x19785,
  0x80000001,
  0x81800000
};

// Cara seria
const uint32_t caritaSeria[] = {
  0x19819,
  0x0,
  0x1f800000
};

// Variable para controlar la velocidad del cambio
int velocidadAnimacion = 5000; // 1 segundo en milisegundos

// 2. FUNCIÓN SETUP: Inicializamos la matriz
void setup() {
  matrix.begin(); // Enciende el controlador interno de la matriz LED
}

// 3. FUNCIÓN LOOP: Alternamos entre los dos dibujos
void loop() {
  // Mostramos la cara feliz
  matrix.loadFrame(caritaFeliz);
  delay(velocidadAnimacion);

  // Mostramos la cara seria
  matrix.loadFrame(caritaSeria);
  delay(velocidadAnimacion);
}
```
## lectura
