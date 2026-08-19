# sesion-01b

## apuntes sesión

### referentes

susan kare, diseñadora de los primeros computadores y de sus iconos.

neri oxman, diseñadora que trabaja entre diseño, ciencia, tecnología y naturaleza.

neil gershenfeld, relacionado con fabricación digital, computación y fab labs.

martin bravo.

wiring.

tom igoe, uno de los 5 co-creadores de arduino.

### variables

dato más extremo: variable si o no.

variable boolean = son o no son.

las cosas son en un contexto.

una variable tiene:

**tipo / nombre / valor**

por ejemplo:

```cpp
int biankaedad = 22;
```

`int` → tipo

`biankaedad` → nombre

`22` → valor

#### constante

constante = "algo fijo"

```cpp
const int edad = 22;
```

### algebra booleana

trabajamos con valores de:

`0` y `1`

`0` = falso / no

`1` = verdadero / si

### or

or siempre da 0, a no ser que alguna de las variables valga 1.

```text
a + 0 = a
a + 1 = 1
a + a = a
```

si alguna de las dos variables es 1, el resultado es 1.

### and

and se escribe como multiplicación.

siempre da 0 a no ser que los 2 sean 1.

```text
a · 0 = 0
a · 1 = a
a · a = a
```

### compuertas

compuerta and → tienen que cumplirse las dos condiciones.

compuerta or → basta que una condición sea verdadera.

### tipos de variables

`string` → pueden tener palabras.

`bool` → si o no. variable extrema.

`int` → número entero.

`char` → un carácter.

`int8_t`

`uint8_t` → sirve para guardar valores de 0 a 255.

8 bits = 1 byte.

### arduino

arduino uno r4

* minima
* wifi

arduino ide

processing

wiring

### setup

setup = configuración, coreografía, configurar para que empiece el inicio de las cosas.

para que el primer microcontrolador funcione.

```cpp
void setup() {

}
```

`setup()` es una función.

una función = secuencia de instrucciones para que ocurran cosas.

la función también tiene que tener un tipo.

`void` = vacío, no entrega como respuesta un valor.

`int` = el resultado es un número entero.

en este caso setup solo necesita aparecer.

```text
void → tipo
setup → nombre de la función
() → parámetros
{} → lo que ocurre dentro
```

la función se llama `setup` y es de tipo `void`.

es una función que existe, por ende está declarada.

para usarla primero tiene que existir.

### {}

`{}` = scope / contexto.

lo que está dentro de las llaves ocurre dentro de ese contexto.

por ejemplo:

```cpp
if (condicion) {

}
```

solo ocurre lo que está dentro si la respuesta es si.

### variables en c++

```cpp
bool biankaEstudianteUDP = true;
bool biankaChilena = false;

int biankaedad = 22;
int biankanacimiento = 2003;
int biankanacimientomes = 12;
int biankanacimientodia = 1;
```

`bool` → verdadero o falso.

`int` → número entero.

### = y ==

el `=` no es simétrico.

`=` → asignación de valores.

por ejemplo:

```cpp
edad = 22;
```

estoy diciendo que edad ahora vale 22.

`==` → comparar.

```cpp
edad == 22
```

pregunta si edad es igual a 22.

### if / condicionales

`if` sirve para poner una condición.

```cpp
if (condicion) {

}
```

por ejemplo:

```cpp
if (mesActual == biankanacimientomes) {

}
```

// estoy en el mes de interés

```cpp
if (diaActual == biankanacimientodia) {

}
```

// estoy en el dia de interés

también puedo juntar las dos condiciones:

```cpp
if (mesActual == biankanacimientomes && diaActual == biankanacimientodia) {

}
```

// si estoy en el mes de nacimiento y además estoy en el día de nacimiento le deseo feliz cumpleaños

`&&` = and.

las dos condiciones tienen que cumplirse.

### colores y bits

tenemos 3 receptores:

* rojo
* verde
* azul

r = rojo

g = verde

b = azul

démosle 8 bits a cada canal de color.

entonces:

```text
r = 8 bits
g = 8 bits
b = 8 bits
```

8 bits se llaman 1 byte.

0 es apagado.

255 es prendido / máximo.

tenemos:

```text
8 + 8 + 8 = 24 bits
```

con 24 bits tenemos más de 10 millones de valores posibles.

en realidad son aproximadamente 16,7 millones de colores posibles.

## funciones

una función es una secuencia de instrucciones para que ocurran cosas.

por ejemplo:

```cpp
void cumplirAnhos() {

}
```

las `void` ocurren sin emitir un resultado.

si queremos sumar números enteros:

```cpp
int sumarEnteros(int x, int y) {

}
```

es tipo `int` porque nos va a dar un resultado entero.

podemos declarar un resultado:

```cpp
int resultado = 0;
```

esto es una abreviación de dos pasos:

```cpp
int resultado;
resultado = 0;
```

primero declaramos.

después asignamos el valor.

la función puede quedar:

```cpp
int sumarEnteros(int x, int y) {

    int resultado = 0;

    resultado = x + y;

    return resultado;
}
```

`return` entrega el resultado de la función.

## comentarios / seudocódigo

los comentarios sirven para describir las ideas.

```cpp
// esto es un comentario
```

toda línea de código puede estar acompañada de un comentario para explicar qué queremos que ocurra.

el seudocódigo sirve para pensar primero la idea y después pasarla a código.

por ejemplo:

```cpp
// si estoy en el mes de nacimiento
// y además estoy en el día de nacimiento
// entonces le deseo feliz cumpleaños
```

### matrices led

matrices led = varios leds organizados en filas y columnas.

se pueden utilizar para mostrar:

* números
* letras
* formas
* imágenes
* animaciones

## encargos

para este ejercicio me tocó trabajar con un arduino uno r4 wifi junto con mi compañero. lo primero que quería entender era cómo hacer que el microcontrolador hiciera algo que yo le estaba pidiendo a través del código.

como en la clase estuvimos hablando de variables, funciones, booleanos, condiciones y de cómo las cosas funcionan dentro de un contexto, quería llevar estos conceptos a algo físico.

el arduino que estoy utilizando tiene una matriz de leds incorporada de 12 x 8, por lo que decidimos trabajar con estas luces para crear un emoji.

### primer acercamiento

antes de hacer los emojis, primero necesitaba entender cómo funcionaba la matriz de leds y cómo podía comunicarme con ella desde el computador.

para eso conecté el arduino al computador mediante el cable usb y abrí el arduino ide.

lo primero que tuve que hacer fue seleccionar la placa correspondiente:

arduino uno r4 wifi

también tuve que seleccionar el puerto para poder cargar el código al microcontrolador.

### primera prueba con la matriz

una vez que pude comunicarme con el arduino, empecé a trabajar con la matriz de leds.

la matriz tiene:

12 columnas
x
8 filas

por lo que tenemos 96 luces.

cada luz puede estar prendida o apagada.

esto lo pude relacionar con lo que vimos en clases sobre los booleanos:

true = si
false = no

en este caso puedo pensar:

true = luz prendida
false = luz apagada

también puedo pensar la matriz utilizando 0 y 1:

0 = apagado
1 = prendido

tambien me recordó a mi lectura del libro “una fórmula = una imagen”, ya que en una parte nos menciona que las imágenes se grafican en coordenadas, tenemos (x,y). entonces, en este caso contaríamos con 8 filas y 12 columnas, donde cada luz tendría una posición dentro de esta matriz. las coordenadas se podrían ir desplazando o cambiando para formar una imagen, similar a los ejercicios del colegio, donde se colocaban diferentes puntos según sus coordenadas y luego se unían para ver qué imagen formaban.


encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
