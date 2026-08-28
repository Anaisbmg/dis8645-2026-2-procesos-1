```cpp

//Indice:
//1 ¿Qué se va a hacer?, ¿Con qué elementos?, ¿Cómo funciona?
//2 Código


//Punto 1
// lectura de 2 poemas con arduino uno r4 wifi
//En una pantalla LCD Oled 0,91" I2C. 

//por Francisca Palma, Nicolas Valdes, Santiago Cifuentes Vélez.
//Ejercicio en clase para dis8645-2026-2

//materiales
//arduino uno r4 wifi
//potenciómetro b100k
//push boton
//Protoboard
//pantalla LCD Oled 0,91" I2C
//resistencia de 10k
//cable usb/C
//cable dupont

//conexiones

//conexiones potenciometro:
//orejas de potenciometro a VCC y GND
//nariz de potenciometro a entrada A0 (entendiéndose como la pata de la mitad)

//conexiones boton:
//
//


//proyectar fragmento del poema "a los perros buenos no les pasan cosas malas", y "Mi vida huele a flor" de Elvira Sastre, en pantalla LCD Oled 0,91" I2C
//El hardware tiene dos componentes interactivos esenciales: potenciometro y botón.

//potenciómetro: el poema se podrá scrollear a medida que se cambia la resistencia de este en el "y".
// La primera línea del texto será 0k y la última línea será del texto será 100k. Vamos a movernos dentro del rango de 0 y 100 para avanzar o retroceder en líneas y leer.

//push boton: al oprimir el botón, se cambia de poema.
//push boton:  el poema se mantiene en la pantalla; estado 0. Al presionar, se cambia de poema; estado 1 y luego se mantiene en el poema cambiado; estado 0


//citar a Elvira y poner que licencias de protección tienen sus obras.


//Punto 2
//Aquí comenzamos con el código:

//esta parte es OBLIGATORIA en todas las estructuras con Adafruit, 
//ya que son las librerías.
//de aquí:
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//hasta aquí. 


//Lo primero que la lectora verá en la pantalla, será un bitmap de un cactus.
//El código de este cactus fue generado con el siguiente sitio web: https://javl.github.io/image2cpp/
//El cual se encarga de convertir imágenes en código.


//El código generado por el sitio web, corre desde aquí, hasta:
// 'cactus', 128x32px
const unsigned char epd_bitmap_cactus [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xe8, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x64, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x62, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xa0, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x21, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x22, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x26, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x02, 0x47, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x82, 0x07, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0a, 0x04, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x83, 0x25, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x04, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x02, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x04, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x40, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 528)
const int epd_bitmap_allArray_LEN = 1;
const unsigned char* epd_bitmap_allArray[1] = {
	epd_bitmap_cactus
};

//Aquí.


const int tasa = 9600; //se establecen los baudios en esta "resolución" para la velocidad de lectura del arduino a los demás componentes.
const int potePatita = A0; //Aquí el Arduino reconoce el potenciómetro por la entrada análoga A0
int poteLectura = -1; //El valor que se va a recibir en caso tal de que este mal conectado. Sí es que esta mal conectado, sale un -1 en el monitor serial. Pero si esta conectado, sale un numero desde el 0 hasta el 1024. 
int poteFiltrado = -1; //Estabiliza y que no hayan cambios tan súbitos cuando no se está movimiento el potenciómetro. 

const char poem[] =  //La palabra string, no la vamos a usar, porque “string”, es propio de Arduino.
                     //Vamos a usar “char", la cual se puede usar en Raspberiii o cualquier otro lugarcito. 
"Aprendi de la vida\n"
"a quererte\n"
"de igual modo,\n"
"\n"
"a amar este\n"
"equilibrio nuestro,\n"
"\n"
"la igualdad\n"
"de latido,\n"
"\n"
"a confiar\n"
"sin atender el tiempo\n"
"\n"
"que tarda uno\n"
"en encontrar\n"
"la calma,\n"
"\n"
"a buscar lo urgente\n"
"sin ninguna prisa,\n"
"\n"
"y a llegar a casa,\n"
"\n"
"y que mi casa\n"
"sea mi casa\n"
"porque tu me esperas\n"
"\n"
"y que tu casa\n"
"sea tu casa\n"
"porque siempre vuelvo";

int totalLines = 30; //no son las lineas de este código,
int lineHeight = 8;  //sino que son la cantidad de líneas que se muestran en la pantalla (contando los \n)
int totalTextHeight;
int maxScroll;

//setup() — se ejecuta una sola vez al encender
void setup() {

  Serial.begin(tasa);  //inicialización de la pantalla

  // hola lo siguiente comentado no está haciendo nada ayuda chavales

  // while (!Serial) {}
  // Serial.println("Elvira Sastre"); // se muestra luego de la ilustración del cactus
  // delay(2000);   // Wait for display para prenderse

  // igual se puede ignorar porque lo sustituí por la parte del final en donde se muestra el nombre
  // de elvira en texto más grande luego de que se muestra el cactus

//Esta parte igual, es obligatoria por el bien de la sociedad.
//Esta parte es por si a la pantalla no le llega la suficiente energía y hay un error, 
//ella pueda procesarlo y resistir, y nosotres actuar.
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  display.setTextColor(SSD1306_WHITE);

  totalTextHeight = totalLines * lineHeight;
  maxScroll = totalTextHeight - SCREEN_HEIGHT;
  if (maxScroll < 0) maxScroll = 0;

// después de saludar,
// y decir Elvira Sastre
// muestra un cactus

 display.setRotation(3); // gira el sistema de coordenadas, 
          // 0 = normal (por defecto)
          // 1 = 90° en sentido horario
          // 2 = 180° en sentido horario
          // 3 = 270° en sentido horario
  display.clearDisplay();

  display.drawBitmap(
    0, 0,                  // ahora (0,0) es la esquina del "lienzo alto"
    epd_bitmap_cactus,     
    32, 120,               // ancho x alto REALES del bitmap (32x120)
    SSD1306_WHITE
  );
  display.display();
  delay(5000);

// Al inicializarse, la biblioteca carga automáticamente un logo de Adafruit en el buffer. 
//display.display() lo muestra en pantalla, y se queda 2 segundos.
  // display.display();
  // delay(2000); // Pause for 2 seconds
  // para borrar el buffer, lo que apareció en la pantalla

  display.clearDisplay();

  testdrawstyles(); // llama a la función (ya definida más abajo)

//si no quieres poner lo de la animación de cambiar de color que está en el
//siguiente parrafo de código...,
//se borra, duhh, pero, se debe cerrar entonces esta parte con un "}"

//SOLO SI SE QUIERE CAMBIAR EL COLOR.
//si queremos invertir los colores de la pantalla (recordemos que la pantalla es monocromatica
//podemos hacerlo así).
  display.invertDisplay(true); //esa función es para cambiar el colorrrrrrr. periodo.
  delay(1000);
  display.invertDisplay(false);
  delay(1000);
}
//Hay dos display.invertDisplay, porque hace como una pequeña animación.


    // queremos mostrar líneas de texto más largas
    // ya que queremos mostrar una estrofa de un poema mediante la pantalla
    // por lo que para lograr esto
    // integraremos un potenciómetro
    // para poder avanzar o retroceder en el texto
    // así podremos leer una línea completa sin que esta se corte por la pantalla

    // para conectar el potenciómetro a nuestro Arduino UNO R4 WiFi
    // conectamos lo siguiente
    // pin 1 de potenciómetro a 5V del Arduino
    // pin 2 del potenciómetro a un pin Analog del Arduino
    // en nuestro caso fue al pin A0
    // pin 3 del potenciómetro a GND del Arduino

  void loop() {

    // leer y filtrar
  poteLectura = analogRead(potePatita);
  poteFiltrado = filtrarConDivision(poteLectura, 4); // 0–255 approx

  // convertir el valor filtrado en posición de scroll
  int scrollY = map(poteFiltrado, 0, 255, 0, maxScroll);

  // dibujar el poema desplazado
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, -scrollY); // se desplaza mediante el eje Y
  display.print(poem);
  display.display();

  Serial.print("valor filtrado: ");
  Serial.println(poteFiltrado);

  delay(100); // delay de lo que se muestra en el monitor serial (valores potenciómetro)
              // también afecta en la velocidad a la que reacciona el potenciómetro
              // con como se muestra el desplazamiento en la pantalla
              // mientras más delay, más tarda en reaccionar la pantalla al movimiento del potenciómetro
              // menos delay, más rápido reacciona
  }

  // Aquí, AFUERA de setup() y loop(), defines las funciones:
    void testdrawstyles(void) {
      display.setRotation(0); // volvemos a rotar la pantalla para que el texto se pueda leer de manera horizontal
      display.clearDisplay();
      display.setTextSize(2); //tamaño de la letra
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(0, 0); //esta es la posición en x,y
      display.println(F("Elvira \n Sastre")); //recordad que la "F", siempre va igual para que no se nos tueste la RAM del Arduino.
      display.display();  // muestra el texto en pantalla
      delay(2000);
    }

    int filtrarConDivision(int valor, int divisor) {
  int resultado = valor / divisor;
  return resultado;
}
```
