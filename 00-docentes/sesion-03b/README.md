# sesion-03b

## apuntes sesión

### apuntes SebastianSaez1003

empezamos hablando de licencias.

existe un carácter especial que se llama fin de string.

los paradigmas computacionales de ahora no son los mismos que hace 50 años.

se recomienda escribir en un lenguaje agnóstico respecto a las funciones al momento de escribir strings.

las clases son un estilo de vida.

cuando algo tenga mayúscula es una clase, para ver y pensar, o es cuático.

los caracteres como constructo de datos al referirse a un carácter se ponen comillas simples, si es que es una secuencia de caracteres se ponen entre doble comillas.

``` c++

// es legal escribir un string de esta manera
String thisString = “sopaipilla” ;

```

los strings son difíciles y van con S mayúscula.

todo esto en Arduino, que vamos a dejar post receso académico.

se define un arreglo de caracteres de la siguiente manera:
dice char

``` c++
// es legal escribir un string de esta manera también
char nombreArreglo[10] = “sopaipilla” ;

```

[ ] implican arreglos.

qué es lo que va dentro de los corchetes, que tan grande es el arreglo, la cantidad de elementos.

esos corchetes van pegados al nombre del arreglo, después de esto va el valor de la variable.

se pueden hacer arreglos de arreglos.

en la computación no tenemos límites de qué tanto podemos hacer.

los sueños de Aarón no caben en Excel.

el * es una profundidad de programación muy dura, muy difícil, pero esto nos permite hacer un arreglo de arreglos y dejar de preocuparnos de cuánto mide.

``` c++
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

void setup() {
  Serial.begin(9600);
}

// se escribirá la primera “línea” en el array de arrays de misVersos
void loop() {
  Serial.println(misVersos[0]);
}

```

la gran lección de hoy es que la s es distinta a la S.

los caracteres tienden a ser algo llamado ASCII.

el ASCII original es poco inclusivo, ya que solo le pusieron cosas que se ocupaban en el lenguaje inglés, así que cosas tan importantes como las letras tildes no estaban incluidas.

los arreglos se pueden recorrer de maneras super estratégicas, 

un for es para recorrer, adentro tiene 3 mini líneas de código, siendo el inicio de los tiempos, oye cuando paro y que hago después de cada iteración.

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

