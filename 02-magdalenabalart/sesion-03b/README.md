# sesion-03b

## apuntes sesión

# Apuntes — `char`, `String`, `string`, clases y arrays

## Tipos de datos básicos en C++

En C++ existen tipos de datos que vienen integrados directamente en el lenguaje.

Algunos ejemplos son:

```cpp
int numero = 10;
float temperatura = 20.5;
bool encendido = true;
char letra = 'A';
```

Entre ellos, `char` es un **tipo fundamental de C++**.

Por ende no se necesita importar una biblioteca para utilizarlo.

```cpp
char letra = 'A';
```

## Una palabra está formada por varios `char`

Un solo `char` permite guardar:

```cpp
char letra = 'H';
```

Pero una palabra necesita varios caracteres.

Por ejemplo:

```text
Hola
```

está formada por:

```text
'H' 'o' 'l' 'a'
```

Por eso podemos crear un **array de `char`**:

```cpp
char palabra[] = "Hola";
```

Internamente podemos imaginarlo como:

```text
'H' 'o' 'l' 'a' '\0'
```

El carácter:

```cpp
'\0'
```

indica el final de la cadena de caracteres.

## Acceder a los caracteres

Como `palabra` es un array, podemos acceder a cada posición.

```cpp
char palabra[] = "Hola";
```

```text
palabra[0] → 'H'
palabra[1] → 'o'
palabra[2] → 'l'
palabra[3] → 'a'
palabra[4] → '\0'
```

Los arrays empiezan desde la posición `0`.

# `char[]`

Cuando escribimos:

```cpp
char palabra[] = "Hola";
```

estamos creando directamente un **arreglo de caracteres**.

Entonces:

```text
char
↓
un carácter

char[]
↓
varios caracteres
```

Ejemplo:

```cpp
char autora[] = "Mary Oliver";
```

Conceptualmente:

```text
autora[0]  → 'M'
autora[1]  → 'a'
autora[2]  → 'r'
autora[3]  → 'y'
autora[4]  → ' '
autora[5]  → 'O'
...
```

Esto después permite recorrer el nombre letra por letra.







# `String` con mayúscula

En Arduino existe:

```cpp
String
```

con **S mayúscula**.

Ejemplo:

```cpp
String frase = "Hola";
```

`String` permite trabajar fácilmente con cadenas de texto.

Por ejemplo:

```cpp
String nombre = "Mary";

String mensaje = "Hola " + nombre;
```

Resultado:

```text
Hola Mary
```

Pero `String` **no es un tipo fundamental de C++** como:

```cpp
char
int
float
bool
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

