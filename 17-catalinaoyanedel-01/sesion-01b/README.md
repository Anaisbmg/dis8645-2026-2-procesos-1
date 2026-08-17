# sesion-01b
viernes 14 de agosto

## apuntes sesión
revisamos el encargo y comenzamos a conversar sobre variables y detalles del lenguaje en la programación.

**¿qué vamos a usar?**

arduino IDE: entorno de desarrollo integrado

- el botón con click sirve para verificar si el código está bien hecho, considerando el tipo de arduino que se va a utilizar.
- segunda carpeta de abajo a arriba.
- arduino UNO R4 son las que están en el lid, buscar e instalar.
- existe el minima y wifi.
- microcontroladores que son capaces de hacer lo que hace un computador.
- arduino fue inventado por hernardo barragan. https://arduinohistory.github.io

cursos gratis:
- https://github.com/ITPNYU/physcomp
- https://itp.nyu.edu/physcomp/

vamos a usar arduino UNO R4

- grabar archivo en una carpeta que queda con el mismo nombre, lo que indica que es el archivo principal, pero esta puede tener más cosas dentro. **en la entrega subir con carpeta.**
- set up: configurar para empezar.
- void: es un tipo de función, significa vacío
- {: desde acá, no puede ir solo. se declara la función.
- (): las funcionen tienen un entre paréntesis.
- //: comentario para humanos. **toda línea de código va estar comentada en este curso.**
- ==: para comparar.
- if: solo si es sí, se ejecuta el código, si es no, lo salta.
- &: conectar
- hexadecimal: 0-9; 10: a, 11: b, hasta la f. _modos de contar_
  
```cpp
void setup() {
  // aquí va setup (), ocurre una vez, al principio
  }

void setup() {
  // aquí va loop ()
  // ocurre despues de setup ()
  // se repite hasta que no se pueda
  }

```
## ejemplo kristel

```cpp
// ejemplo con kristel
// bools
bool kistelEstudianteUDP = true;
bool kristelChilena = true;
bool kristelCoreana = false;
bool kristelDientes = true;

//intergers
int kristelEdad = 22;
int kristelNacimientoAnho = 2003;
int kristelNacimientoMes = 11;
int kristelNacimientoDia = 5;
//azul
int kristelColorFavorito = "0000ff";

// scope esta dentro de {}
// scope es un contexto

// if (mesActual == kristelNacimientoMes) {
// estoy en el mes de interes
//}

// if (diaActual) == kristelNacimientoDia) {
  // decirle feliz cumple
cumplirAnhosKristel();
//}

if (mesActual == kristelNacimientoMes &&
   (diaActual == kristelNacimientoDia);

}

// 10 millones de colores
// 24 bits tengo mas de 10 millones de valores posibles
// 3 receptores rojizo, verdoso, azuloso
// demosle 8 bits a cada canal de color
// entonces R de rojo tiene 8 bits, G de verde, B de azul
// entonces 0 es apagado, 255 es prendido
// 8 bits se llaman 1 byte
// disco duro 2MB, pero de 2Mb y esos son 2 mega bit

// 1 byte tiene 2 nibnles, 2 pedacitos

0010 1100
0101 0101
1011 1010

// en 1 nibble, o 4 bits tengo 2^4 valores posibles
// del 0 al 15

}

//la vamos a correr cuando
//sea el cumple de kristel
void cumplirAnhosKristel() {
  // actualizar edad de Kristel
  // edad es la que es mas uno
  kristelEdad = kristelEdad + 1;
  // manera abreviada
  // kristelEdad+=1;
  // kristelEdad++;
}

```
## ejemplo sumar
```cpp
int valorPancito = 2000;
int valorCafecito = 5000;

void setup() {

  // aquí va setup (), ocurre una vez, al principio
}

void setup() {

  // aquí va loop ()

  // ocurre despues de setup ()

  // se repite hasta que no se pueda
}

void loop (){

  int valorDesayuno = sumar (valorPancito, valorCafecito);

  if (valorDesayuno < 5000) {
    // nao nao
  } else {

    // yam

    }

// sumar enteros
int sumarEnteros(int x, int y) {
  // declarar un resultado
  int resultado = 0;
  // es una abreviacion de dos pasos
  // declarar   int resultado;
  // asignar valor    resultado = 0;

  // declarar solo lo puedo hacer una vez
  
  //hacer la suma de x e y
  // y reemplazar valor resultado
  // por ese valor
  resultado = x+y;
  
  //
  return resultado

}
```

## cómo conectar arduino a compu

- asegurarse de que sea la máquina correcta seleccionada
- en setup se escriben todo lo importante y base para los código
- ej: int
- no irse altiro a la ia, buscar en foros, códigos de ejemplo

## encargos


encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
