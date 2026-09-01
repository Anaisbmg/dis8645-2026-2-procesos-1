# sesion-03b

viernes 2026/08/28

## apuntes sesión

- llegue tarde por hora al medico pero por lo que hable con mi grupo (Emilia Contreras y Monserrat Paredes), estuvieron viendo parte del proyecto-1, mas que nada experimentando con Arduino y dandole instrucciones para que el poema que elegimos tenga diferentes manifestaciones en la pantalla

Emi/hazzaily me mando fotos de las cajitas que estaban entregando para guardar los componentes (elegi una celeste)

**subir foto**

- el poema que elegimos entre todas fue el poema 2 **"Queja" (perfeccionismo = control)** de la poeta **Alfonsina Storni**

**Señor, mi queja es ésta,
Tú me comprenderás;
De amor me estoy muriendo,
Pero no puedo amar.
Persigo lo perfecto
En mí y en los demás,
Persigo lo perfecto
Para poder amar.
Me consumo en mi fuego,
¡Señor, piedad, piedad!
De amor me estoy muriendo,
¡Pero no puedo amar.**

como no estuve gran parte en la clase (llegue 12:00 pm) mis compañeras me explicaron lo siguiente 

- **String:** el problema principal con String (con mayúscula) en Arduino es la fragmentación de memoria, es decir, es una herramienta que facilita manejar texto (unir palabras, cambiar letras, etc.), pero tiene un defecto **modifica la memoria constantemente mientras el programa avanza** y en placas con poca memoria como Arduino, esto hace que el programa falle o se reinicie
- **string o char[]:** es una lista de letras guardada en un espacio fijo de la memoria y como no cambia de tamaño, es muy segura y no da problemas (arreglo de caracteres)

**String = difícil**

### apuntes hazzaily

**se puede utilizar el String con un arreglo (array), por ejemplo con "char"**

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


### ejemplos vistos en clase

me dijeron que estos eran unos de los ejemplos que vieron en clases, todos en Arduino (información sacada de sus bitacoras)

- ejemplo 1:

```c++
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

- ejemplo 2:

```c++
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

- ejemplo 3:

```c++
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

**en este ejemplo, me comentaron que trataron de no utilizar String**


### Poema 2 "Queja" (perfeccionismo = control)

codigo de prueba del poema

```c++
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

video de proyección de poema en pantalla: prueba 1

![pantalla funcionando poema](./imagenes/video-pantalla-funcionando-poema.mp4)

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

