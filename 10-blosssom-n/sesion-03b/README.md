# sesion-03b

## apuntes sesión

Partimos hablando de licencias y copyright. Ahora debemos revisar si la licencia de nuestro poema permite utilizarlo y hacer lo que estamos haciendo en el taller.


string: made of characters, como un hilito de cuentas. Tiene un fin que también cuenta como un carácter.


Arduino va a ser cast aside después del break de septiembre, así que vamos a trabajar en cpp / c++ agnóstico.


Arduino hizo sus propias soluciones para que podamos usar string, pero como vamos a salir de Arduino, hay que aprender a vivir sin eso.


Strings = una clase.


Formas en las que crear una string en Arduino:


un constante string de caracteres entre comillas


un solo carácter entre comillas


una regla del string es que pregunta cuantos bits son, o sea hay que especificar cuantos carcteres hay en el string o habrá



link de la explicación:}


https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/


https://docs.arduino.cc/built-in-examples/strings/StringCharacters/


en Arduino también se puede escribir string sin mayús.


usar un arreglo (array) de tipo carácter en vez de string, porque correria en todos no solo en Arduino


``` cpp
char palabracualquiera[cantcaracteres] = "ElValorDeLaVariable"

//int edadAaron = 37;
//int edadSeba = 22; 
//int edadEmi = 24;

//declarar variable
int edades[36];

o 

//declarar
int edades[] = {32, 15, 25, 100, 200}
//dice los valores, que son 5, pero no pone que son 5 si no le pide que los cuente)


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

// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres
```
viendo versos ya

uso de ejemplo a akrillah


```cpp
char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaría perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estás con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mí, te lo juro, ah",};



void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(misVersos[0]);
}

//se repite solo el misVersos[0] o sea
//  "Mami, no te haga' de rogar",
//  "Mami, no te haga' de rogar",
//  "Mami, no te haga' de rogar",
//  "Mami, no te haga' de rogar",


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

mientras i sea menor a 5, sigue

i++ es lo que sea que valga i mas uno
```

## encargos

encargo-03b:

1. apuntes personales de String, string, array, con bibliografia y con pantallazos de resultados, y dudas textuales.
2. subir código a su bitácora ordenado con el formato de backticks a continuación, del proyecto hasta ahora.
3. definir y escribir el corpus a usar: autora, poemas, licencias, poblarlo en la carpeta 00-proyecto-1


```cpp
// codigo aqui
// por ejemplo
```

## lectura

