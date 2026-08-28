# sesion-03b

28-08-2026

## apuntes sesión

Existe una clase que se llama **String**, es un estilo de vida.

Cuando algo tenga mayúscula es una clase y es importante solo mayuscular esto.

* En inglés, como un collar de secuencias.
* Una versión particular que sea un carácter.
* En un lenguaje particular es para encerrar texto.
* Se puede hacer un carácter con una comilla simple.

Si es con minúscula, no es lo mismo.

El computador no sabe cuánto va a medir, por eso se pone la palabra o la cantidad de caracteres entre paréntesis.

Set es configuración y cuando uno configura dice cómo va a ser ahora, para cambiar lo que va dentro del String.

Arduino también deja poner String con minúscula.

El texto se puede describir con tipos de datos con S mayúscula y es una estructura específica ficticia.

Y también se puede decir: existen caracteres y vamos a hacer un arreglo.

Lo que podemos hacer es un arreglo de tipo carácter que corra C++.

Corchete indica arreglo. Ej.: `char palabrita[]`, tiene que llevar corchete, lo que sea que escribamos.

Link ejemplo: https://docs.arduino.cc/language-reference/en/variables/data-types/string/

Ejemplo código en clase:


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
eso es para colocar la cantidad y las edades

```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres
```

el asterisco "*" nos permite hacer un arreglo de arreglos

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

un for es para recorrer conjuntos

la linea se separa con punto y coma pero en el for hay 2

para el caso si i parte desde cero queremos que recorra desde cero hata ej 5 entonce i++ es = lo que sea que valga i + 1

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

