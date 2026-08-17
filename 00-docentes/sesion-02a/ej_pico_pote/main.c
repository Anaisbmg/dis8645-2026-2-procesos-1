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
// agregar biblioteca "hardware_adc"
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
