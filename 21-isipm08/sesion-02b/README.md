# sesion-02b

clase cancelada por cierre de udp

## apuntes sesión

## encargos

encargo02b:

subimos videos en canvas de hoy, son 3 videos.

1: instalar visual studio code, cami está regrabando el video parte 1 porque tuvimos un problema ténico, les avisará por discord cuando esté listo
2: ver los videos parte 2 y parte 3, aunque no tengan una placa raspberry pi, anotar dudas, tratar de subir código a sus placas si es que las piden.

## apuntes videos

**video 1**
- el primer video sobre la instalación de visual studio code aún no está subido, sin embargo yo ya lo tengo instalado, porque lo utilizamos el semestre pasado en interacciones inalámbricas.

**UPDATE**
- buscar en navegador Visual Studio Code
- importante al momento de la instalación:
  - crear un acceso directo al escritorio
  - registrar Code como editor para tipos de archivo admitidos
  - agregar a PATH (disponible después de reiniciar)
- agregar extensiones
  - C/C++ microsoft
  - markdownlint
  - Raspberry Pi Pico
**video raspi parte 2**
- extensión raspberry pi pico -- mini software -- interfaz colección de muchos otros software -- propio tono de programación
- leer y configurar

![titulo](./imagenes/sistemaoperativo.png) 

  - requerimientos sistema operativo: se puede usar en un computador raspberry
  - placas raspberry pi pico -- microcontrolador (más chico aún)
  - Raspberry Pi -- empresa
  - Raspberry Pi Pico -- microcontrolador
  - Raspberry Pi Pico proyect -- New C/C++ Proyect: aquí se carga una interfaz, la cual nos permite configurar un proyecto
  - New MicroPython Proyect -- subconjunto Python
  - CircuitPython -- Adafruit


![titulo](./imagenes/windows.png)  
    
![titulo](./imagenes/iconoraspi.png)    

- aquí ya sabemos que tenemos la extensión instalada

![titulo](./imagenes/nuevoproyecto.png) 

- acá terminó la parte 1 del video, el cual realizaremos un proyecto en Raspberry Pi Pico proyect -- New C/C++ Proyect
  
**video raspi parte 3**
- acá ya se empezó a crear nuevo proyecto en Raspberry Pi Pico proyect
  - nombre del proyecto: prueba
  - placa: Pico 2, la Pico W se utilizó en interacciones inalámbricas, Wireless
  - no marcar RISC-V
  - ubicación: encontrarle lugar en el cual no se vaya a borrar
  - versión más nueva (v2.3.0)
  - features: no muy probable su uso (por ahora), más adelante quizá ocupemos SPI-I2C interface
  - Stdio support -- console over USB -- permite mandar mensajes por el puerto USB
  - code generation options: generate C++ code
- al momento de ya crear "prueba" tenemos distintas sub carpetas
  - .vscode: cosas que nunca tocaremos
  - main.cpp SI importa -- código
  - CMkaeLists.txt: reglas que configuran proyecto
  - "# Generated Cmake Pico project" file ES TODO
  - línea 48: añade las bibliotecas standars siguientes
  - CMkaeLists.txt -- añadir hardware_adc (target_link_libraries // línea 48) y guardar
  - hardware_adc -- convertir de análogo a digital
  - borrar main.cpp y agregar código de ej_pico_pote

 
```cpp
    #include <stdio.h>
#include "pico/stdlib.h"

// incluye stdio.h 
// archivos que viven en otro lugar del computador
// biblioteca cosas estandares Raspberry Pi Pico

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}

// funcion principal main
// cuando se prende se realiza todo lo que esta dentro de main
// describir todo dentro de main
// stdio init all prender y apagar
// while mientras la verdad sea verdad eso ocurre siempre
// printf escribir el enter
// enter caracter no visible
// \n es enter
// dormir en 1 segundo
// se acaba el mundo
// raspberry en llamas
// chao mundo
// perdemos consciencia ok mañana
```
