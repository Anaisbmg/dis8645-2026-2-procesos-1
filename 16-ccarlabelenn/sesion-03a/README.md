# sesion-03a

## apuntes sesión

## 1. pantallas I2C

vamos a usar una pantalla **OLED gráfica monocromática de 0.91"**, con controlador **SSD1306**, ideal para mostrar texto.

- **I2C** (inter-integrated circuit) es un protocolo de comunicación serial que permite conectar varios dispositivos usando solo dos cables de señal (además de alimentación y tierra):
  - **SCK / SCL** → señal de **clock** (reloj): sincroniza el envío de datos.
  - **SDA** → señal de **datos**: por donde viaja la información entre el microcontrolador y la pantalla.

> cada dispositivo I2C tiene una dirección única en el bus, lo que permite conectar varios sensores/pantallas usando los mismos dos cables.

## 2. bibliotecas

vamos a aprender a usar mini-códigos ya armados (librerías) que facilitan el control de la pantalla sin tener que programar todo desde cero.

### Adafruit

Adafruit ofrece librerías estándar para trabajar con pantallas SSD1306. los archivos típicos son:

- **Archivo `.h`** (*header*): contiene las declaraciones — qué funciones, variables y clases existen — sin necesariamente implementarlas. es como el "índice" de la librería.
- **Archivo `.cpp`**: contiene la implementación real de esas funciones (revisar si el apunte decía ".app", en C++ normalmente es **.cpp**).

### el símbolo `#`

en C/C++, `#` se usa para **directivas de preprocesador**, instrucciones que se ejecutan *antes* de compilar el programa. ejemplos:

- `#include` → incluye una librería (por ejemplo `#include <Adafruit_SSD1306.h>`)
- `#define` → define constantes o macros
- `#if` / `#ifdef` → condicionales de preprocesador (distintos de un `if` normal, que se evalúa en tiempo de ejecución)

> aclaración: un `if` normal (control de flujo) se escribe sin `#`.`#if`, es una condicional que el compilador evalúa *antes* de compilar, útil por ejemplo para incluir código solo en ciertas condiciones (como distintas placas o configuraciones).

## 3. referencias literarias

- **Alejandra Pizarnik**
- **Alfonsina Storni**

## 4. trabajo

a partir de una idea (¿un poema, un movimiento, una imagen?), se propone traducirla en distintos lenguajes:

0. **describir en texto** (párrafo)
1. **describir en coreografía**
2. **dibujar**
3. **programar en C++**


## encargos

## lectura
