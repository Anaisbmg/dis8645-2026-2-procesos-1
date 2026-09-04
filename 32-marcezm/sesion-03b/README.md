# sesion-03b
Viernes 28 de Agosto

## apuntes sesión

### String class
Un `String` es una cadena de caracteres, como una seguidilla de mostacillas, donde cada mostacilla sería un carácter.

En C no existían los `String` como tal; en C++ es menos latero trabajar con ellos.

**Recomendación:** hacer el código en C++ de forma más general, no tan específico de Arduino, para aprender realmente el lenguaje.

### Documentación

- [String Object](https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/)
- [String Characters](https://docs.arduino.cc/built-in-examples/strings/StringCharacters/)
- [String data type](https://docs.arduino.cc/language-reference/en/variables/data-types/string/)
- [int](https://docs.arduino.cc/language-reference/en/variables/data-types/int/)

---

### Caracteres y comillas
- Los **caracteres individuales** se escriben con **comillas simples**: `'A'`
- Cuando aparecen comillas dobles, significa que tenemos un conjunto de caracteres, es decir, un `String`: `"Aaron"`
- Se entenderia asi:
  - `'A'`       → un carácter
  - `"Aaron"`   → varios caracteres / String

¿Cómo hacer Strings en Arduino?
Para palabras o frases se utilizan `"`:

```cpp
String nombre = "Aaron";
```

Con comillas `'` si es solo un carácter:

```cpp
char letra = 'A';
```

###  Crear un Strings
Primero va el tipo de dato, luego el nombre que le coloquemos y después el valor:

```cpp
String thisString = String(13);
```

En este caso:

```cpp
String thisString = String(13);
```

`String(13)` convierte el número `13` en un String: 13 → "13"

También podemos decir que palabras queremos guardar:

```cpp
String comida = "sopaipilla";
```
La idea es que el `String` pueda almacenar la cantidad de caracteres que contiene ese texto.

### Importante sobre String
El `String` es más exigente con la memoria que trabajar directamente con arreglo de caracteres, especialmente cuando el código se hace más grande.

Puede terminar siendo muy pesado y "marear" al código/computador.

Por eso también es importante aprender a trabjar con arreglos de caracteres `(char)`.

### Arreglo de caracteres

Los corchetes `[]` indican que estamos trabajando con arreglo, esto quiere decir que tendremos varios elementos:

```cpp
char Str4[8] = "arduino";
```

- En este caso `char` indica que son caracteres.
-  `[8]` indica que el arreglo tiene 8 posciones.
-  la palabra `arduino` tiene 7 caracteres, pero necesitamos 8 posiciones porque las cadenas de caracteres terminan con `\0`, este carácter indica el final de la cadena.
-  entonces `a → r → d → u → i → n → o → \0` ocupa 8 posiciones.

### Arreglo de enteros
Al principio podríamos hacer:

```cpp
int edadAaron = 37;
int edadSeba = 22;
int edadEmi = 24;
```
pero si tenemos demasiadas personas se vuelve poco práctico.

Por ejemplo, si quiero guardar 36 edades:
```cpp
int edades[36];
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

