# sesion-03b

## apuntes sesión

## Clase 280826

### pre-clase (teloneo Aarón)

Comenzamos hablando en clase sobre la legalidad, de cómo a veces no hablamos de lo que sucede, además como en clase estamos utilizando poemas de gente que aún vive, cómo no cruzar la barrera del plagio. 

En el github hay un archivo que se llama “LICENSE” que da un permiso sin costo de muchas variables como por ejemplo distribuir, cambiar, etc. MIT hizo la License solo para software.

Hay que saber proteger nuestras obras. 

Criti.ca consultora experimental especializada en políticas digitales. Lo realizó Claudio Ruiz. 

Derechos digitales. 

Creatives commons: a fines de los años 2000, son licencias. 

Copyright y Creative commons (es un conjunto de licencias) son excluyentes, pero son licencias. 

https://bibliotecas.duoc.cl/propiedad-intelectual/derecho-de-autor-copyright-licencias

Public Access. 

### clase

- Aarón

Strings: son un problema, son varios caracteres. 


No ocupar los strings de arduino, si no c++

Cuando algo está en mayúscula es una class, por ejemplo String. 

comillas dobles: String (secuencia de caracteres) 

Un carácter va con una sola comilla

tipo de dato + nombre de la variable + 

El string es mutante, no se anticipa solo, hay que decirlo. 

Los string tienen funciones

setchar: configurar


Puedes escribir el texto con un String o que existan caracteres y se realizará un arreglo con muchos caracteres. 

Arreglo de datos

tipo de dato + nombre [ ] = 

Corchetes significa arreglo. Existirán muchos caracteres y dentro se coloca cuán grande es este. 

Char (caracter)

https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/

https://docs.arduino.cc/built-in-examples/strings/StringCharacters/

https://docs.arduino.cc/language-reference/en/variables/data-types/string/ 

EJEMPLO

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

Tiene que haber un carácter que diga que termina, por eso el espacio. [6]

```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres
```

Muéstrame el verso 0, 1, 2, etc 

for: para recorrer conjuntos, adentro tiene 3 mini lineas de código 

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

