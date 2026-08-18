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

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
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
