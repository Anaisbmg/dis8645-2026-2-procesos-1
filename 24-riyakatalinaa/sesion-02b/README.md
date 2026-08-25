# sesion-02b

viernes 2026-08-21

clase cancelada por cierre de udp

## apuntes sesión

## encargos

encargo02b:

subimos videos en canvas de hoy, son 3 videos.

1: instalar visual studio code, cami está regrabando el video parte 1 porque tuvimos un problema ténico, les avisará por discord cuando esté listo

- ya instalado :)

2: ver los videos parte 2 y parte 3, aunque no tengan una placa raspberry pi, anotar dudas, tratar de subir código a sus placas si es que las piden.

apuntes:
- raspberry pi comenzó siendo una empresa que realizaba computadores pero ya hace varios años implemento otros productos como lo son los microcontroladores, aparte hacen las **placas raspberry pi pico**
- raspberry pi es la empresa
- un subconjunto de python son micropython
- ctrl + s (guardar el proyecto)
- cabe destacar que nuestra raspberry pi pico h lo tiene mi compañera Emilia Conteras por eso no pude comprobar si funciono o no, pero de igual forma seguí paso a paso el video que subió Aaron
- no se utilizara Arduino para códigos de raspberry pico

``` C++

// lectura de potenciometro
// en raspberry pi pico (o pico 2)
// usando pico sdk (sin arduino)

// por montoyamoraga
// para dis8645-2026-2

// materiales
// raspberry pi pico o pico 2
// potenciometro b20k
// cualquier otro b (lineal) ok

// entorno
// visual studio code
// con extension oficial "raspberry pi pico"
// crear "new project" -> elegir board pico o pico 2
// activar "console over usb"
// el asistente no tiene casillero para adc
// asi que hay que agregarla a mano:
// abrir el CMakeLists.txt que genera el asistente
// y agregar hardware_adc a target_link_libraries(...)
// reemplazar el contenido de main.c generado
// por el contenido de este archivo

// conexiones
// orejas de potenciometro a 3V3 y GND
// ojo: raspberry pi pico funciona a 3.3v
// nunca conectar a 5v
// nariz de potenciometro a GP26 (tambien llamado ADC0)

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

// constante entera para
// patita fisica de potenciometro
// GP26 es la primera entrada analoga (ADC0)
const uint potePatita = 26;

// variable entera
// para almacenar lectura
// de potenciometro
uint16_t poteLectura = 0;

int main()
{
  // iniciar comunicacion serial por usb
  stdio_init_all();

  // iniciar modulo analogo-digital (adc)
  adc_init();

  // habilitar patita como entrada analoga
  adc_gpio_init(potePatita);

  // seleccionar canal 0
  // que corresponde a GP26
  adc_select_input(0);

  // mientras puerto serial
  // no este listo
  // no avanzar
  while (!stdio_usb_connected())
  {
    sleep_ms(100);
  }

  // imprimir saludo
  printf("hola!\n");

  while (true)
  {
    // leer valor analogo en potePatita
    // asignar valor a poteLectura
    // el adc del pico es de 12 bits
    // asi que poteLectura va de 0 a 4095
    poteLectura = adc_read();

    // imprimir poteLectura en serial
    printf("valor actual: %d\n", poteLectura);
  }
}

``` 

## lectura
