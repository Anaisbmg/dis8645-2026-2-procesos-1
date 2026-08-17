// lectura de potenciometro
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

// variable entera
// para almacenar lectura
// de potenciometro
int poteLectura = -1;

// constante entera para lectura
// de potenciometro
// conectado a entrada analoga A0
// A0 es reemplazado por compilador
// en un numero entero
const int potePatita = A0;

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
  poteLectura = analogRead(potePatita);

  // imprimir poteLectura en serial
  Serial.print("valor actual: ");
  Serial.println(poteLectura);
}
