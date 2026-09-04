# sesion-03b

## apuntes sesión

- Poesía computacional / generativa: **Ramsey Nasser**, **Allison Parrish**, **Nick Montfort**

- Documentación oficial:
  
  - [String Object – Arduino Docs](https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/)
  - [StringCharacters – ejemplo built-in](https://docs.arduino.cc/built-in-examples/strings/StringCharacters/)
  - [String (char array) – Arduino Docs](https://docs.arduino.cc/language-reference/en/variables/data-types/string/)


### string vs char array

un string es una secuencia que tiene más de un carácter.

programar en C++ pensando en que funcione en cualquier lado, sin usar las funciones propias de Arduino — Arduino creó sus propias funciones sobre C++.

- **String** (con mayúscula) es una **clase**: cuando algo empieza con mayúscula, es una clase.(Se usa recién después de la clase 18) 
  - Ejemplo: `String thisString = String(13);`
    
  - Regla: no se anticipa cuánto va a medir  hay que anticipar el tamaño.
    
  - Funciones 
    - `charAt()` → da la posición de un carácter
    - `setCharAt()` → permite configurar/cambiar un carácter dentro del string (ej. en la posición 4, cambiarlo por `n`)

- **string minúscula / char array**: no es una clase compleja, es una estructura más ficticia:
  
  - Es un **arreglo de caracteres**
  - Una constante de caracteres entre **comillas dobles** (ej. `"aaron"`) es un char array
  - Una **constante de un solo carácter** va entre **comillas simples** (ej. `'a'`)
    
  - Regla: comillas **simples** si es **uno**, comillas **dobles** cuando son **varios**
  - `[]` permite declarar un arreglo, definiendo qué tan grande es:
```cpp
    char Str4[] = "arduino";
    char Str5[8] = "arduino";
    char Str6[15] = "Arduino";
```
### arreglos (arrays)

```cpp
int edades[5];
edades = {32, 15, 25, 100, 200}; // el 5 queda implícito por la cantidad de elementos
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
// con 6 posiciones para "aaron" funcionó, con 5 no
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

### para un poema 

> Un poemario es un arreglo de páginas.
> Una página es un arreglo de líneas.
> Una línea es un arreglo de caracteres.

```cpp
char *misVersos; // arreglo de arreglos
```

cada carácter tiene, a su vez, un valor **ASCII** detrás.

### Recorrer arreglos con `for`

un arreglo se puede recorrer de forma estratégica. Dentro del `for` hay tres partes:
- **inicio**: `int i = 0`
- **condición de parada**: `i < 5`
- **qué hago después de cada iteración**: `i++`

```cpp
for (int i = 0; i < 5; i++) {
  // i++ → lo que sea que valga i, vale uno más
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

