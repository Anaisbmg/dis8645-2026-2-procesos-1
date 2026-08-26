# sesion-03a

## apuntes sesión
Pantalla OLED I2C con Raspberry Pi Pico 2 W y Arduino

### **Hardware y Conexiones**
Usaremos una pantalla OLED I2C de 128x32 píxeles. Esta pantalla cuenta con cuatro pines:
* **GND:** Tierra.
* **VCC:** Alimentación (3.3V / 5V).
* **SCL:** Reloj I2C (*Serial Clock*).
* **SDA:** Datos I2C (*Serial Data*).

Los pines **SCL** y **SDA** van conectados a los pines correspondientes de I2C en la Raspberry Pi Pico 2 W.

---

### **Proceso y Primeras Pruebas**
A pesar de haber perdido los apuntes un par de veces, en resumen el proceso fue el siguiente:

1. Comenzamos experimentando con la pantalla en la **Raspberry Pi Pico 2 W**.
2. Posteriormente consultamos con Emilia, quien nos facilitó un **Arduino UNO R4 Minima**.
3. Mientras mis compañeros cargaban el código en el Arduino, configuré e intenté hacer funcionar la **Raspberry Pi Pico 2 W con el Arduino IDE**, lo cual resultó bastante sencillo.
4. Probé el código en la Pico 2 W y funcionó sin inconvenientes.

> **Nota sobre los pines:** Las conexiones de SCL y SDA me causaron algo de confusión al principio porque no correspondían a los primeros pines (0 y 1). Investigando y por lo que comprendí, en la Pico 2 W se toman los pines 6 y 7 por defecto (*default*) cuando no se especifican otros pines para el bus `Wire`. Con eso resuelto, pasamos a experimentar con tamaños tipográficos para dimensionar el espacio de la pantalla.

---

### **Experimentación con Tamaños Tipográficos**
Código que usamos para experimentar tamaños tipográficos:

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Texto de prueba
const char sampleText[] = "ya, dilo de nuevo, el porcentaje de pureza mezclado con un poco de sol, con un poco de hambre";

void setup() {
  Wire.begin();
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;); // Bucle infinito si falla la inicialización
  }
  display.setTextWrap(true); // Permite salto de línea automático al llegar al borde
}

void loop() {
  for (uint8_t size = 1; size <= 3; size++) {
    display.clearDisplay();

    // 1. Dibuja el texto de ejemplo con el tamaño actual
    display.setTextSize(size);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.print(sampleText);

    // 2. Indicador en la esquina superior derecha (badge destacado en negativo)
    display.setTextSize(1);
    display.fillRect(96, 0, 32, 10, SSD1306_WHITE);      // Rectángulo blanco de fondo
    display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);  // Letras negras sobre fondo blanco
    display.setCursor(98, 1);
    display.print("S:");
    display.print(size);

    display.display();
    delay(3500); // Pausa de 3.5 segundos antes de cambiar al siguiente tamaño
  }
}
```

---

### **Implementación de Tipografías Pixel Art Personalizadas**
Como última fase de experimentación, quisimos ver si podíamos agregar tipografías personalizadas de estilo pixel art. Debido a la resolución limitada de la pantalla (128x32), seleccionamos una fuente pixelada: **Press Start 2P**.

Para que Arduino pudiera reconocer la tipografía:
1. Usamos el convertidor de `.ttf` a `.h`: [TrueType to Adafruit GFX Converter](https://rop.nl/truetype2gfx/).
2. El archivo de cabecera `.h` nos sirve para organizar de mejor manera el código y modularizarlo; funciona como una pestaña adicional al lado del sketch principal para llamarlo limpiamente.
3. El archivo generado se coloca dentro de la misma carpeta donde se encuentra el proyecto de Arduino.

### Código utilizado:

```cpp
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// 1. Incluye el archivo de la tipografía personalizada
#include "PressStart2P_Regular6pt7b.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Wire.begin();
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  // 2. Activa la fuente personalizada
  display.setFont(&PressStart2P_Regular6pt7b);

  // 3. Posicionamiento (Línea base)
  // Al ser de 6pt, la primera línea se coloca entre Y = 8 y Y = 9
  display.setCursor(0, 8);
  display.print("DILO DE NUEVO");

  // Segunda línea con separación vertical (~11px de salto de línea)
  display.setCursor(0, 22);
  display.print("100% PUREZA");

  display.display();
}

void loop() {
}
```

---

### **Selección del Poema (Leonor Olmos)**
Elegimos a la autora **Leonor Olmos** y seleccionamos el siguiente extracto:

> Este poema nada puede resolver.  
> Adentro del poema, la muerte se consume.  
> Ya, dilo de nuevo, el porcentaje de pureza mezclado con un poco de sol.  
> Con un poco de hambre.  
> Todo acaba aquí y de pronto no.  
> Un nuevo servidor, un poema electrónico, un mesías.  
> Poema bajando desde el cielo.  
> Solo los elegidos contemplan su propia destrucción.  
> No, en serio, este poema nada puede resolver.  

---

### **Propuesta Visual y Animaciones**
Investigando alternativas para realizar las animaciones, descubrimos que la mejor vía es trabajar **cuadro por cuadro**. Aunque resulta un proceso tardado, nos brinda total libertad creativa. Para facilitar el flujo, usaremos [image2cpp](https://javl.github.io/image2cpp/), una herramienta que transforma imágenes a arreglos de bytes (`bytearray`).

#### **Propuesta de animación por verso:**

* **"este poema nada puede resolver"**  
  Animación de puntos suspensivos (`...`): los 3 puntos van incrementando de tamaño en cada ciclo.

* **"adentro del poema la muerte se consume"**  
  Las letras se van desintegrando y dispersando en pantalla.

* **"ya, dilo de nuevo,"**  
  Texto deslizante tipo marquesina pasando 2 veces seguidas.

* **"el porcentaje de pureza mezclado con un poco de sol,"**  
  El borde exterior va alternando e invirtiéndose entre blanco y negro, manteniendo un margen para no interferir con el texto.

* **"con un poco de hambre"**  
  Las letras desaparecen de golpe, de manera instantánea y sin animación intermedia.

* **"todo acaba aquí y de pronto no,"**  
  El texto se desplaza hacia la derecha sobrepasando el límite de la pantalla, frena justo antes de salir y se devuelve a su posición.

* **"un nuevo servidor, un poema electrónico, un mesías"**  
  Comienza en tamaño pequeño y va aumentando de tamaño gradualmente con cada frase.

* **"poema bajando desde el cielo"**  
  Letras separadas caen desde la parte superior y se unen al centro de la pantalla.

* **"Solo los elegidos contemplan su propia destrucción."**  
  Efecto de explosión de píxeles enfocado en la palabra **"elegidos"**.

## encargos

## lectura
