Hey!, vamos a dividir el registro de hoy, en # partes:
1. Registro de clase.
2. Idea, concepto y comienzo de ejecución oficial del proyecto 01.

## 1. Registro de clase.
El día de hoy, intentemos cambiarnos a la Rasperi Pico 2 W, pero preferimos luego de intentarlo quedarnos con Arduino. [Explicar el por qué]

## 2. Idea, concepto y comienzo de ejecución oficial del proyecto 01.
Anteriormente nuestro proyecto 01 era la proyección de 2 fragmentos de poemas ("A los perros buenos no les pasan cosas malas" y "Mi vida huele a flor") de la autora Española; Elvira Sastre. Proyecto el cual consistía en poder leer estos 2 fragmentos por medio de "scroll" con un potenciómetro, y con un push boton, se cambiaba de poema. Pero debido a la licencia de protección de sus obras (Copyright), no pudimos seguir utilizando sus poemas. 

Eso nos llevo a madurar la idea que teníamos en cuanto al proyecto, y optamos por: Escribir nuestros propios poemas, y crear lo que será nuestra factura oficial. 

Ahora, nuestro proyecto consiste en la creación de un escenario cálido y nostálgico: Un living, una sala de casa, la cual está equipada con elementos principales, tales como: Televisor (pantalla OLED 1.3" I2C 128x64), control remoto (Push button, potenciómetro 1, potenciómetro 2), una lampara central (LED), y LDR que nos ayudará a captar las señales de luz para leer el poema). Los poemas, la narrativa, y el ambiente giran en torno a la vida en Chile desde la perspectiva , los pequeños detalles las conexiones humanas, y la nostalgia de las experiencias ya vividas, y lo que vendrá).

- Imagenes de conceptualización:

- Código y comentarios 
```cpp
//Lectura de 3 poemas con arduino uno r4 wifi
//En una pantalla OLED 1.3" I2C 128x64, controlador SH1106 

//Por Francisca Palma, Nicolas Valdes, Santiago Cifuentes Vélez.
//Proyecto 01 para dis8645-2026-2

//Aclaración!!!
//Los poemas presentados en este proyecto, son de autoría propia de lxs integrantes de este grupo.


//Lista de materiales:
//Aduino uno r4 wifi
//Potenciómetro B100k ó posiblemente //LDR
//Push button
//Protoboard
//Pantalla OLED 1.3" I2C 128x64, controlador SH1106 
//Resistencia de 10k
//Cable usb/C
//LEDs

//Materiales para la carcasa:
//Cartón reciclado
//

//Conexiones:

//Placa Arduino:
//Alimentada por cable Cable usb/C, a computador: PC, MAC, LINUX, ETC.

//Pantalla OLED 1.3" I2C 128x64, controlador SH1106 :
//GND, a GND.
//VCC, va alimentado con 3.3V del Arduino (buscar entrada de 3.3v en placa Arduino)
//SCL, señal de clock va a "A5" de la linea Analog In.
//SDA, señal de datos va a "A4" de la linea de Analog in.


//Push Button

//Potenciómetro
//Orejas de potenciómetro a VCC y GND` (Los extremos del potenciómetro; 1 y 3)
//Nariz de potenciómetro a entrada A0 (entendiéndose como la pata de la mitad; 2)


//Funcionamiento:
//proyectar fragmento del poema "-", y "-" de Santiago Cifuentes Vélez, en pantalla LCD Oled 0,91" I2C
//el hardware tiene dos componentes interactivos esenciales: potenciometro y botón.
//potenciómetro: el poema saltará de línea a medida que se cambia la resistencia de este.
// La primera línea del texto será 0k y la última línea será del texto será 100k. Vamos a movernos dentro del rango de 0 y 100 para avanzar o retroceder en líneas y leer.
//push boton: al oprimir el botón, se cambia de poema.
//push boton:  el poema se mantiene en la pantalla; estado 0. Al presionar, se cambia de poema; estado 1 y luego se mantiene en el poema cambiado; estado 0.
```
