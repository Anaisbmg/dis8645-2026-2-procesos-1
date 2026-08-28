# sesion-03b → 28/08/26

## apuntes sesión

Se nos hizo entrega de nuestras cajitas :)

Seguir avanzando para el proyecto 1 → tenemos 2 opciones 

Poema 1 "¿Qué diría?" (cambio, riesgo, juicio ajeno)

Poema 2 "Queja" (perfeccionismo = control)


**Alfonsina Storni **

Esta poeta argentina nacida en 1892 en Suiza es uno de los íconos de la literatura posmodernista. Con una infancia difícil y con carencias y luego una vida con recurrentes enfermedades, su poesía está impregnada de lucha, audacia, amor y una reivindicación del género femenino. Algunos de sus poemas a resaltar son: ¡Adiós!, Alma desnuda, La caricia perdida, Razones y paisajes de amor, Queja, Tu dulzura, Dolor y Frente al mar.

Toda su obra refleja dramatismo, lucha y una audacia inusual para la época. Su temática es, sobre todo, amorosa, feminista y profunda, en donde se refleja un carácter singular, marcado muchas veces por la neurosis.

Su muerte, continúa la huella de su transgresora personalidad. Su trágico suicidio, en las aguas de la playa "La Perla", de Mar del Plata, el 25 de octubre de 1938, le permitió huir de una penosa enfermedad oncológica y de la soledad que la invadía.

Información sacada de → https://www.poemas-del-alma.com/alfonsina-storni.htm#block-bio


PASAR AL LIMPIO APUNTES

código → no confiar en string 

clase → String class → "S" mayuscula es porque es una clase 

'string´ caracter normal

"String" una clase → se le puede agregar numeros, ¿cuantos son?, hay que darle el contexto


1. char (El método tradicional)
Qué es: Una simple "caja" de tamaño fijo con letras ordenadas.

Lo bueno: No consume memoria extra y es muy seguro para las placas pequeñas.

Lo malo: Es más rígido y difícil de modificar o manipular.

2. String (El objeto moderno)
Qué es: Una herramienta avanzada que te permite unir textos, buscar palabras y cambiar tamaños fácilmente con funciones automáticas.

Lo bueno: Es comodísimo de usar (igual que en otros lenguajes de programación).

Lo malo: Consume y fragmenta mucha memoria RAM. Si lo usas mal o cambias el texto todo el tiempo en placas chicas, el Arduino puede colapsar y dejar de funcionar.

- string (con minúscula): Son las cadenas tradicionales de C (arreglos de caracteres o char[]). Son fijas, más difíciles de manipular, pero muy eficientes y seguras para la memoria del Arduino.

- String (con mayúscula): Es un objeto avanzado de C++. Te da superpoderes para modificar, unir y buscar texto fácilmente, pero gasta y fragmenta mucha memoria RAM, por lo que puede hacer que placas pequeñas colapsen si se usa mal.

Se agregran las comillas → ¿Se usa una comilla (') o dos (")?

Dos comillas (" ") Para textos (Cadenas / Strings): Se usan siempre que quieras escribir una palabra, una frase o un texto completo (aunque sea una sola letra).

Para un solo carácter (char): Se usan únicamente cuando estás guardando una sola letra o símbolo suelto dentro de una variable de tipo char.



ejmplo 1 visto en clases (arduino)

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

ejmplo 2 visto en clases (arduino)

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

// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres


ejmplo 3 visto en clases (arduino)

tratamos de salir de String

Lo que escribimos en Arduino no funciona igual que en VS Code para la Raspberry, pero necesitamos tener la lógica clara de la idea para poder traducirlo después sin problemas



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

for es para recorrer el arreglo 

for es para recorrer conjuntos

dentro tiene 3 mini lineas: 

1. inicio de los tiempo
   
2. ¿cuando paro?
   
3. que hago despues de cada iteracion

for (int i = 0; i < 5; i++)

i++ → lo que sea que valga i ahora vale 1 mas

Seguir avanzando para el proyecto 1 → tenemos 2 opciones 

Nos quedaremos con el poema 2

Poema 2 "Queja" (perfeccionismo = control)

codigo de prueba del poema 

```cpp
// poema "queja"
// de allfonsina storni

// Señor, mi queja es ésta,
// Tú me comprenderás;
// De amor me estoy muriendo,
// Pero no puedo amar.
// Persigo lo perfecto
// En mí y en los demás,
// Persigo lo perfecto
// Para poder amar.
// Me consumo en mi fuego,
// ¡Señor, piedad, piedad!
// De amor me estoy muriendo,
// ¡Pero no puedo amar.

char *misVersos[] = {
  "Señor, mi queja es ésta,",
  "Tú me comprenderás",
  "De amor me estoy muriendo,",
  "Pero no puedo amar.",
  "Persigo lo perfecto",
  "En mí y en los demás,",
  "Persigo lo perfecto",
  "Para poder amar.",
  "Me consumo en mi fuego,",
  "¡Señor, piedad, piedad!",
  "De amor me estoy muriendo,",
  "¡Pero no puedo amar!"
};

void setup() {
  // put your setup code here, to run once:
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

Video de como funciona
grabe pantalla compu



links vistos en clase:

<https://docs.arduino.cc/language-reference/en/variables/data-types/stringObject/>

<https://docs.arduino.cc/language-reference/en/variables/data-types/string/>





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

Libro: A New Program for Graphic Design

Autor: David Reinfurt

El libro está dividido en 3 grandes capítulos.

I. T--Y-P-O-G-R-A-P-H-Y

II. G-E-S-T-A-L-T

III. I-N-T-E-R-F-A-C-E

El autor plantea las bases de lo que significa enseñar diseño gráfico hoy. Introduce la idea de que el diseño no se trata de "estilo" o decoración, sino de sistemas, reglas y tecnología aplicadas a la comunicación.

