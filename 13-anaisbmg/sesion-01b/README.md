# sesion-01b

## apuntes sesión

variables c++ (cpp)

0 - 1 son las posibles opciones
con tres bits se pueden generar 8 números (desde el 0 al 7) 
con cuatro se pueden generar 16 (del 0 al 15)
con el n de bits se genera el ^2

u sin signo son números positivos (0 a 255 bits) y sin u es con signo son números negativos (-128 a 127)

**para descargar arduino**
arduino - productos - arduino IDE - 2.3.10 - definir como lo quieres descargar 

verificar en el check si no tengo un arduino conectado 
carpetas es de mi computador 
arduino 1r4, instalar
usbc- pantalla led- wifi- bluetooth = uno r4 wifi
son microcontroladores

void = vacío, es cuando la función hace algo pero esta tiene un efecto, no en una forma que la veo 
ej: prender la tela con el control remoto

toda línea de código va a estar comentada, ya que no interesa el código, importa el comentario osea la descripción 

si veo () es una función 

control+a (seleccionar all), control+u (upload) para subir del arduino a gh, 

**bool** true o false
**int** números enteros positivos como negativos 
**if** es un condicional
**setup** se ejecuta solo una vez  
**loop** es un bucle infinito
**scope** lugar/contexto 
**{}** espacio o territorio donde se encuentra la variable 
**||** condicional o
**&**  condicional y
**==** para comparar
**=** para asignar un valor
 
funciones () {} 
llamar la función = función();

**notación camello** Nombre y funciones donde la primera palabra es minúscula y la siguiente con mayúscula 
ej: encenderLuz, ubicacionActual, entre otros

diseño paramétrico

adafruit


## encargos

encargo01b:

1. con antoloch queremos que pase un mensaje en la pantalla del Arduino, la carla nos menciono el delay y monitor serial el cual nos dice si hay algún error, con un baud 115200 o 9600. Utilizamos [ledmatrix](https://ledmatrix-editor.arduino.cc/), herramienta de Arduino para diseñar patrones, fuimos realizando frame por frame, decidimos plasmar la frase "compilando... ideas" ya que se ve reflejado la programación y el proceso del diseño.
```cpp
const uint32_t compilando ideas[][4] = {
	{
		0xf008,
		0x800800,
		0x800f0000,
		66
	},
	{
		0xf009,
		0x900900,
		0x900f0000,
		66
	},
	{
		0x880d,
		0x80a80880,
		0x88088000,
		66
	},
	{
		0xf009,
		0x900f00,
		0x80080000,
		66
	},
	{
		0x8008,
		0x800800,
		0x80080000,
		66
	},
	{
		0x8008,
		0x800800,
		0x800f0000,
		66
	},
	{
		0xf009,
		0x900f00,
		0x90090000,
		66
	},
	{
		0xd00d,
		0xd00b00,
		0xb00b0000,
		66
	},
	{
		0xe009,
		0x900900,
		0x900e0000,
		66
	},
	{
		0xf009,
		0x900900,
		0x900f0000,
		66
	},
	{
		0x0,
		0x6,
		0x600000,
		66
	},
	{
		0x0,
		0x0,
		0xc00c0000,
		66
	},
	{
		0x0,
		0x0,
		0xc00c000,
		66
	},
	{
		0x8008,
		0x800800,
		0x80080000,
		66
	},
	{
		0xe009,
		0x900900,
		0x900e0000,
		66
	},
	{
		0xf008,
		0x800e00,
		0x800f0000,
		66
	},
	{
		0xf009,
		0x900f00,
		0x90090000,
		66
	},
	{
		0xf008,
		0x800f00,
		0x100f0000,
		66
	}
};
```
Nos percatamos que el tiempo de la duración del frame era muy poca, además que arduino no lograba leer este código, decidimos utilizar una ia para poder solucionar esto, el cual nos dio este código
```cpp
const uint32_t compilando_ideas[][4] = {
  {0xf008, 0x800800, 0x800f0000, 700},
  {0xf009, 0x900900, 0x900f0000, 700},
  {0x880d, 0x80a80880, 0x88088000, 700},
  {0xf009, 0x900f00, 0x80080000, 700},
  {0x8008, 0x800800, 0x80080000, 700},
  {0x8008, 0x800800, 0x800f0000, 700},
  {0xf009, 0x900f00, 0x90090000, 700},
  {0xd00d, 0xd00b00, 0xb00b0000, 700},
  {0xe009, 0x900900, 0x900e0000, 700},
  {0xf009, 0x900900, 0x900f0000, 700},
  {0x0,    0x6,      0x600000,   700},
  {0x0,    0x0,      0xc00c0000, 700},
  {0x0,    0x0,      0xc00c000,  700},
  {0x8008, 0x800800, 0x80080000, 700},
  {0xe009, 0x900900, 0x900e0000, 700},
  {0xf008, 0x800e00, 0x800f0000, 700},
  {0xf009, 0x900f00, 0x90090000, 700},
  {0xf008, 0x800f00, 0x100f0000, 700}
};

ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin(); // inicializa la matriz LED
}

void loop() {
  for (int i = 0; i < sizeof(compilando_ideas)/sizeof(compilando_ideas[0]); i++) {
    matrix.loadFrame(compilando_ideas[i]);   // carga cada frame
    delay(compilando_ideas[i][3]);           // espera 700 ms entre frames
  }
}
```

Luego de esto (aun) estamos en proceso de entender como se realiza este frame, ya que sabemos que la pantalla es de 8x12 lo que nos da 96 bits, osea 
+ 32 bits
+ 32 bits
+ 32 bits
+ Tiempo

uint32_t 

u = no negativos

int = número entero

32 = cantidad de bits

t = tipo

Tiempo el cual decidimos dejar en 700 para que cada letra se lograra leer

[compilando...ideas video](https://www.youtube.com/shorts/YBul3QpaSB4)

2.
```cpp
// esta es una receta de como hacer panqueques de platano
// bool 
bool cocina_funcional = true;

// integers
int huevo = 1 
// unidad
int platano = 1 
// unidad
int frambuesas = 1 
// cucharada
int avena = 3 
// cucharada
int sarten = 1 
// unidad
int bowl = 1 
// unidad

// ingredientes y utensilios 
void setup () {
  if ( cocina_funcional && huevo == 1 && platano == 1 && frambuesas == 1 && avena == 3 && sarten == 1 && bowl == 1 ) { puedo comenzar a cocinar }
  
}

void () {
  // paso 1: moler platano
  // paso 2: juntar platano y huevo
  // paso 3: agregar frambuesas y avena
  // paso 4: calentar sarten
  // paso 5: agregar mezcla
  // paso 6: cocinar
  // paso 7: dar vuelta la masa
  // paso 8: cocinar
  // panqueques listos
  // comer panqueques

}
```

## lectura
