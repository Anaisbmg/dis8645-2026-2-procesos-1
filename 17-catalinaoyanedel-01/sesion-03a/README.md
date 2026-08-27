# sesion-03a
martes 25 de agosto

## apuntes sesión
proyecto 1:
- crit-01: grupal, documentación textual y visual del proyecto, con énfasis en referentes y valores de diseño
- crit-02: grupal, código del proyecto, con énfasis en proceso no en resultados
- crit-03: grupal, documentación del código del proyecto, con énfasis en comentarios y diagramas de flujo
- crit-04: individual, presentación oral del proyecto
- crit-05: individual, bitácoras, incluyendo encargos y lecturas
- crit-06: individual, bitácoras, incluyendo encargos y lecturas

vamos a aprender a conectar pantallas y botones.

**pantallita**

patitas:
- sda: señal de datos
- sck: señal de clock?
- gnd
- vcc

interfaz: I2C

voltaje de operación: 3.3V - 5V

controlador: SSD1306

**por hacer:**

- instalar biblioteca de pantalla para arduino: Adafruit SSD1306
- buscar en github: https://github.com/adafruit/Adafruit_SSD1306 > https://github.com/adafruit/Adafruit_SSD1306/blob/master/Adafruit_SSD1306.cpp
- #: condición
- patas arudino: A4: SDA, A5: SCL.
- según yo no me funcionaba el código, pero no había conectado bien el arduino, de los errores de aprende... :p

### trabajo en clases - proyecto 1
- dejamos nuestro avance en la carpeta de nuestro grupo `grupo-09` con más detalles, pero para generalizar: partimos entre todas analizando el código, viendo cómo podíamos modificarlo para que cumpliera la función más simple: mostrar texto, y fuimos sacando y modificando partes del código de ejemplo que nos entregaron en clases.
- elegimos el poema gansos salvajes de mary oliver.

### ¿qué queremos hacer?

- primero, dividir el poema en versos
- que cada verso aparezca desplazándose lentamente hacia la izquierda, para que se pueda leer
- al terminar de mostrarse un verso, que este se mueva de forma diagonal hacia arriba a la izquierda/derecha
- intercalar ese proceso, un verso se va hacia la derecha y otro a la izquierda, para hacer alusión al poema y el vuelo de los gansos salvajes.
- lo más ambicioso, si es que nos da el tiempo, es agregar una animación al final de los gansos volando.

primero, tenemos que descifrar bien como desplegar el texto y que sea legible en la pantalla. marcela se llevó las cosas para probar. yo por ahora investigaré cómo podríamos hacer posible lo de la animación, teniendo como referencia que el código de ejemplo traía varias.

### animación
_desde vista de ia:_

#### requisitos previos
1. librerías necesarias
- adafruit SSD1306 (check)
- adafruit gfx library (check)

2. conexiones físicas
- VCC a 5V
- GND a GND
- SCL a SCL/A5
- SDA a SDA/A4

#### paso 1: preparar las imágenes (frames)
- convertir un gif/video en imágenes individuales (frames) en blanco y negro, y luego pasarlas a código hexadecimal (arrays de bytes)
1. redimensionar: adaptar los frames al tamaño exacto de la pantalla (128x32 píxeles). > posible herramienta: https://videotoframes.com/es
2. editar las imágenes para que el contraste entre blanco y negro sea óptimo.
3. convertir a hexadecimal: usar herramientas como https://javl.github.io/image2cpp/ para convertir la imagen en código.
   - subir las imágenes en orden
   - seleccionar en output arduino code

#### paso 2: código fuente de arduino
- código de ejemplo en una pantalla de 128x64 píxeles y una animación simple de tres frames.

```cpp
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // Ancho de la pantalla OLED
#define SCREEN_HEIGHT 64 // Alto de la pantalla OLED

// Declaración para el reset de la pantalla (el UNO R4 no suele requerir pin físico)
#define OLED_RESET     -1 
#define SCREEN_ADDRESS 0x3C /// Dirección I2C típica para SSD1306 128x64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// --- BITMAPS DE LA ANIMACIÓN (Ejemplo de un corazón latiendo) ---
// Dimensiones de cada frame: 32x32 píxeles
#define FRAME_WIDTH  32
#define FRAME_HEIGHT 32

const unsigned char frame1 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x3c, 0x00, 
  0x00, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xe0, 
  0x03, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xfe, 0x00, 
  0x00, 0x3f, 0xfc, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char frame2 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x38, 0x00, 0x00, 0x7f, 0xfe, 0x00, 
  0x00, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xe0, 
  0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xc0, 0x01, 
  0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 
  0x1f, 0xf8, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 
  0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char frame3 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 0x00, 
  0x00, 0x3f, 0xfc, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0x80, 
  0x01, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0x00, 
  0x00, 0x7f, 0xfe, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x0f, 0xf0, 0x00, 
  0x00, 0x07, 0xe0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Guardamos las referencias de los cuadros en una lista de arreglos
const unsigned char* animation_frames[] = { frame1, frame2, frame3, frame2 };
const int total_frames = 4; // Cantidad total de cuadros en el ciclo
int current_frame = 0;

// Control de tiempo sin bloquear el Arduino (evita usar delay)
unsigned long previousMillis = 0;
const long frameInterval = 150; // Velocidad de la animación en milisegundos por cuadro

void setup() {
  Serial.begin(115200);

  // Inicializar la pantalla con dirección I2C 0x3C
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Detener ejecución si falla
  }

  display.clearDisplay();
  display.display();
}

void loop() {
  unsigned long currentMillis = millis();

  // Comprobar si es momento de actualizar el frame
  if (currentMillis - previousMillis >= frameInterval) {
    previousMillis = currentMillis;

    display.clearDisplay(); // Limpiar el buffer de la pantalla

    // Calcular coordenadas para centrar la animación en pantalla
    int x_pos = (SCREEN_WIDTH - FRAME_WIDTH) / 2;
    int y_pos = (SCREEN_HEIGHT - FRAME_HEIGHT) / 2;

    // Dibujar el cuadro actual en el buffer
    display.drawBitmap(x_pos, y_pos, animation_frames[current_frame], FRAME_WIDTH, FRAME_HEIGHT, SSD1306_WHITE);
    
    display.display(); // Enviar el buffer a la pantalla física

    // Avanzar al siguiente cuadro
    current_frame++;
    if (current_frame >= total_frames) {
      current_frame = 0; // Reiniciar animación
    }
  }
  
  // Tu Arduino UNO R4 se mantiene libre aquí para ejecutar otras tareas concurrentes
}
``` 


## encargos



## lectura
he podido avanzar sólo un poco con el libro, así que acá dejo las citas que más me han gustado de lo que he alcanzado a leer:

- "mi padre es poeta, y si miro esta forma de hacer arte, él abre totalmente sus sentidos a cualquier tipo de condición. cuando uso materiales, no es muy común que yo los elija, sino que más bien creo que los materiales empiezan a hablarme. estas son siempre conversaciones difíciles. es muy duro descubrir cómo lidiar con tales materiales porque tienes que estudiar la historia, cómo se han usado antes esos materiales, en qué tipo de contexto, y qué tipo de forma puede salir del trabajo con ellos. entonces empiezas a sentir que "esto no es suficiente", porque vivimos en esta sociedad moderna, y básicamente cualquier material tiene el mismo potencial. ¿cuánto puedes saber sobre él, y qué tipo de posibilidades puedes darle para crear un nuevo lenguaje?"

- "creo que ellos (los jóvenes activistas) no deberían trabajar solo por una ideología. deberían trabajar por sí mismos. deberían trabajar para cuestionarse cómo será su vida si no luchan por la dignidad más básica de la vida, o van a olvidar el sentimiento esencial de la felicidad o la tristeza y qué clase de humano serán. creo que es muy triste si ya piensas que eres un activista o un artista. creo que con mucha frecuencia es solo un personaje, y no puedes pensar que solo eres un artista o un activista."
