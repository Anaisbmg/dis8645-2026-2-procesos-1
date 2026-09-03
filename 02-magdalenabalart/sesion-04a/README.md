# sesion-04a

## apuntes sesión


Hoy partimos dividiendo las tareas del equipo. Mientras Yai se encargaba de hacer el diagrama de flujo, la Marce estaba viendo la parte más estructural del proyecto, principalmente la carcasa y cómo se iba a contener todo. La Cata se enfocó más en la parte conceptual, y yo me quedé ordenando y corrigiendo el código.

En mi parte, fui revisando la lógica que ya teníamos y ajustando varias cosas para que la interacción fuera más clara y funcionara mejor con el botón, la pantalla OLED, el LED y el potenciómetro.

Para no enredarnos mientras íbamos programando, separamos el código por partes y lo estructuramos de la siguiente forma:
```
Bibliotecas
Declaración de la pantalla OLED
Componentes
Datos visuales y textos
Variables de control
Declaración de funciones
setup()
loop()
Funciones
```
Esto nos ayudó a entender más rápido dónde estaba cada cosa y hacer cambios sin terminar mezclando partes del código.


Mientras estaba conectando la pantalla me surgió una duda que igual quise dejar anotada para entender mejor qué estaba pasando en el código: ¿por qué no se declaran directamente los pines de la pantalla?

La pantalla se comunica con Arduino por I2C, usando los pines SDA y SCL. En este caso no es necesario poner en el código A4 y A5, porque la librería Wire y la placa seleccionada en Arduino ya saben qué pines corresponden a esa comunicación. Por eso cuando aparece:

```cpp
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
```
ese &Wire le está indicando que la pantalla se va a comunicar por I2C.

En el Arduino UNO R4 WiFi la conexión queda:
```
SDA de la pantalla → SDA / A4
SCL de la pantalla → SCL / A5
VCC → alimentación
GND → GND
```
## Primer paso: probar cada componente por separado

El primer paso fue hacer funcionar cada componente de forma individual antes de empezar a unir todo el código. Seba nos recomendó probar primero que la pantalla, el botón, el LED y el potenciómetro funcionaran por sí solos, para así saber que si después algo fallaba al juntar todo, el problema probablemente estaría en el código y no en las conexiones.

Por eso, la primera parte del código fue principalmente declarar las bibliotecas, la pantalla y los componentes que íbamos a usar:
```cpp
// Bibliotecas que vamos a usar
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Pantalla OLED: aquí declaramos la pantalla y sus características
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

// Tipo de objeto
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Componentes, importante revisar que los pines estén correctos
const int potenciometro = A0;
const int buttonPin = 12; // pushbutton pin
const int ledPin = 13;    // LED pin
```
Otra duda que me surgió aquí fue por qué los #define no llevan ; al final.

La razón es que #define no funciona como una instrucción normal de C++, sino que es una directiva del preprocesador. Básicamente le dice al programa algo como:

Cada vez que encuentres SCREEN_WIDTH, reemplázalo por 128.

Por eso escribimos:
```cpp
#define SCREEN_WIDTH 128
```
y no:
```cpp
#define SCREEN_WIDTH 128;
```
Después de probar los componentes por separado, todos funcionaban bien, así que esa primera parte quedó checkkkkk y logramos empezar a juntar todo en un solo código.


## Segundo paso: declarar texto y animación

### Animación

La siguiente parte del código corresponde a la animación de la pantalla. Este código ya lo tenía listo la Cata, así que simplemente lo sumamos al proyecto. No lo voy a dejar completo acá porque es larguísimo, ya que cada frame está convertido en muchos valores.

Después Aarón nos enseñó una forma de tener ese código separado para que el archivo principal no quedara tan gigante. Creamos un nuevo tab en Arduino y lo llamamos:
```cpp
cuadros.h
```
Ahí dejamos todo el código de los frames de la animación.

Entonces, en el código principal ya no necesitamos pegar toda esa información, sino que solamente hacemos el llamado con:
```cpp
#include "cuadros.h"
```
Así el programa igual puede usar los frames, pero el código principal queda mucho más limpio y ordenado.


### 3er paso: declarar el poema y los textos generales

Después declaramos todos los textos que íbamos a usar en el proyecto, siguiendo la forma que nos enseñó Aarón. La idea era dejar desde el principio definidos el poema, el título, la autora y los mensajes que iban a aparecer en la pantalla.

Primero teníamos los versos declarados de una forma más simple:

```cpp
const char* versos[] = { 
  "No tienes", 
  "que ser buena",
  "No tienes", 
  "que recorrer el desierto", 
  "de rodillas", 
  "arrepintiendote" 
};
```

Pero al probarlo nos dimos cuenta de que varias partes no iban a entrar bien en la pantalla OLED, que es bastante pequeña. Por eso corregimos esta parte y empezamos a dividir los versos según cómo realmente se iban a mostrar en pantalla.

Quedó así:

```cpp
// TEXTOS DEL PROYECTO

const char* partesVersos[] = {

  // Verso 1
  "No tienes\nque ser buena.",

  // Verso 2 - parte 1
  "No tienes que\nrecorrer el\ndesierto de",

  // Verso 2 - parte 2
  "rodillas,\narrepintiendote.",

  // Verso 3 - parte 1
  "Solo deja que\nel suave animal",

  // Verso 3 - parte 2
  "de tu cuerpo\name lo que ama.",

  // Verso 4
  "Hablame del dolor,\ndel tuyo,\nyo te hablare del mio.",

  // Verso 5
  "Mientras tanto,\nel mundo sigue."
};

const char autora[] = "Mary Oliver";
const char titulo[] = "Gansos salvajes";
const char instruccionPot[] = "Gira potenciometro";

const char* mensajeBoton[] = {
  "Presiona boton",
  "para leer"
};
```

Acá también usamos `\n`, que sirve para hacer un **salto de línea** dentro del mismo texto. Esto nos permitió decidir exactamente dónde cortar cada frase para que se viera mejor en la pantalla.

También separamos algunos versos en dos partes, porque completos no alcanzaban a entrar. Después estas partes se muestran por separado con el botón.

### 4to paso: variables de control

Después agregamos las **variables de control**, que sirven para que el programa vaya guardando información mientras funciona.

Con estas variables podemos saber en qué etapa estamos, qué parte del poema toca mostrar, cuál es el estado del botón, qué valor está dando el potenciómetro y cuántas letras de la autora se tienen que mostrar.

```cpp
// 4. VARIABLES DE CONTROL

int etapa = 0;
int buttonState = 0;
int lastButtonState = 0;
int parteActual = 0;

int valorPot = 0;
int letrasMostrar = 0;

unsigned long tiempoUltimoClick = 0;
const unsigned long intervaloDobleClick = 400;
```

`etapa` nos sirve para saber en qué parte del recorrido estamos.

```cpp
int etapa = 0;
```

`buttonState` guarda cómo está el botón en ese momento y `lastButtonState` cómo estaba antes. Después usamos los dos paraentendercuándo realmente se presionó.

```cpp
int buttonState = 0;
int lastButtonState = 0;
```

`parteActual` guarda qué parte del poema estamos mostrando. Como algunos versos los tuvimos que dividir en dos pantallas, era más fácil trabajar con partes y no solamente con versos.

```cpp
int parteActual = 0;
```

`valorPot` guarda el valor que entrega el potenciómetro y `letrasMostrar` nos sirve para saber cuántas letras de `Mary Oliver` tienen que aparecer.

```cpp
int valorPot = 0;
int letrasMostrar = 0;
```

Y estas dos las usamos para el doble clic del final:

```cpp
unsigned long tiempoUltimoClick = 0;
const unsigned long intervaloDobleClick = 400;
```

`tiempoUltimoClick` guarda cuándo fue el último clic y `intervaloDobleClick` deja un máximo de 400 milisegundos entre un clic y otro para que cuente como doble clic.


Acá me surgió una duda porque no entendía por qué varias variables parten en `0` ni cómo sabe después el programa cuándo tienen que cambiar.

asi que chatgpt me explicó que el `0` es simplemente el valor inicial desde donde parte cada variable.

Por ejemplo:

```cpp
int etapa = 0;
```

significa que cuando empieza el programa estamos en la etapa 0. Después, en otras partes del código, ese valor se va cambiando:

```cpp
etapa = 1;
```

```cpp
etapa = 2;
```

Lo mismo pasa con:

```cpp
int parteActual = 0;
```

Parte en 0 porque corresponde a la primera parte del poema, y después cada vez que apretamos el botón usamos:

```cpp
parteActual++;
```

Ese `++` significa sumarle 1, entonces va pasando de 0 a 1, después a 2, 3, etc.

### 5to paso: declaración de funciones

Después dejamos declaradas todas las funciones que íbamos a usar más adelante en el código.

```cpp
// 5. DECLARACION DE FUNCIONES

void mostrarAnimacion();
void mostrarMensajeBoton();
void mostrarTitulo();
void mostrarVerso();
void mostrarAutora();
void revisarBoton();
void revisarDobleClick();
void reiniciarProyecto();
```

acá todavía no estamos diciendo **qué hace cada función**, solo le estamos avisando al programa que esas funciones existen y que las vamos a definir más abajo.

Por ejemplo:

```cpp
void mostrarVerso();
```

solo declara que existe una función que se llama `mostrarVerso`.

Más abajo recién aparece la función completa:

```cpp
void mostrarVerso() {
  // acá va todo lo que tiene que hacer
}
```

### 6to paso: armar el `setup()`

El `setup()` sirve para preparar todo cuando Arduino se enciende. Esta parte se ejecuta **una sola vez**, así que acá dejamos listos los componentes antes de que empiece a correr el resto del programa.

```cpp
// 6. SETUP

void setup() {

  // Le decimos a Arduino cómo vamos a usar cada pin:
  // el botón va a entregar información, por eso es INPUT
  // el LED va a recibir una orden para prenderse o apagarse, por eso es OUTPUT
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Dejamos el LED apagado al comenzar el proyecto
  // LOW significa que no estamos enviando señal al LED
  digitalWrite(ledPin, LOW);

  // Iniciamos la pantalla OLED usando la dirección 0x3C
  // Si por alguna razón la pantalla no logra iniciar,
  // el programa se queda detenido dentro del for
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;);
  }

  // Limpiamos cualquier cosa que pudiera haber quedado en la memoria de la pantalla
  display.clearDisplay();

  // Enviamos esa pantalla vacía a la OLED
  // porque clearDisplay() limpia la memoria, pero display()
  // es lo que hace que el cambio se vea físicamente
  display.display();

  // Dejamos el proyecto partiendo desde la etapa 0
  // después el loop() va a revisar este valor para saber qué mostrar primero
  etapa = 0;
}
```

Acá también entendí mejor la diferencia entre `INPUT` y `OUTPUT`.

Por ejemplo:

```cpp
pinMode(buttonPin, INPUT);
```

significa que Arduino va a **leer información** desde ese pin, en este caso si el botón está presionado o no.

En cambio:

```cpp
pinMode(ledPin, OUTPUT);
```

significa que Arduino va a **mandar información** hacia ese pin, por ejemplo:

```cpp
digitalWrite(ledPin, HIGH);
```

para prender el LED, o:

```cpp
digitalWrite(ledPin, LOW);
```

para apagarlo.

También me sirvió entender que:

```cpp
display.clearDisplay();
```

no actualiza inmediatamente la pantalla física. Primero limpia lo que está guardado en la memoria de la OLED y después:

```cpp
display.display();
```

hace que ese cambio realmente aparezca en la pantalla.

Entonces el `setup()` básicamente deja todo preparado para que después el `loop()` pueda empezar a ejecutar el recorrido del proyecto.



### 7mo paso: armar el `loop()`

Después armamos el `loop()`, que a diferencia del `setup()` no se ejecuta una sola vez, sino que **se repite todo el tiempo mientras Arduino está encendido**.

Acá usamos la variable `etapa` para que el programa sepa qué parte del proyecto tiene que estar ejecutando en cada momento.

```cpp
// 7. LOOP

void loop() {

  // ETAPA 0: parte inicial del proyecto
  // cuando etapa vale 0 se reproduce la animacion
  // y despues aparece el mensaje para presionar el boton
  if (etapa == 0) {

    mostrarAnimacion();
    mostrarMensajeBoton();

    // una vez que esto ya paso, cambiamos etapa a 1
    // para que la animacion no vuelva a repetirse todo el tiempo
    etapa = 1;
  }


  // ETAPAS 1, 2 y 3:
  // en estas etapas el programa queda pendiente del boton
  // revisarBoton() se encarga de ver si fue presionado
  // y segun la etapa muestra titulo, versos o avanza el poema
  else if (etapa >= 1 && etapa <= 3) {

    revisarBoton();
  }


  // ETAPA 4:
  // cuando ya terminamos de leer el poema
  // el programa pasa a trabajar con el potenciometro
  // y tambien revisa si hacemos doble clic para reiniciar
  else if (etapa == 4) {

    mostrarAutora();
    revisarDobleClick();
  }
}
```

Lo que me ayudó a entender esta parte fue pensar que el `loop()` está preguntando constantemente:

```text
¿en qué etapa estoy?
```

y dependiendo del valor de `etapa`, hace una cosa distinta


### 8vo paso: funciones

Después armamos las funciones. Para no mezclar todo de una, las fuimos haciendo más o menos en el mismo orden en que pasan las cosas en el proyecto. Primero las más simples, como mostrar la animación o el título, y después las que tienen más lógica, como revisar el botón.

La idea de trabajar con funciones fue poder separar cada acción del proyecto. Así, en vez de tener todo escrito dentro del `loop()`, podemos simplemente llamar cosas como:

```cpp
mostrarTitulo();
```

o:

```cpp
mostrarVerso();
```

y cada función se encarga de hacer su parte.


#### `mostrarAnimacion()`

Esta función se encarga de recorrer los frames que guardamos en `cuadros.h` y mostrarlos uno después del otro para generar la animación.

```cpp
void mostrarAnimacion() {

  // i parte en 0 y va aumentando de uno en uno.
  // El for se repite mientras todavía queden frames por mostrar.
  for (int i = 0; i < epd_bitmap_allArray_LEN; i++) {

    // Limpiar lo que estaba guardado en la pantalla antes de dibujar el nuevo frame.
    display.clearDisplay();

    // Dibujar el frame que corresponde según el valor actual de i.
    // Parte en la posición 0,0 y ocupa los 128 x 32 px de la pantalla.
    display.drawBitmap(
      0,
      0,
      epd_bitmap_allArray[i],
      SCREEN_WIDTH,
      SCREEN_HEIGHT,
      SSD1306_WHITE
    );

    // Mandar el dibujo a la pantalla física.
    display.display();

    // Dejar el frame visible un momento antes de pasar al siguiente.
    // 150 son milisegundos.
    delay(150);
  }
}
```

Acá usamos un `for` porque teníamos varios frames y queríamos repetir la misma acción con cada uno.

```cpp
for (int i = 0; i < epd_bitmap_allArray_LEN; i++)
```

`i` parte en `0`, después pasa a `1`, `2`, `3`, etc. Así va recorriendo uno por uno los frames que están dentro de:

```cpp
epd_bitmap_allArray[i]
```


#### `mostrarMensajeBoton()`

Después hicimos la función que muestra el mensaje para avisar que hay que apretar el botón.

```cpp
void mostrarMensajeBoton() {

  // Limpiar la pantalla anterior.
  display.clearDisplay();

  // Definir el tamaño del texto.
  display.setTextSize(1);

  // El texto se dibuja usando los píxeles blancos de la OLED.
  display.setTextColor(SSD1306_WHITE);

  // Ubicar la primera línea y mostrar el primer texto del arreglo.
  display.setCursor(10, 8);
  display.println(mensajeBoton[0]);

  // Ubicar la segunda línea y mostrar el segundo texto.
  display.setCursor(25, 18);
  display.println(mensajeBoton[1]);

  // Actualizar la pantalla para que finalmente aparezca el mensaje.
  display.display();
}
```

Como antes habíamos declarado:

```cpp
const char* mensajeBoton[] = {
  "Presiona boton",
  "para leer"
};
```

podemos usar:

```cpp
mensajeBoton[0]
```

para llamar a `"Presiona boton"` y:

```cpp
mensajeBoton[1]
```

para llamar a `"para leer"`.


#### `mostrarTitulo()`

Esta es más simple porque solamente tenemos que limpiar la pantalla, elegir dónde va el texto y mostrar el título.

```cpp
void mostrarTitulo() {

  // Limpiar lo anterior.
  display.clearDisplay();

  // Preparar cómo se va a mostrar el texto.
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // Ubicar el título dentro de la pantalla.
  display.setCursor(20, 10);

  // Mostrar el texto que guardamos antes en la variable titulo.
  display.println(titulo);

  // Actualizar la OLED.
  display.display();
}
```

Arriba ya habíamos declarado:

```cpp
const char titulo[] = "Gansos salvajes";
```

por eso acá basta con poner:

```cpp
display.println(titulo);
```


#### `mostrarVerso()`

Esta función fue un poco más larga porque no solo tiene que mostrar el texto, sino que también tiene que controlar el LED según el verso en que estamos.

```cpp
void mostrarVerso() {

  // Primero revisamos qué parte del poema estamos mostrando
  // para saber si el LED tiene que estar prendido o apagado.

  // Parte 0 corresponde al verso 1.
  if (parteActual == 0) {
    digitalWrite(ledPin, HIGH);
  }

  // Las partes 1 y 2 corresponden al verso 2.
  // Aunque esté dividido en dos pantallas, sigue siendo el mismo verso,
  // así que el LED se mantiene apagado en ambas.
  else if (parteActual == 1 || parteActual == 2) {
    digitalWrite(ledPin, LOW);
  }

  // Las partes 3 y 4 corresponden al verso 3.
  // En las dos partes el LED se mantiene prendido.
  else if (parteActual == 3 || parteActual == 4) {
    digitalWrite(ledPin, HIGH);
  }

  // Parte 5 corresponde al verso 4.
  else if (parteActual == 5) {
    digitalWrite(ledPin, LOW);
  }

  // Parte 6 corresponde al verso 5.
  else if (parteActual == 6) {
    digitalWrite(ledPin, HIGH);
  }


  // Una vez definido el LED, preparamos la pantalla.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);


  // Algunas partes ocupan 3 líneas,
  // así que las hacemos partir más arriba, desde y = 0.
  if (parteActual == 1 || parteActual == 5) {

    display.setCursor(0, 0);
  }

  // Las partes más cortas pueden partir un poco más abajo.
  else {

    display.setCursor(0, 6);
  }


  // Mostrar el texto correspondiente a la parte en la que estamos.
  // Si parteActual vale 0 muestra partesVersos[0],
  // si vale 1 muestra partesVersos[1], etc.
  display.println(partesVersos[parteActual]);

  // Actualizar la pantalla.
  display.display();
}
```

Acá entendí mejor por qué habíamos creado `parteActual`.

Por ejemplo:

```cpp
display.println(partesVersos[parteActual]);
```

si:

```cpp
parteActual = 0;
```

muestra:

```cpp
partesVersos[0]
```

y si después `parteActual` cambia a `1`, muestra:

```cpp
partesVersos[1]
```

Entonces no tenemos que escribir una función diferente para cada parte del poema.


#### `mostrarAutora()`

Esta función ocupa el potenciómetro para ir mostrando el nombre de Mary Oliver de a poco.

```cpp
void mostrarAutora() {

  // Leer el valor que está entregando el potenciómetro.
  // analogRead entrega un número según la posición en que esté girado.
  valorPot = analogRead(potenciometro);


  // Convertir el valor del potenciómetro
  // en una cantidad de letras que podamos mostrar.
  letrasMostrar = map(
    valorPot,
    0,
    1023,
    0,
    strlen(autora)
  );


  // Preparar la pantalla.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);


  // El nombre va arriba.
  display.setCursor(0, 0);

  // Mostrar solamente la cantidad de letras
  // que corresponde según la posición del potenciómetro.
  for (int i = 0; i < letrasMostrar; i++) {

    display.print(autora[i]);
  }


  // Mostrar abajo la instrucción para usar el potenciómetro.
  display.setCursor(0, 22);
  display.println(instruccionPot);


  // Actualizar la pantalla.
  display.display();
}
```

Acá usamos:

```cpp
map()
```

para transformar el valor del potenciómetro a algo que nos sirviera para el texto.

También usamos:

```cpp
strlen(autora)
```

para saber cuántos caracteres tiene `"Mary Oliver"`.

Después este `for`:

```cpp
for (int i = 0; i < letrasMostrar; i++)
```

va recorriendo las letras de la autora solamente hasta la cantidad que corresponde.

Por eso, dependiendo de cómo está girado el potenciómetro, se puede ver:

```text
M
Ma
Mar
Mary
Mary O
...
Mary Oliver
```


#### `revisarBoton()`

Esta fue una de las partes más importantes porque acá definimos qué tiene que pasar cada vez que se aprieta el botón.

```cpp
void revisarBoton() {

  // Leer cómo está el botón en este momento
  // y guardar ese valor en buttonState.
  buttonState = digitalRead(buttonPin);


  // Solo queremos contar una nueva presión.
  // Por eso revisamos que ahora esté HIGH
  // y que antes haya estado LOW.
  if (buttonState == HIGH && lastButtonState == LOW) {

    // Pequeño tiempo para evitar que el rebote físico
    // del botón cuente como varias presiones.
    delay(30);


    // Si estamos en etapa 1,
    // la presión del botón lleva del mensaje inicial al título.
    if (etapa == 1) {

      mostrarTitulo();

      // Después de mostrar el título,
      // guardamos que ahora estamos en la etapa 2.
      etapa = 2;
    }


    // Si estamos en etapa 2,
    // la siguiente presión empieza el poema.
    else if (etapa == 2) {

      // Partimos desde la primera parte del poema.
      parteActual = 0;

      mostrarVerso();

      // Después quedamos en etapa 3,
      // que corresponde a ir avanzando por el poema.
      etapa = 3;
    }


    // Si ya estamos leyendo el poema,
    // cada nueva presión avanza a la siguiente parte.
    else if (etapa == 3) {

      // Tenemos partes desde 0 hasta 6.
      // Mientras parteActual sea menor que 6,
      // todavía queda texto por mostrar.
      if (parteActual < 6) {

        // ++ significa sumar 1.
        parteActual++;

        mostrarVerso();
      }


      // Si ya llegamos a la parte 6,
      // significa que terminamos el poema.
      else {

        // Apagamos el LED.
        digitalWrite(ledPin, LOW);

        // Y pasamos a la etapa final del potenciómetro.
        etapa = 4;
      }
    }
  }


  // Antes de terminar la función guardamos cómo quedó el botón.
  // En la próxima vuelta esto nos sirve para compararlo
  // con el nuevo estado.
  lastButtonState = buttonState;
}
```

Acá fue donde usamos juntas varias de las variables de control que habíamos declarado antes.

Por ejemplo:

```cpp
buttonState == HIGH && lastButtonState == LOW
```

nos sirve para detectar el momento en que el botón pasa de **no estar presionado a estar presionado**.

Y:

```cpp
parteActual++;
```

hace que cada presión avance una pantalla del poema.

En esta primera versión usamos:

```cpp
delay(30);
```

como antirrebote del botón. Después, al probarlo físicamente, vimos que el botón todavía podía ponerse medio sensible y saltarse alguna parte, así que esta lógica la seguimos corrigiendo después.


#### `revisarDobleClick()`

Esta función se usa solamente al final del recorrido y revisa si se hicieron dos clics suficientemente rápidos como para contar como doble clic.

```cpp
void revisarDobleClick() {

  // Leer el botón.
  buttonState = digitalRead(buttonPin);


  // Detectar una nueva presión.
  if (buttonState == HIGH && lastButtonState == LOW) {

    // Guardar el tiempo exacto en que ocurrió esta presión.
    unsigned long tiempoActual = millis();


    // Revisar si ya había un clic anterior
    // y si entre ambos pasaron 400 ms o menos.
    if (
      tiempoUltimoClick > 0 &&
      tiempoActual - tiempoUltimoClick <= intervaloDobleClick
    ) {

      // Si se cumple, contamos esto como doble clic
      // y reiniciamos el proyecto.
      reiniciarProyecto();

      tiempoUltimoClick = 0;
    }


    // Si no había un clic anterior,
    // guardamos este como el primer clic.
    else {

      tiempoUltimoClick = tiempoActual;
    }
  }


  // Guardar el estado del botón para poder compararlo después.
  lastButtonState = buttonState;
}
```

Acá usamos:

```cpp
millis()
```

que nos permite saber cuánto tiempo lleva Arduino funcionando en milisegundos.

Entonces no necesitamos detener el programa para esperar un segundo clic. Simplemente guardamos cuándo ocurrió el primero y después comparamos cuánto tiempo pasó.


#### `reiniciarProyecto()`

Finalmente hicimos una función para volver todas las variables importantes a su estado inicial.

```cpp
void reiniciarProyecto() {

  // Volver a la etapa inicial.
  // Esto hace que el loop vuelva a ejecutar la animación.
  etapa = 0;


  // Volver a la primera parte del poema.
  parteActual = 0;


  // Asegurarnos de que el LED quede apagado.
  digitalWrite(ledPin, LOW);


  // Borrar los valores que habíamos usado
  // para el potenciómetro y el nombre de la autora.
  valorPot = 0;
  letrasMostrar = 0;


  // Borrar la información del doble clic anterior.
  tiempoUltimoClick = 0;


  // Volver a leer el botón y guardar su estado actual
  // para evitar que el clic usado para reiniciar
  // se tome inmediatamente como otra presión.
  buttonState = digitalRead(buttonPin);
  lastButtonState = buttonState;


  // Limpiar lo que estaba mostrando la pantalla.
  display.clearDisplay();
  display.display();
}
```

Entonces `reiniciarProyecto()` no reinicia físicamente el Arduino, sino que **vuelve nuestras variables al estado inicial**, haciendo que el recorrido pueda comenzar otra vez desde `etapa = 0`.


### Proceso de construcción del código

Para ir armando el código tratamos de hacerlo por partes y no escribir todo de una, porque ahí era muy fácil perdernos. Primero le pedimos a ChatGPT cuál podía ser una estructura ordenada para un código de este tipo y, a partir de ese esquema, fuimos avanzando paso a paso.

Las primeras partes fueron bastante simples de armar: los componentes, los textos, la animación, las variables de control y la declaración de funciones. En general ahí no necesitamos tanta ayuda, excepto con las variables de control, porque nos confundía un poco que cosas como `etapa` o `parteActual` comenzaran en `0`. Ahí tuvimos que preguntar cómo funcionaba y entendimos que ese `0` es simplemente el estado inicial y que después el mismo código va cambiando esos valores.

El `setup()` sí se lo pedimos inicialmente a ChatGPT porque no teníamos tan clara su estructura. Después de verlo armado y revisarlo parte por parte nos dimos cuenta de que en realidad no era tan complejo: principalmente prepara los pines, inicia la pantalla, apaga el LED y deja el proyecto en su estado inicial.

Con el `loop()` necesitamos bastante más ayuda porque ya empezaban a aparecer condiciones que no sabíamos construir solas, por ejemplo:

```cpp
else if (etapa >= 1 && etapa <= 3)
```

Ahí la idea era que el programa pudiera saber en qué momento del recorrido estaba y hacer algo distinto según el valor de `etapa`. ChatGPT nos ayudó a armar esa lógica y después la fuimos leyendo y entendiendo para ver qué estaba haciendo cada parte.

Con las funciones pasó algo parecido. Nosotras ya teníamos claro **qué queríamos que hiciera cada una**, por ejemplo mostrar la animación, mostrar un verso, prender o apagar el LED o revelar la autora con el potenciómetro, pero nos faltaba saber cómo traducir algunas de esas decisiones al código.

Por ejemplo, cosas como:

```cpp
display.setCursor(10, 8);
```

nos las ayudó a completar ChatGPT porque todavía no teníamos tan clara la lógica de las coordenadas `x` e `y` dentro de la pantalla. Después entendimos que el primer número corresponde a la posición horizontal y el segundo a la vertical.

También fuimos corrigiendo varias cosas a medida que probábamos físicamente el proyecto. En una primera versión habíamos incluido al comienzo un texto de licencia antes de la animación. Finalmente decidimos sacarlo porque hacía más largo el inicio y no era necesario para la interacción que queríamos.

Otro cambio importante fue la forma de mostrar los versos. Al principio algunos versos que no cabían completos estaban divididos en dos pantallas y el código hacía que la segunda parte apareciera automáticamente después de unos segundos usando `delay()`.

Al probarlo nos dimos cuenta de que eso no calzaba mucho con la lógica del botón, porque la idea era que fuera la persona la que decidiera cuándo seguir leyendo. Entonces cambiamos la lógica a:

**1 presión del botón = 1 nueva pantalla**

Si un verso necesita dividirse en dos partes porque no cabe, cada parte también aparece con una nueva presión del botón. Así ya no hay que esperar a que el programa cambie el texto solo.

Después apareció otro problema al probar el botón: a veces estaba demasiado sensible y una sola presión hacía que pasara rápidamente por dos partes del poema.

Ahí entendimos que esto podía pasar por el **rebote mecánico del botón**. Aunque uno lo presione una sola vez, físicamente puede generar cambios muy rápidos entre `HIGH` y `LOW`, y Arduino puede llegar a interpretarlos como más de una presión.

Primero habíamos usado:

```cpp
delay(30);
```

como un antirrebote simple. Después fuimos probando otras formas para evitar que se saltara versos, pero sin hacer que el botón se sintiera lento. Finalmente la idea fue controlar un pequeño intervalo después de cada presión para ignorar esos rebotes, pero hacer que el cambio de pantalla ocurriera inmediatamente.

En general, el proceso fue bastante de **armar → probar → ver qué no funcionaba como esperábamos → corregir**. ChatGPT nos sirvió principalmente para traducir a código algunas decisiones que ya teníamos claras, mientras nosotras fuimos definiendo el recorrido, la interacción y cómo queríamos que respondiera cada componente.













## encargos


















## lectura

En esta primera mitad del capítulo 01, Coleman parte contando algo bastante personal: weev se comunica directamente con ella. Ella ya sabía quién era y conocía su reputación como troll, por ende, al principio le daba bastante susto interactuar con él, pero, al mismo tiempo, sentía mucha curiosidad porque su investigación es justamente sobre la profundización de participantes de la comunidad de anonymous. Conversar con alguien como weev era una oportunidad de entender desde dentro cómo funcionaba esta cultura. 

Me pareció interesante porque desde el comienzo queda instalada una contradicción que después se repite harto en el capítulo: **algo puede generar miedo o incomodidad, pero al mismo tiempo resultar atractivo o interesante por lo que permite descubrir.**

A medida que empiezan a conversar, Coleman se da cuenta de que con weev nunca es tan fácil saber cuándo está hablando en serio y cuándo la está intentando engañar. Él cambia de tema, exagera historias y mezcla constantemente cosas verdaderas con bromas o cosas que parecen inventadas. En un momento, por ejemplo, le habla de Slab City, un lugar que Coleman ni siquiera conocía, y mientras conversaban ella empieza a buscarlo en Internet para comprobar si realmente existía. Ahí dice algo que me parece súper importante: **“I soon came to learn that even if weev often lies, he also often speaks the truth”**, es decir, que rápidamente aprendió que aunque weev muchas veces miente, también muchas veces dice la verdad.

Coleman incluso lo llama una especie de etnógrafo natural de las formas más extremas y raras del comportamiento humano, porque llevaba años metido en comunidades de hacking y trolling y había acumulado una cantidad enorme de historias, conocimientos y experiencias. Esto hace que para ella sea un personaje especialmente interesante de estudiar: no puede confiar completamente en lo que dice, pero tampoco puede asumir que está mintiendo, porque muchas de las cosas más absurdas que cuenta terminan siendo reales. Entonces su misma forma de relacionarse con Coleman ya funciona un poco como trolling y la obliga, como investigadora, a estar constantemente comprobando qué es verdad y qué no.

Después Coleman entra en el caso de AT&T y Goatse Security, donde weev y su grupo descubren que datos de usuarios de iPad estaban expuestos por una falla de seguridad. Lo interesante es que Coleman no presenta esto como “hackear por molestar”, porque efectivamente estaban mostrando una vulnerabilidad real de una empresa. Pero tampoco lo transforma en una acción completamente desinteresada ya que había una intención de denunciar el problema, llamar la atención y, al mismo tiempo, hacerlo por los lulz.

Acá aparece algo que me parece importante: la idea de buscar vulnerabilidades no se limita necesariamente a lo informático. En AT&T la vulnerabilidad estaba en un sistema tecnológico, pero Coleman muestra que esta misma lógica puede trasladarse a otros espacios. Un troll puede encontrar una falla en cómo funciona un medio de comunicación, una institución o incluso una interacción en el mundo físico/social, y después aprovecharla para generar una reacción. Es como buscar constantemente dónde un sistema es más fácil de intervenir o desestabilizar.

Coleman pasa de conocer a weev como personaje a entender una lógica más general del trolling: buscar vulnerabilidades, intervenirlas y observar qué reacción producen.
