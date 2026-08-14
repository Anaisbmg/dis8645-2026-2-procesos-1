# sesion-01b

## apuntes sesión

ejemplo de esqueleto

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

ejemploKristel

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

apuntes sobre colores y sistemas decimal, binario y hexadecimal


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


## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
