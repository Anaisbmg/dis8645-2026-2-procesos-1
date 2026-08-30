# sesion-03b

## apuntes sesión

string: dato que representa texto por letras, números o símbolos
escribir en cpp
con comillas doble para una secuencia de caracteres definido como 1
con comillas simple para declararlo

[String](https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/)
[String funciones](https://docs.arduino.cc/built-in-examples/strings/StringCharacters/)

Str

(comentario)

//edadpersona01

//edadpersona02

//edadpersona03


(declarado)

int edades[cantidad de números] = {que números son}

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

que es char: es un dato básico para un carácter unico

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
char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaría perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estás con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mí, te lo juro, ah",
};
```

```cpp
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

for()

**irse y no volver de Alejandra Pizarnik**

en Google escribi "for (int i = 0; i < 5; i++)" y la respuesta fue:

"Este fragmento de código es un bucle for que se ejecuta exactamente 5 veces. El contador comienza en 0 y se detiene al llegar a 4. Componentes del bucle: int i = 0: Inicialización. Crea la variable i empezando en cero. i < 5: Condición. El bucle se repite mientras i sea menor que 5. i++: Incremento. Suma 1 a i tras cada repetición. Ejemplo de ejecución: Si imprimes el valor de i en cada vuelta"

llevado al ejemplo de clase

```cpp
// un poemario

// es un arreglo de paginas

// una pagina es un arreglo de lineas

// una linea es un arreglo de caracteres

char *misVersos[] = {
  "irse",
  "y",
  "no",
  "volver",
  "alejandra pizarnik",
};


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

entonces remplazamos con un extracto del poema seleccionado

"irse, y no volver."
― Alejandra Pizarnik, Poesía completa

```cpp
// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres

char *misVersos[] = {
  "irse",
  "y",
  "no",
  "volver",
  "alejandra pizarnik",
};

// declarar que se necesita un carácter mas para finalizar
char nombre[10] = "gruposeis";


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

intervenido
char*: frase completa

dx y dy: cambio posición ejes x (horizontal) e y (vertical), d es delta = diferencia o cambio

set: ordena los elementos de mayor a menor

(falta el oficial)

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

