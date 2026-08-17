// lectura de potenciometro
// y promediado
// en raspberry pi pico (o pico 2)
// usando pico sdkk

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
// nariz de potenciometro a GP26 (tambien llamado ADC0)

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

// variables y constantes
// para lectura potenciometro
const uint potePatita = 26;
uint16_t poteLectura = 0;

// variables y arreglos
// para promediado potenciometro
const int numeroLecturas = 15;
int poteHistoria[numeroLecturas];
int potePromediado = -1;

void actualizarHistoria()
{
  // recorrer toda la historia de (largo - 1) a (1)
  // shift hacia derecha
  for (int i = 1; i < numeroLecturas; i++)
  {
    // valor i-1 es grabado en posicion i
    poteHistoria[i] = poteHistoria[i - 1];
  }
  // actualizar valor 0 con valor actual
  poteHistoria[0] = poteLectura;
}

int promediarHistoria()
{
  // inicializar resultado
  int promedio = 0;

  // sumarle a promedio cada valor
  for (int i = 0; i < numeroLecturas; i++)
  {
    promedio = promedio + poteHistoria[i];
  }

  // despues de sumar todos los valores
  // dividir por el numero de lecturas
  promedio = promedio / numeroLecturas;

  // retornar promedio
  return promedio;
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

  // primera lectura
  poteLectura = adc_read();

  // iniciar el arreglo con primera lectura
  for (int i = 0; i < numeroLecturas; i++)
  {
    poteHistoria[i] = poteLectura;
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

    // dividir por 16 para menor resolucion
    // (en el ejemplo de arduino la division era por 4,
    // porque ese adc es de 10 bits
    // el adc del pico es de 12 bits,
    // por eso aqui dividimos por 16 en vez de 4)
    poteLectura = poteLectura / 16;

    // actualizar historia
    actualizarHistoria();

    // calcular promedio de historia
    potePromediado = promediarHistoria();

    // imprimir potePromediado
    printf("valor promediado: %d\n", potePromediado);
    sleep_ms(10);
  }
}
