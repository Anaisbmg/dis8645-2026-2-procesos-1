# sesion-01b

## apuntes sesión

## clase 140806

### clase

- Aarón

Funciones: secuencia de instrucciones para que ocurran cosas, una rutina, coreografía 
Void: un tipo

{ : desde acá

Setup es una función ("¿Qué necesito preparar antes de empezar?")

Setup es hacer una sola vez y loop es repetir

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

### Encargo 1
Con Santi nos juntamos en la universidad a realizar la tarea la cual ambos comenzamos de 0 porque no entendíamos del todo lo que estábamos haciendo, pero para eso somos grupo, para aprender. 

Primero cada uno por su parte investigo un poco para no partir de 0. 

Arduino se refiere a muchas cosas, pero podemos decir es una empresa italiana una compañía de desarrollo de software y hardware libres, además una software libre que permite crear dispositivos digitales y prototipos electrónicos interactivos que tiene de apellido IDE que es amigable para principiantes, entre otras cosas 

Con esto podemos utilizar para controlar motores, iluminación, cámaras, robots, etc.

 Matrix= pantalla LED
Tx y RX se encienden cuando enviamos la señal del computador
Hexadecimal: coordenadas o tabla de 0 y 1

Siempre hay que declarar lo que llamamos de la matrix entre comas. 

Primero comenzamos el ejemplo que siempre está en internet del corazón para así comenzar a analizar, sus partes y que no entendíamos, además de comprobar si el ARDUINO estaba funcionando.

```cpp
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

// Matriz 2D predefinida
byte frame[8][12] = {
     { 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
     { 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
     { 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
     { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
     { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
     { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void setup() {
  // Inicializar la matriz LED
  matrix.begin();
}

void loop() {
  // Mostrar el patrón en la matriz LED
  matrix.renderBitmap(frame, 8, 12);
  delay(1000);
}
```
Declaramos primero que hara nuestra pantalla con 0 y 1 que en este caso es un corazón, iniciamos la matriz LED y después en loop hicimos que nunca terminara.

Con este segundo ejemplo, que hay dos formas escribir código para reflejar en la pantalla 

Una es: Hexadecimal, y la otra es indicar literalmente que led de la "pantallita" queremos que se encienda

```cpp
#include "Arduino_LED_Matrix.h" // Incluimos la librería oficial de la matriz

ArduinoLEDMatrix matrix; // Creamos el objeto para controlar la pantalla

// 1. VARIABLES: Creamos los marcos (dibujos de 12x8 LEDs)
// 1 = LED encendido, 0 = LED apagado

// Cara feliz
const uint32_t caritaFeliz[] = {
  0x19785,
  0x80000001,
  0x81800000
};

// Cara seria
const uint32_t caritaSeria[] = {
  0x19819,
  0x0,
  0x1f800000
};

// Variable para controlar la velocidad del cambio
int velocidadAnimacion = 5000; // 1 segundo en milisegundos

// 2. FUNCIÓN SETUP: Inicializamos la matriz
void setup() {
  matrix.begin(); // Enciende el controlador interno de la matriz LED
}

// 3. FUNCIÓN LOOP: Alternamos entre los dos dibujos
void loop() {
  // Mostramos la cara feliz
  matrix.loadFrame(caritaFeliz);
  delay(velocidadAnimacion);

  // Mostramos la cara seria
  matrix.loadFrame(caritaSeria);
  delay(velocidadAnimacion);
}
```

Entonces despues de analizar y comprender, nos decidimos a realizar desde 0 dos codigos los cuales graficamos el glifo B y O


```cpp
#include "Arduino_LED_Matrix.h" // Esto es para especificar que queremos correr el codigo en la pantallita del arduino. 
ArduinoLEDMatrix matrix;

// Creamos nuestra cuadrícula visual de 8 filas por 12 columnas:
// 1 = LED encendido, 0 = LED apagado
uint8_t dibujoLetraB[8][12] = {
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}
};

void setup (){
  matrix.begin();
  
  //Renderizamos el dibujo en la pantalla usando la función de renderizado
  matrix.renderBitmap(dibujoLetraB, 8, 12);
}

void loop (){
  //Mostrar patron de dibujoLetraB
}
```
Lo que nos complicó con este ejercicio fue el tema de declarar ya que cada cosa debe ir entre comas. 

```cpp
#include "Arduino_LED_Matrix.h" // Esto es para especificar que queremos correr el codigo en la pantallita del arduino. 
ArduinoLEDMatrix matrix;

// Creamos nuestra cuadrícula visual de 8 filas por 12 columnas:
// 1 = LED encendido, 0 = LED apagado
uint8_t dibujoLetraB[8][12] = {
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}
};

uint8_t dibujoLetraO[8][12] = {
  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0}
};

void setup (){
  matrix.begin();
  
  //Renderizamos el dibujo en la pantalla usando la función de renderizado
  matrix.renderBitmap(dibujoLetraB, 8, 12);
  matrix.renderBitmap(dibujoLetraO, 8, 12);
}

void loop (){
  //Mostrar patron de dibujoLetraB y luego el de dibujoLetraO
  matrix.renderBitmap(dibujoLetraB, 8, 12);
  delay (1000);

  matrix.renderBitmap(dibujoLetraO, 8, 12);
  delay (1000);
}
```
Pero ahora mi pregunta es como no siempre hay que declarar setup y loop, en los ejercicios que no existe esta acción ¿es necesario declararla? no creo, porque básicamente no está haciendo nada.

https://www.youtube.com/watch?v=MBTPU8PwS3Y

https://www.youtube.com/watch?v=nL34zDTPkcs&t=496s

https://docs.sunfounder.com/projects/elite-explorer-kit/es/latest/new_feature_projects/04_led_matrix.html#mostrar-animaciones

### Encargo 2

Para este encargo, me ayudaron mi hermana Rocio y su pareja Juan Manuel ya que son profesores de programación (tienen una gran portafolio con lo que respecta a esta área) entonces me hicieron una clase de c++ 

Juan Manuel me presento esta pagina donde me enseño lo basico https://www.programiz.com/python-programming/online-compiler/ 

```cpp
#include <iostream>

int main() {
    // Para mostrar informacion en pantalla
    std::cout << "Hola Mundo!\n";
    // Mostrar Hola Mundo
    std::cout << "Kelly!\n";

    // Tipos de datos (int: entero)
    int edad = 25;

    std::cout << edad << "\n";

    edad ++;

    std::cout << edad << "\n";

    // Tipos de datos (bool: true o false)

    bool nombre = false;

    std::cout << nombre;


    return 0;
}

```

Aquí me ensayo la diferencia de la función void y todas las otras, es que básicamente con la primera no recibir nada a cambio al correr el código (esto no lo estaba comprendiendo sola), pero con por ejemplo int si, como por ejemplo lo que es Hola mundo, Kelly 25 y 30\.  

También, en la zona donde recibo números, primero debo colocar la función int para recibir el número 25, pero después no es necesario colocarlo. 

Siempre es necesario colocar los murciélagos {} para desarrollar algo ya que así el computador lee que “esto comienza aquí y termina aquí)

Pueden existir varias funciones dentro de otra función. 

No hay que basarse en los colores que cada página o software tiene porque no todos tienen los mismos, lo cual para mi me complejiza la experiencia de usuario y el lenguaje universal. 

- Funciones: Recibe información (Realiza acciones y necesita cosas para hacerlas)   
- Variables: donde guardas tus datos  
- Void (vacío): No devolverá nada, ocurrirá una sola vez cuando lo coloque  
- /n: salto de línea  
- Main: función  
- Tipo: Lo que va a retornar  
- Parámetros: lo que necesito para hacer algo (después de la función)  
- Else: mo ocurrirá ninguna de las otras 2 cosas así que sucederá esta (es una condición)  
- Printear: mostrar lo que corri en el código  
- If: Colocar siempre algo dentro de ()  
- return: colocar siempre al final para recibir algo  
  
tipo de dato \+ variable: lo que vale esa variable  

Mientras realizamos esto, revisamos el ejemplo que subió Aaron a discord para entender el nivel de complejidad que se buscaba y que datos entregaba y en conjunto realizamos el primer ejemplo de este encargo:

```cpp

void tomarMetro(conPaseEscolar) {
  if (dinero > 250) {
    pagar(tne, pasaje);
  }
  else if (no_hay_guardias) {
    evadir();
  }
  else {
    cargar(1000);
    pagar(tne, pasaje);
  }
  
  bajar_escalera();
  esperar_metro(minutos);
  subir_metro();
}

```

```cpp
bool encuadernar(bool proceso, bool sabado) {

    // 1. Decisión de la herramienta para plegar
    if (plegadera) {
        plegar_hojas();
    }
    else if (mano) {
        plegar_hojas();
    }
    else {
        usar_tarjeta(); // O tarjeta = true;
        plegar_hojas();
    }
    
    // 2. Procesos siguientes
    bordar(hilo, aguja);
    perfilar(cortacarton);

    // 3. Evaluación final que retorna verdadero o falso
    if (proceso || sabado) {
        return true;
    } else {
        return false;
    }
}

```


## lectura

Es un libro bastante complejo ya que además de contener poemas, ocupa un lenguaje el cual no estoy acostumbrado a leer en formato y habla de una retrospectiva humana difícil de entender. Creo que más que leer 1 página por día, es leer la sinopsis y que entiendo al pasar de los días. 
