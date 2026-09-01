# sesion-04a

martes 2026-09-01

## apuntes sesión

- avanzar en el proyecto-1
- subir a carpeta **código** de proyecto-1 la primera versión del código
- hoy se me quedo la pantallita en la casa :(, entonces con mi grupo avanzamos en la parte de lo queremos desarrollar y todo la parte teórica, perfeccionando funciones, códigos, buscando como realizar animaciones para poner en la pantalla 

### código poema v.0 que solo visualiza el poema en el serial monitor en loop2

primer acercamiento para el proyecto sobre el código del poema elegido en Arduino

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

// char = caracter
// por ende
// esta parte del codigo
// separa el poema en versos
// y al haber definido en clases
// que una linea como un arreglo de caracteres
// por eso se utiliza char

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

  // 9600 baud (simbolos) es un numero moderado
  // y no puede ser cualquiera
  // debe ser el resultado de un 2 elevado a algo
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

- no existe error en este código, al no estar la mayor parte de la clase en la **sesion-03b** estaba un poco perdida con los códigos y el funcionamiento de estos (pensaba que este era el codigo para ser presentado en la pantallita y pues no lol)


### código poema presentado en pantalla

este es el primer intento de presentación visual del poema en pantalla

```cpp
// poema "Queja" de Alfonsina Storni
// sketch para mostrar el poema en pantalla OLED 0,91" I2C (128x32)
// usando Adafruit_GFX + Adafruit_SSD1306


#include <Wire.h>              // maneja la comunicación I2C entre el Arduino y la pantalla
#include <Adafruit_GFX.h>      // librería base de gráficos (dibuja texto, líneas, formas)
#include <Adafruit_SSD1306.h>  // librería específica para el chip controlador SSD1306 de la OLED
#include <string.h>            // nos da funciones para manejar texto: strlen, strcpy, strncpy

// definimos el tamaño de la pantalla en píxeles (ancho x alto)
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// -1 significa que la pantalla comparte el pin de reset con el Arduino
// (no usa un pin de reset propio)
#define OLED_RESET -1

// dirección I2C típica de estos módulos OLED (si no funciona, probar 0x3D)
#define SCREEN_ADDRESS 0x3C

// creamos el objeto "display" que representa nuestra pantalla física,
// indicando ancho, alto, el bus I2C a usar (&Wire) y el pin de reset
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// arreglo con los versos ORIGINALES (con tildes), que se usan
// para imprimir el poema completo y correcto en el Monitor Serie
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

// arreglo con los mismos versos SIN tildes ni signos especiales,
// porque la fuente por defecto de Adafruit_GFX no los dibuja bien
char *versosPantalla[] = {
  "Senor, mi queja es esta,",
  "Tu me comprenderas",
  "De amor me estoy muriendo,",
  "Pero no puedo amar.",
  "Persigo lo perfecto",
  "En mi y en los demas,",
  "Persigo lo perfecto",
  "Para poder amar.",
  "Me consumo en mi fuego,",
  "Senor, piedad, piedad!",
  "De amor me estoy muriendo,",
  "Pero no puedo amar!"
};

// cantidad total de versos (para no tener que contarlos a mano en el for)
const int totalVersos = 12;

// setup() se ejecuta UNA sola vez, al encender o resetear la placa
void setup() {
  Serial.begin(9600); // inicia la comunicación serial a 9600 baudios

  // intentar inicializar la pantalla. SSD1306_SWITCHCAPVCC le dice que
  // genere su propio voltaje interno para el panel OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("Error al iniciar la pantalla OLED")); // si falla, avisa por Serial
    for (;;);   // Bucle infinito vacío: detiene el programa acá si la pantalla no arrancó
  }

  display.clearDisplay();       // borra cualquier contenido inicial de la pantalla
  display.setTextSize(1);       // tamaño de letra: 1 = el más chico (6x8 px por caracter aprox)
  display.setTextColor(SSD1306_WHITE); // Color del texto (en OLED monocromo, "blanco" = encendido)
}

// loop() se ejecuta UNA Y OTRA VEZ, sin parar
void loop() {
  // Recorremos ambos arreglos en paralelo usando el mismo índice i
  for (int i = 0; i < totalVersos; i++) {
    mostrarVerso(versosPantalla[i]); // muestra en la OLED la versión sin tildes
    Serial.println(misVersos[i]);    // imprime por Serial la versión completa con tildes
    delay(2500);                     // espera 2.5 segundos antes del siguiente verso
  }
  // al terminar el for (mostró los 12 versos), loop() arranca de nuevo desde el principio
}

// función que recibe un verso y lo dibuja en pantalla,
// partiéndolo en dos líneas si no entra completo en el ancho disponible
void mostrarVerso(char *verso) {
  char linea1[35] = ""; // String vacío donde armamos la primera línea
  char linea2[35] = ""; // String vacío donde armamos la segunda línea (si hace falta)

  int len = strlen(verso); // cantidad de caracteres del verso
  int maxChars = 21;       // caracteres aprox. que entran en 128px con fuente tamaño 1

  if (len <= maxChars) {
    // si el verso entra en una sola línea, lo copiamos completo a linea1
    strcpy(linea1, verso);
  } else {
    // si es más largo, buscamos dónde cortarlo
    int corte = maxChars;

    // retrocedemos desde el límite hasta encontrar un espacio,
    // para no cortar una palabra por la mitad
    while (corte > 0 && verso[corte] != ' ') corte--;

    // si no hay ningún espacio antes del límite, cortamos igual ahí
    if (corte == 0) corte = maxChars;

    strncpy(linea1, verso, corte); // copia los primeros "corte" caracteres a linea1
    linea1[corte] = '\0';          // cierra el string (fin de cadena en C)

    strcpy(linea2, verso + corte + 1); // copia el resto del verso (después del espacio) a linea2
  }

  display.clearDisplay();      // borra lo que estaba dibujado antes
  display.setCursor(0, 0);     // posiciona el cursor en x=0, y=0 (primera línea, arriba)
  display.println(linea1);     // escribe la primera línea (println además baja el cursor)
  display.setCursor(0, 12);    // mueve el cursor a x=0, y=12 (segunda línea, más abajo)
  display.println(linea2);     // escribe la segunda línea (vacía si no hizo falta cortar)
  display.display();           // envía todo el contenido al panel físico para que se vea
}
```


### código poema con botón presentado en pantalla

mi compañera Monserrat quiso experimentar mas allá y creo este código de presentación del poema en la pantalla y le agrego un botón el cual hace que la dirección del poema cambie de lugar 

```cpp
// poema "Queja" de Alfonsina Storni
// sketch para mostrar el poema en pantalla OLED 0,91" I2C (128x32)
// usando Adafruit_GFX + Adafruit_SSD1306

#include <Wire.h>              // maneja la comunicación I2C entre el Arduino y la pantalla
#include <Adafruit_GFX.h>      // librería base de gráficos (dibuja texto, líneas, formas)
#include <Adafruit_SSD1306.h>  // librería específica para el chip controlador SSD1306 de la OLED
#include <string.h>            // nos da funciones para manejar texto: strlen, strcpy, strncpy

// definimos el tamaño de la pantalla en píxeles (ancho x alto)
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// -1 significa que la pantalla comparte el pin de reset con el Arduino
// (no usa un pin de reset propio)
#define OLED_RESET -1

// dirección I2C típica de estos módulos OLED (si no funciona, probar 0x3D)
#define SCREEN_ADDRESS 0x3C

// creamos el objeto "display" que representa nuestra pantalla física,
// indicando ancho, alto, el bus I2C a usar (&Wire) y el pin de reset
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// arreglo con los versos ORIGINALES (con tildes), que se usan
// para imprimir el poema completo y correcto en el Monitor Serie
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

// arreglo con los mismos versos SIN tildes ni signos especiales,
// porque la fuente por defecto de Adafruit_GFX no los dibuja bien
char *versosPantalla[] = {
  "Senor, mi queja es esta,",
  "Tu me comprenderas",
  "De amor me estoy muriendo,",
  "Pero no puedo amar.",
  "Persigo lo perfecto",
  "En mi y en los demas,",
  "Persigo lo perfecto",
  "Para poder amar.",
  "Me consumo en mi fuego,",
  "Senor, piedad, piedad!",
  "De amor me estoy muriendo,",
  "Pero no puedo amar!"
};

// cantidad total de versos (para no tener que contarlos a mano en el for)
const int totalVersos = 12;

// setup() se ejecuta UNA sola vez, al encender o resetear la placa
void setup() {
  Serial.begin(9600); // inicia la comunicación serial a 9600 baudios

  // intenta inicializar la pantalla. SSD1306_SWITCHCAPVCC le dice que
  // genere su propio voltaje interno para el panel OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("Error al iniciar la pantalla OLED")); // si falla, avisa por Serial
    for (;;);   // bucle infinito vacío: detiene el programa acá si la pantalla no arrancó
  }

  display.clearDisplay();       // borra cualquier contenido inicial de la pantalla
  display.setTextSize(1);       // tamaño de letra: 1 = el más chico (6x8 px por caracter aprox)
  display.setTextColor(SSD1306_WHITE); // color del texto (en OLED monocromo, "blanco" = encendido)
}

// loop() se ejecuta UNA Y OTRA VEZ, sin parar
void loop() {
  // recorremos ambos arreglos en paralelo usando el mismo índice i
  for (int i = 0; i < totalVersos; i++) {
    mostrarVerso(versosPantalla[i]); // muestra en la OLED la versión sin tildes
    Serial.println(misVersos[i]);    // imprime por Serial la versión completa con tildes
    delay(2500);                     // espera 2.5 segundos antes del siguiente verso
  }
  // Al terminar el for (mostró los 12 versos), loop() arranca de nuevo desde el principio
}

// función que recibe un verso y lo dibuja en pantalla,
// partiéndolo en dos líneas si no entra completo en el ancho disponible
void mostrarVerso(char *verso) {
  char linea1[35] = ""; // String vacío donde armamos la primera línea
  char linea2[35] = ""; // String vacío donde armamos la segunda línea (si hace falta)

  int len = strlen(verso); // cantidad de caracteres del verso
  int maxChars = 21;       // caracteres aprox. que entran en 128px con fuente tamaño 1

  if (len <= maxChars) {
    // Si el verso entra en una sola línea, lo copiamos completo a linea1
    strcpy(linea1, verso);
  } else {
    // si es más largo, buscamos dónde cortarlo
    int corte = maxChars;

    // retrocedemos desde el límite hasta encontrar un espacio,
    // para no cortar una palabra por la mitad
    while (corte > 0 && verso[corte] != ' ') corte--;

    // si no hay ningún espacio antes del límite, cortamos igual ahí
    if (corte == 0) corte = maxChars;

    strncpy(linea1, verso, corte); // copia los primeros "corte" caracteres a linea1
    linea1[corte] = '\0';          // cierra el string (fin de cadena en C)

    strcpy(linea2, verso + corte + 1); // copia el resto del verso (después del espacio) a linea2
  }

  display.clearDisplay();      // borra lo que estaba dibujado antes
  display.setCursor(0, 0);     // posiciona el cursor en x=0, y=0 (primera línea, arriba)
  display.println(linea1);     // escribe la primera línea (println además baja el cursor)
  display.setCursor(0, 12);    // mueve el cursor a x=0, y=12 (segunda línea, más abajo)
  display.println(linea2);     // escribe la segunda línea (vacía si no hizo falta cortar)
  display.display();           // envía todo el contenido al panel físico para que se vea
}
```



## encargos

## lectura


nos dejaron elegir un libro para leer durante el semestre en el cual debemos dejar 2 citas por clase y leer mínimo 100 paginas durante el semestre

libro escogido **La Música electroacústica en Chile** de Federico Schumacher

termine el capitulo del martes pasado:

**Prehistoria**
- Asuar encontró motivación en la música experimental después de recibir noticias del trabajo de Pierre Boulez en Europa
- en 1954, la visita de Boulez a Chile con el material grabado y con sus charlas electroacústicas capta la atención de los compositores locales
- Leni Alexander realiza la primera audición pública de música concreta en Chile tras su regreso de París
- Juan Amenábar difunde estas obras por radio chilena, reuniendo hacia 1955 un grupo de jóvenes motivados a experimentar con el sonido


**IMPORTANTE**
- música experimental = término general
- música concreta = método específico

### citas del libro

**cita 1**: 

**_"Significa la organización del ruido [...] hasta formar un lenguaje nuevo, desfigurando su origen hasta buscar una estructura definitiva."_**

página 24

**opinión:** choque mental al descubrir un mundo nuevo que se necesita explorar

**cita 2**: 

**_"Descubrir que hay tantos sonidos [...] era un nuevo universo, una nueva América con un Colón encima de sus carabelas...""_**

página 25

**opinión:** muestra la emoción de descubrir un universo nuevo y el impulso instantáneo de crear
