# sesion-03b

2026-08-28

## Licencias

## Strings

Tienden a ser un problema (elementos fundamentales de la comunicación).

Son una clase (comienzan con mayúsculas.

Existen distintas versiones. No hay solo una manera de hacer las cosas.

"" string
' ' para palabras 

```c++
// en este lugar hago un string que dice cuantos caracteres tendrá en el
String  thisString = String(13);
```

```c++
//
charAt() =  extraer un caracter en especifico de una cadena de texto

//
setCharAt() = modificar un caracter especifiico dentro de una cadena de texto 
```


String = difícil

En Arduino también existe string (en minúscula).

Se puede utilizar el String con un arreglo (array), por ejemplo con "char".

```c++
// arreglo de datos
// "Str4", "Str5", "Str6", pueden ser otro nombre, ejemplo "palabrita"
char Str4[] = "arduino";
char Str5[8] = "arduino";
char Str6[15] = "arduino";
```

Ejemplo edades del curso

```c++
// declarar
int edades[36] = {20, 21, 22, 23, 24}
```

Otro ejemplo de las edades:

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

Ejemplo nombres del curso:

```c++
char nombre[5] = "emilia";

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
Importante: 

```
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres
```

(*) = (pointer). Permiten hacer un arreglo de arreglos, para no preocuparnos por cuánto mide.

```
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

Importante: sólo se repite la primera línea

En cambio, aquí se repiten las 5 líneas que componen un verso.

```
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

Entre corchetes = [qué tan grande es el arreglo (array)] 

¿Cómo hacer strings en C++?

 - 

## encargos

## lectura
