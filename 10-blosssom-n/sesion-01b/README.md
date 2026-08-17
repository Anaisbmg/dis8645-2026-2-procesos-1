# sesion-01b

## apuntes sesión
Sesión 01b

aritmética booleana boolean - George Boole

or +

and *

interruptor de luz 0+1 (extremo sin punto intermedio)

fijo = constante

variables

nombres apellidos edad estatura vision

funciones

ver dormir 

1bit=0-7 (8 números por bit = 8bit = 256 resultados posibles 0-255)

int8_t 8, con signo

uint8_t 8, sin signo (sirve para mi edad porque seria positiva del 0 - 255)

setup (configurar) = una función, secuencia de instrucciones para que pasen cosas.

int setup(): el resultado es un numero entero

Void setup() {

} esto es declarar la funcion setup, existe la funcion, pero aún no hace nada)


está prohibido escribir una linea de codigo sin antes escribir lo que va hacer

```cpp

Void setup() {
//aqui va setup(), ocurre una vez, al principio
}

void loop() {
//aqui va loop()
//ocurre despues de setup
//se repite hasta que no se pueda
}
````
bool: variable extremista si o no 0/1 true/false

```
//
bool nataliaEstudianteUDP = true;
bool nataliaChilena = true;
//integers
int nataliaEdad = 22;
int nataliaNacimientoAnho = 2003;
// enero es 1, diciembre es 12
int nataliaNacimientoMes = 10;
// dias desde 1 hasta lo que dure el mes
int nataliaNacimientoDia = 10;

== comparar
if (mesActual == nataliaNacimientoMes) {
}
if (mesActual == nataliaNacimientoMes &&
diaActual == nataliaNacimientoDia

// millones de colores serian 24 bits 2^24, 2^3 es 8 bits

colores
0101 0100  24 bits
0010 0011
1101 1010

hex 0000ff (cada uno es 4, total 24)
string kristelColorFavorito = "0000ff";
```

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
