# sesion-03b

## apuntes sesión
- tener en cuenta que nuestro proyecto se pueda trabajar en c++ y raspberry
- palabras -- moléculas
- cuando algo está en mayúscula es porque es una clase
  
**String / string**
```
String -- elementos fundamentales de la programación
fin de String -- cuenta como un carácter más
strin -- declarar variables de una forma rápida y sencilla
```

**comillas**
```  
- comillas en c++
- comillas simples, un carácter
- comillas dobles más de un carácter, cadenas de texto
```
---

### Arreglo
- en esta clase nos enfocamos en realizar un *arreglo/array*, el cual permite guardar varios elementos del mismo tipo bajo un solo nombre de variable.
- ocupamos diferentes códigos de ejemplos, los cuales durante la clase los aplicamos a nuestro código del poema para poder visualizarlos en nuestra pantalla.
---
- char (caracteres)
- [] implica arreglo -- varios caracteres, cuan grande es ese arreglo
- char palabrita[] = "valor variable";
- * arreglo de arreglos
- i++ -- lo que sea que valga uno, súmale uno más

### códigos ejemplos de la clase

```cpp
// declaracion de arreglo de enteros
// que se llama edades
// no influye orden de las variables
int edades[3] = { 37, 22, 24 };

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(edades[0]);
  Serial.print(", ");
  Serial.print(edades[1]);
  Serial.print(", ");
  Serial.println(edades[2]);
// poner comas y espacios, ya que se usaa print y eso escribe todo de forma fluida
// las variables parten del 0
}
```
```cpp
// bah que raro
// con 5 no funciono
// siempre agregar uno más
char nombre[6] = "aaron";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(nombre[0]);
  Serial.print(nombre[1]);
  Serial.print(nombre[2]);
  Serial.print(nombre[3]);
  Serial.println(nombre[4]);
}
```
```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres

char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaría perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estás con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mí, te lo juro, ah",};

// bah que raro
// con 5 no funciono
char nombre[6] = "aaron";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(misVersos[0]);
}
```
```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres

char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaría perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estás con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mí, te lo juro, ah",
};

// bah que raro
// con 5 no funciono
char nombre[6] = "aaron";

void setup() {
  Serial.begin(9600);
}

void loop() {

  // recorrer el arreglo
  // for es para recorrer conjuntos
  // adentro tiene 3 mini lineas
  // inicio de los tiempos
  // oye pero cuando paro
  // que hago despues de cada iteracion
  for (int i = 0; i < 5; i++) {
    Serial.println(misVersos[i]);
  }
}
```

### códigos aplicados
```cpp
char *misVersos[] = {
  "Huye luna, luna, luna.",
  "Si vinieran los gitanos,",
  "Harían con tu corazón",
  "Collares y anillos blancos.",
  "Niño, déjame que baile.",
  "Cuando vengan los gitanos,", 
  "Te encontrarán sobre el yunque", 
  "Con los ojillos cerrados.", 
  "Huye luna, luna, luna,", 
  "Que ya siento sus caballos.", 
  "Niño, déjame, no pises",
  "Mi blancor almidonado.",
};

void setup() {
  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < 13; i++) {
    Serial.println(misVersos[i]);
  }
```
> en este código quisimos visualizar todo el poema en el monitor serial de Arduino IDE, se ve de una forma rápida, pero funciona

## algunos links + bibliografía 

https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/

https://docs.arduino.cc/built-in-examples/strings/StringCharacters/

## encargos

encargo-03b:

1. apuntes personales de String, string, array, con bibliografia y con pantallazos de resultados, y dudas textuales.
2. subir código a su bitácora ordenado con el formato de backticks a continuación, del proyecto hasta ahora.
3. definir y escribir el corpus a usar: autora, poemas, licencias, poblarlo en la carpeta 00-proyecto-1

### Federico García Lorca

poner info de el aca

### Poema escogido

hablar sobre el poema aca

```
**“Romance de la luna, luna”**

La luna vino a la fragua 
con su polisón de nardos.
El niño la mira, mira. 
El niño la está mirando. 

En el aire conmovido 
mueve la luna sus brazos 
y enseña, lúbrica y pura, 
sus senos de duro estaño. 

Huye luna, luna, luna. 
Si vinieran los gitanos,
harían con tu corazón 
collares y anillos blancos.

Niño, déjame que baile. 
Cuando vengan los gitanos, 
te encontrarán sobre el yunque 
con los ojillos cerrados. 

Huye luna, luna, luna, 
que ya siento sus caballos. 
Niño, déjame, no pises 
mi blancor almidonado. 

El jinete se acercaba 
tocando el tambor del llano. 
Dentro de la fragua el niño 
tiene los ojos cerrados. 

Por el olivar venían, 
bronce y sueño, los gitanos. 
Las cabezas levantadas 
y los ojos entornados. 


Cómo canta la zumaya, 
¡ay, cómo canta en el árbol! 
Por el cielo va la luna 
con un niño de la mano. 

Dentro de la fragua lloran, 
dando gritos, los gitanos. 
El aire la vela, vela.
El aire la está velando.  
```
### Corpus a utilizar en nuestro proyecto
```
Huye luna, luna, luna. 
Si vinieran los gitanos,
harían con tu corazón 
collares y anillos blancos.

Niño, déjame que baile. 
Cuando vengan los gitanos, 
te encontrarán sobre el yunque 
con los ojillos cerrados. 

Huye luna, luna, luna, 
que ya siento sus caballos. 
Niño, déjame, no pises 
mi blancor almidonado. 
```

```cpp
// codigo aqui
// por ejemplo
```



