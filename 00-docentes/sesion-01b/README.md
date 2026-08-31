# sesion-01b

## apuntes sesión

### ejemplo de esqueleto

```cpp
void setup() {
  // aqui va setup(), ocurre una vez, al principio

}

void loop() {
  // aqui va loop()
  // ocurre despues de setup()
  // se repite hasta que no se pueda
}
```

### ejemploKristel

```cpp

// kristel es estudiante udp
// bools
bool kristelEstudianteUDP = true;
bool kristelChilena = true;
bool kristelCoreana = false;
bool kristelDientes = true;

// integers
int kristelEdad = 22;
// cristo es 0, el tiempo fluye hacia delante
// eso es paralelo a cristo lo mas grande
int kristelNacimientoAnho = 2003;
// enero es 1, diciembre es 12
int kristelNacimientoMes = 11;
// dias desde 1 hasta lo que dure el mes
int kristelNacimientoDia = 5;

// azul
string kristelColorFavorito = "0000ff";

void setup() {
  // aqui va setup(), ocurre una vez, al principio
}

void loop() {
  // aqui va loop()
  // ocurre despues de setup()
  // se repite hasta que no se pueda

  // si estoy en el mes de nacimiento
  // de kristel
  // y ademas
  // estoy en el dia de nacimiento
  // de kristel
  // le deseo feliz cumpleanhos

  // scope esta dentro de {}
  // scope es un contexto

  // if (mesActual == kristelNacimientoMes) {
  // estoy en el mes de interes

  // if (diaActual == kristelNacimientoDia) {

  // decirle feliz cumple
  // que se tome el dia libre
  // traer cositas pa picar
  cumplirAnhosKristel();
  //}

  // otra opcion
  // if (mesActual == kristelNacimientoMes &&
  //    diaActual == kristelNacimientoDia)



  // }
}

// la vamos a correr cuando
// sea el cumple de Kristel
void cumplirAnhosKristel() {
  // actualizar la edad de Kristel
  // edad es la que es mas uno
  kristelEdad = kristelEdad + 1;
  // manera abreviada
  // kristelEdad += 1;
  // kristelEdad++;
}
```

### apuntes sobre colores y sistemas decimal, binario y hexadecimal

```cpp
// 10 millones de colores
// 24 bits tengo mas de 10 millones de valores posibles
// 3 receptores rojizo, verdoso, azuloso
// demosle 8 bits a cada canal de color
// entonces R de rojo tiene 8 bits
// G de verde tb, B de azul tb
// entonces 0 es apagado, 255 es prendido
// 8 bits se llaman 1 byte
// disco duro 2 MB, pero de 2Mb y esos son 2 mega bit

// 1 byte tiene 2 nibbles, 2 pedacitos

// 0010 1100 0101 0101 1011 1010

// en 1 nibble, o 4  bits tengo 2^4 valores posibles
// del 0 al 15


// dec    hex
// 00     0
// 01     1
// 02     2
// 03     3
// 04     4
// 05     5
// 06     6
// 07     7
// 08     8
// 09     9
// 10     A
// 11     B
// 12     C
// 13     D
// 14     E
// 15     F
```

### ejemplo de declaración de funciones

```cpp
int valorPancito = 2000;
int valorCafecito = 3000;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  int valorDesayuno = sumarEnteros(valorPancito, valorCafecito);

  if (valorDesayuno < 5000) {
    // oh no 
  } else {

    // oh si
  }

}

// sumar numeros enteros
// es tipo int porque nos va a dar un resultado
// las void ocurren sin emitir un resultado
int sumarEnteros(int x, int y) {
  // declarar un resultado
  int resultado = 0;
  // es una abreviacion de dos pasos
  // declarar       int resultado;
  // asignar valor  resultado = 0;

  // hacer la suma de x e y
  // y reemplazar valor resultado
  // por ese valor
  resultado = x + y;

  // emitir resultado al exterior de la funcion
  return resultado;

  // declarar solo lo puedo hacer una vez
}

```

 ### apuntes SebastianSaez1003

sin el 0 se cae el mundo, lo vamos a respetar mucho.

para un vapor de 8 bits se pueden contar más o menos 256 números que serían en un rango de -127 hasta 126, no es simétrico porque está el 0 entremedio.

ahora Aarón va a instalar 2 programas muy importantes que nos van a acompañar durante el semestre.

el software que vamos a ver primero es Arduino, el cual es muy popular, específicamente el Arduino IDE (Entorno de Desarrollo Integral).

hay que leer con calma.

las versiones nightly son inestables.

el botón de más arriba a la izquierda en la app de Arduino sirve para poder comprobar y reconocer si el código que se está escribiendo realmente funciona, pero específicamente de la placa microcontroladora que se está declarada.

Arduino no funciona directamente, hay que instalar las placas para que puedan ser utilizadas correctamente.

wiring.org.co 

Arduino es medio turbio, pero relativamente fácil de usar.

### vuelta del break

el sistema hexadecimal es una manera en la que se puede contar de 0 a 15.

Aarón hizo un pseudocódigo del color favorito de Kristel y cómo aumenta su edad cuando ocurre su cumpleaños.

es super criminal borrar alguno de los murciélagos de las funciones porque un computador no es capaz de comprender qué es lo que se le está entregando.

con las teclas Control + T se puede hacer un autoformateo.

tenemos que tener responsabilidad computacional, si es que algo no funciona por falta de algún carácter como el importante ";" con el cual se declara que se terminó de escribir una línea.

una función tiene características muy importantes como: nombre, paréntesis (), murciélagos {} y el tipo, como puede ser "void".

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
