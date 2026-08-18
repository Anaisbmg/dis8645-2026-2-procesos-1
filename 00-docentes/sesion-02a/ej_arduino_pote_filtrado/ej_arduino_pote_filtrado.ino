// lectura de potenciometro
// y filtrado por division
// en arduino uno r4 minima

// por montoyamoraga
// para dis8645-2026-2

// materiales
// arduino uno r4 minima
// potenciometro b20k
// cualquier otro b (lineal) ok

// conexiones
// orejas de potenciometro a VCC y GND
// nariz de potenciometro a entrada A0

// constante entera para tasa
// de comunicacion serial
// 9600 baudios
const int tasa = 9600;

// variables y constantes
// para lectura potenciometro
const int potePatita = A0;
int poteLectura = -1;
int poteFiltrado = -1;

void setup()
{

  // iniciar comunicacion serial
  Serial.begin(tasa);

  // mientras puerto serial
  // no este listo
  // no avanzar
  while (!Serial)
  {
  }

  // imprimir saludo
  Serial.println("hola!");
}

void loop()
{
  // leer valor analogo en potePatita
  // asignar valor a poteLectura
  // poteLectura va de 0 a 1023
  poteLectura = analogRead(potePatita);

  // filtrado con division entera por 4
  // poteFiltrado va entre 0 y 255
  poteFiltrado = filtrarConDivision(poteLectura, 4);

  // imprimir poteFiltrado en serial
  Serial.print("valor filtrado: ");
  Serial.println(poteFiltrado);
}

// funcion entera
// para tomar una variable entera original
// y dividirla por otro entero para perder resolucion
int filtrarConDivision(int valor, int divisor) {
  int resultado = valor / divisor;
  return resultado;
}
