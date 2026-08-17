// lectura de potenciometro
// y filtrado por division
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

// variables y constantes
// para lectura potenciometro
const uint potePatita = 26;
uint16_t poteLectura = 0;
int poteFiltrado = -1;

// funcion entera
// para tomar una variable entera original
// y dividirla por otro entero para perder resolucion
int filtrarConDivision(int valor, int divisor)
{
  int resultado = valor / divisor;
  return resultado;
}

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

    // filtrado con division entera por 16
    // (en el ejemplo de arduino la division era por 4,
    // porque ese adc es de 10 bits y va de 0 a 1023;
    // el adc del pico es de 12 bits y va de 0 a 4095,
    // por eso aqui dividimos por 16 en vez de 4)
    // poteFiltrado va entre 0 y 255
    poteFiltrado = filtrarConDivision(poteLectura, 16);

    // imprimir poteFiltrado en serial
    printf("valor filtrado: %d\n", poteFiltrado);
  }
}
