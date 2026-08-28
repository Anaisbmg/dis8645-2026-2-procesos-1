# sesion-03b
viernes 28 de agosto

**conversación pre-clase**
- tomarse con importancia las licencias de derechos de autor
- revisar fundación derechos digitales
- licencia creative commons: permite usar cualquier tipo de cosa/archivo siempre y cuando se mencione quien lo hizo, busca promover la visibilidad y la reputación, es un conjunto de tipos de licencia y sus diversos tipos tienen distintas reglas
- licencia anticapitalista: de uso libre para individuos sin fines de lucro.
- los libros de la mujer rota
- busqué la licencia del poema que estamos usando: wild geese/gansos salvajes de mary oliver, ya que falleció el 2019 y su obra aún no prescribe al dominio público.
    - **titularidad:** los derechos de la obra pertenecen legalmente a la herencia (estate) de mary oliver o a sus editores oficiales (como beacon press).
    - **uso no autorizado:** no se puede reproducir, republicar comercialmente ni utilizar el poema completo sin el consentimiento por escrito de los titulares de los derechos.
    - **uso educativo o personal:** citar fragmentos cortos para fines educativos, reseñas o análisis suele considerarse uso justo (fair use), pero copiar el poema entero en sitios web, libros o antologías requiere un permiso formal.
- artful design libro
- pablo irarrázaval
  
## apuntes sesión
### string
- seguidilla de mostacillas (caracteres)
- en C no existían los `string`, en C++ es menos latero
- recomendación: hacer el código en C++ más general, no tan específico de arduino
- cuando algo tiene mayúscula es una clase: `String`
- profundizar en el lenguaje acá: https://docs.arduino.cc/language-reference/en/variables/data-types/int/

#### ¿cómo hacer `strings` en arduino?
  
- poner comillas dobles para palabras.
- con comillas simples, si es solo un carácter.
- por lo tanto más de un carácter se convierte en un string (conjunto de caracteres).
  
```cpp
String thisString = String (13);
```

    
- primero va el tipo de dato, luego el nombre que le coloquemos, "en ese lugar hazme un `string` donde quepan 13 caracteres".
- hay que decirle cuánto va a medir, o decir es igual a "sopaipilla" y leerá cuántos caracteres.
- ejemplos de cómo se puede usar:
  
```cpp
String stringOne = "Hello String";                    // using a constant String
String stringOne = String('a');                       // converting a constant char into a String
String stringTwo = String("This is a string");        // converting a constant string into a String object
String stringOne = String(stringTwo + " with more");  // concatenating two strings
String stringOne = String(13);                        // using a constant integer
String stringOne = String(analogRead(0), DEC);        // using an int and a base
String stringOne = String(45, HEX);                   // using an int and a base (hexadecimal)
String stringOne = String(255, BIN);                  // using an int and a base (binary)
String stringOne = String(millis(), DEC);             // using a long and a base
String stringOne = String(5.698, 3);                  // using a float and the decimal places
```

- arreglo de caracteres

```cpp
char Str4[8] = "arduino";
```
- corchete implica un arreglo, acá significa que van a haber varios caracteres.

#### ejemplo con edades
```cpp
int edadAaron = 37;
int edadSeba = 22;
int edadEmi = 24;
```
- mal hecho!! se hace así

```cpp
//declarar
int edades [36];

edad = {
  21,
  21,
  22
}
```
o
```cpp
// declaracion de arreglo de enteros
// que se llama edades
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
}

```

#### ejemplo nombres

```cpp
// bah que raro
// con 5 no funciono
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
```

#### ejemplo versos

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
*: pointer o puntero

## trabajo en clases


## encargos

## lectura
