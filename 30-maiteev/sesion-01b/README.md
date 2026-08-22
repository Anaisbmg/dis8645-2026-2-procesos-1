# sesion-01b

## apuntes sesión
2026-08-14
boolean

**C++ variables:**
bool,string,int,char,double.
0 al 7 con 3 bits
256 bits posibles

**bool** solo datos solamente si  o no 

ej: bool maitechilena: true

**int** son numeros enteros

ej: intkristelNacimientoAnho: 2003 


8 bits a cada color rojo,verde y azul 
// comentario 
este es el comando para llamar a a la funcion: nombre de la funcion(); 

descargar Arduino IDE 2.3.10 
 
uno r4 instalar 

setup: configurar 

toda la linea de codigo tiene que tener un comentario describiendo lo que tiene que pasar.  
backtick
## encargos

encargo01b:

# 1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.


-Lo primero que nos preguntamos como dupla es como funciona, la pantalla led y de que forma se trabaja. Lo primero de todo conectamos el Arduino de mi compañera a su computador y comenzamos a investigar, comprendiendo de apoco lo de:

```cpp 
#include "Arduino_Led_Matrix.h"
```

-La fuente de información nos ayudo de todas maneras en el funcionamiento y de como generar la matriz bidimensional, soltar el miedo al Arduino. La primera relación que tuvimos con la placa fue ocupar el código de ejemplo, este era solamente una carita feliz y fuimos cambiando pequeñas cosas a la matriz bidimensional con el 0 o 1 y comenzamos a analizar el código de donde van las cosas y de porque están ahí.

 

``` cpp byte frame[8][12] = {
  { 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};
```
"Esta opción es fácil de entender, ya que la imagen se visualiza en el patrón del array y se puede editar fácilmente durante la ejecución. Los elementos del array anterior forman un corazón, y esa es la imagen que se ve en la pantalla"

"Para seleccionar un píxel individual, elige su dirección y cambia su valor; recuerda que debes empezar a contar desde 0. Por lo tanto, la siguiente línea seleccionará el tercer píxel desde la izquierda y el segundo desde arriba, y luego lo activará"

![carafeliz](./proceso-1.jpg) 

![carafeliz](./proceso-2.jpg) 

-Después de probar la cara, partimos desde cero poniendo en la pantalla led un punto y tratar que se haga una línea de apoco, nos costo bastante y tuvimos investigando vario tiempo de como funciona para sacar un led y aparezca otro, no nos funcionaba. 

-Después de entender los de los segundos logramos hacer una linea que aparece y desaparece de apoco y esto nos abría paso a poder poner distintas animaciones ya que entendimos el delay en loop.

- Comenzamos poniendo en la pantalla el numero 1 y el numero 2 con 2 segundos de diferencia. Funciono bien y fuimos variando códigos para que duraran más segundos o menos segundos.
  ![numero2](./proceso-3.jpg)

  ![numero1](./proceso-4.jpg) 

- Ocupamos el mismo código de 1 y 2, pero después lo hicimos con 6 y 7.
  
 

``` cpp #include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

// frame 1, numero 6 
uint8_t frame1[8][12] = { 
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }
}; 

//  Frame 2, numero 7 
uint8_t frame2[8][12] = {  
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 }
};

void setup() {
  matrix.begin();
}

void loop() {
  // Muestra número 1 por 500 milisegundos
  matrix.renderBitmap(frame1, 8, 12);
  delay(500);
  
  // Muestra número 2 por 500 milisegundos
  matrix.renderBitmap(frame2, 8, 12);
  delay(500);
}
```

  ![numero7](./proceso-5.jpg) 
  ![numero6](./proceso-6.jpg) 
  
**Dudas** 

 -Tuvimos la duda de que significa uint8_t
- Nos consto muchooo entender como funciona el delay y como se agrega al Arduino.
- Nos preguntabamos que es matrix.renderBitmap
- Los textos que corren, por ejemplo las pantallas de la línea 3,  hacen hacen uno x uno con la matriz bidimensional o hay una forma de hacerlo mas rápido, como escribir el texto en algún comando y que aparezca en la pantalla?
 -Investigando vi un video de la universidad de Madrid explicando algunas cosas y quede bastante confundida.
  
- Investigando con el documento de profe tolocka (línea 143) y se explica una manera más facil de ocupar la pantalla que lo llama "enteros de 32 bits". La verdad no entiendo el funcionamiento de esto.

  "Pero 96 es divisible por 32 (96 / 32 = 3) así que si cada bit de una variable unsigned long se usa para representar el estado de un led, nos alcanza con sólo 3 variables de este tipo."
   
ejemplo de 32 bits: 
``` cpp
unsigned long frame[] = {
    0xF817,
    0x81B81D81,
    0xE8000000,
};
```
no entendi nada de esto.

***Bibliografia***


  https://docs.52pi.com/md/kz-0073/arduino/p3/ 
  
  https://lab.bricogeek.com/tutorial/guia-de-modelos-arduino-y-sus-caracteristicas/arduino-uno-r4-wifi

  https://mediateca.educa.madrid.org/video/s7tpstyjlth1hoxo

  https://www.profetolocka.com.ar/2024/07/22/tutorial-usando-la-matriz-led-del-arduino-uno-r4-parte-1/

  https://www.manualdomaker.com/matrix/
  
# 2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.
La acción que elejimos como dupla es ir a comprar ropa a la feria un domingo 

``` cpp
void VisitarFeria(){
  //dias desde el 1 que corresponde al primer día del mes
int DiaFeria = 23;

//enero es 1, diciembre es 12
int MesFeria = 8;

// horario feria es a las 10am, optima hora para llegar
//si quiero llegar a esa hora debo levantarme a las 8am
int HorarioFeria = 10;

//día empieza a las 0 hasta las 23
int Horalevantarse = 8;

//dinerito necesario para comprar ropita linda
//dinero en efectivo
int DineroParaGastar = 20000;

if (DiaFeria == DiaActual && MesActual == MesFeria ){VisitarFeria();
}
if (DiaActual == DiaFeria -1){ColocarAlarma(a las 8);
}
//
if RopaBonita < 5000 {ComprarPrenda ();
}
//joya encontrada

else if (RopaBonita > 5000){NoComprar();
}
// ta muy caro, a menos que sea una real joya

void ColocarAlarma (8am);
}
```
## lectura
Lectura pagina 7 a la 21.

- Estas 14 paginas leídas se dividen en 4 poemas (hipotesis,verdad,persona e igualdad), entonces les entrego un punteo de lo que rescate de cada poema y lo que entiendo desde mi perspectiva y con algunas citas.


**1. EPÍGRAFE** 

"La opinión pública debería acostumbrarse a la idea de que una cosa es lo que se dice en el medio social circundante y otra es lo que se encuentra en los expedientes judiciales. Para los asuntos judiciales lo que interesa es lo que hay en los expedientes".(pag 9)

- siento que el epígrafe habla mucho de un procesamiento cerrado y que cuesta el cambio.
  
-  Que cumple solo una forma de proceso. Pero porque solo un tipo de proceso?
  
  

 **2. HIPOTESIS**
-   Siento que se habla mucho de las realidades y del poder del dinero.

 "El orden se integra en el caos / El canon de la belleza es un caos / Esta opinión no es pacífica" (pag 12)

  -Existe realmente el verdadero orden o esta cambiando constantemente?
  - Se puede controlar el caos?
  - Hay que tener todo controlado.
    


 **3. VERDAD**
  - Existen varias verdades
    
    "La verdad no es certeza"(pag 16)
    
    -La busqueda de la verdad.
    - Ocurre o no ocurre.
    - Demuestran que no existe solamente una verdad entonces cuestiona de como el juez no sabe nada como sabe cual es la verdad y se explica donde la verdad solo se sabe con la certeza.

      

  **4. PERSONA**
    - Todos los seres humanos nacemos iguales y con la misma realidad.
    
   - Nos convertimos en conceptos de una realidad, bueno no de una realidad sino de la construcción de ella.
   


   **5. IGUALDAD** 
   
   "Que es lo igual y qué es lo distinto" (pag 21)
   
   - La contradicción es lo que nos diferencia?
    
   - Se vuelve en una abstracción pero no en cualquier abstracción.
      
