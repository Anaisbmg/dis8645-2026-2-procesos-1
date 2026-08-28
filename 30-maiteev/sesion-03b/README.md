# sesion-03b

## apuntes sesión

***Strings***

- Arreglo de caracteres

- c++ agnostico.

- "" comillas dobles estos haciendo un string.

 ```cpp
String thisString = String(13);

 ```
- 13 significa que reservas 13 caracteres

- los strings tienen funciones y te puede decir donde están los caracteres.

- numeros enteros

- int variables

- siempre hay que decir cuanta cantidad son

 ```cpp
int edades[36]=
```
o tambien puede ser 

 ```cpp
int edades= {20,15,100.200]
```

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

- arreglo tiene que ver con una colección.
  
```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres
```
- Hay que pedirle mostrar los versos, hay que llamarlo.
  
- char es la linea que lo crea y describe el inicio del mundo.
```cpp
char nombre[6] = "aaron";
```
- Despues de una coma vienen otro string.

- * arreglo de arreglos.

```cpp

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
- para escribir cosas mas largas como libros se ocupa


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
  - Donde recorre todo el arreglo y le dices el inicio de los tiempos y cuando termina
  - punto y coma te dice el final
  - i<7 es una pregunta
  - i++ todo lo que vale i y uno más

## encargos


  
## lectura
