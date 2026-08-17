// lectura de potenciometro
// y promediado
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

// variables y arreglos
// para promediado potenciometro
const int numeroLecturas = 15;
int poteHistoria[numeroLecturas];
int potePromediado = -1;

void setup() {

  // iniciar comunicacion serial
  Serial.begin(tasa);

  // mientras puerto serial
  // no este listo
  // no avanzar
  while (!Serial) {
  }

  // primera lectura
  poteLectura = analogRead(potePatita);

  // iniciar el arreglo con primera lectura
  for (int i = 0; i < numeroLecturas; i++) {
    poteHistoria[i] = poteLectura;
  }

  // imprimir saludo
  Serial.println("hola!");
}

void loop() {
  // leer valor analogo en potePatita
  // asignar valor a poteLectura
  // poteLectura va de 0 a 1023
  poteLectura = analogRead(potePatita);

  // dividir por 4 para menor resolucion
  poteLectura = poteLectura / 4;

  // actualizar historia
  actualizarHistoria();

  // calcular promedio de historia
  potePromediado = promediarHistoria();

  // imprimir potePromediado
  Serial.print("valor promediado: ");
  Serial.println(potePromediado);
  delay(10);
}


void actualizarHistoria() {
  // recorrer toda la historia de (largo - 1) a (1)
  // shift hacia derecha
  for (int i = 1; i < numeroLecturas; i++) {
    // valor i-1 es grabado en posicion i
    poteHistoria[i] = poteHistoria[i - 1];
  }
  // actualizar valor 0 con valor actual
  poteHistoria[0] = poteLectura;
}

int promediarHistoria() {
  // inicializar resultado
  int promedio = 0;

  // sumarle a promedio cada valor
  for (int i = 0; i < numeroLecturas; i++) {
    promedio = promedio + poteHistoria[i];
  }

  // despues de sumar todos los valores
  // dividir por el numero de lecturas
  promedio = promedio / numeroLecturas;

  // retornar promedio
  return promedio;
}
