# sesion-01b

## apuntes sesión

C++ Variables

String =

Bool = Yes or no

Int = Whole N°

Double = Point N°


Mini tabla

int8_t | 8, con signo
int8_t | 8, sin signo


Arduino IDE (descargar)
Uno R4 (instalar)
Always comment, seudocodigo

Random important stuff I wrote:
Void setup (), Loop ()
`` backtick se puede abrir y cerrar con 3, para luego poder copiar
Scope: es un contexto
Visit processing.org

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.


Referentes: 

https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/#testing-it-out

https://www.youtube.com/watch?v=MBTPU8PwS3Y

Al intentar correr este código, logramos que funcionara de manera correcta

<img width="339" height="300" alt="Screenshot 2026-08-16 at 8 10 10 PM" src="https://github.com/user-attachments/assets/79f57051-29c8-4fa0-9fde-13e993fb6f12" />

Luego decidimos intentar otras figuras con la misma base.

```
//Queremos hacer algún símbolo con la matriz de led que tiene el Arduino
//Primero vamos a incluir una librería hecha para la matriz de este arduino, después de investigar aprendimos que una librería es un conjunto de funciones de código ya programadas
//que sirven para acortar muchas más líneas de código, con solo una función.
//La almohadilla lo que hace es decirle al compilador que antes de que compile, incluya la librería.
#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix;

//Ahora en el void setup, encendemos la matriz.
void setup() {
   Serial.begin(115200);   //Esto lo que hace es iniciar la comunicación entre la placa y el ordenador
   matrix.begin();         //Encendemos la matriz
}
// Esto le dice al ordenador la posición de cada led del 0-11 12x8
uint8_t frame[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};
//Usamos el void para decirle al arduino que leds queremos que se enciendan ponemos frame, indicamos la posición y el 1 es led encendido y 0 es apagado
void H(){
  //frame para indicar que led, y luego entre [] el primer número indica la fila y el segundo la colmna en la que se encuentra el led que queremos encender
  frame[1][1] = 1;
  frame[2][1] = 1;
  frame[3][1] = 1;
  frame[4][1] = 1;
  frame[5][1] = 1;
  frame[3][2] = 1;
  frame[3][3] = 1;
  frame[3][4] = 1;
  frame[1][4] = 1;
  frame[2][4] = 1;
  frame[4][4] = 1;
  frame[5][4] = 1;
}

void A(){
  //Letra inicial A
  frame[1][7] = 1;
  frame[2][7] = 1;
  frame[3][7] = 1;
  frame[4][7] = 1;
  frame[5][7] = 1;
  frame[1][8] = 1;
  frame[1][9] = 1;
  frame[1][10] = 1;
  frame[3][8] = 1;
  frame[3][9] = 1;
  frame[3][10] = 1;
  frame[2][10] = 1;
  frame[4][10] = 1;
  frame[5][10] = 1;

}
//Aquí indicamos que se repita constante mente que se encienda la letra H y la A.
void loop(){

H();
A();
//Esto nos ha dado problemas, sirve para dar la orden de que se encienda lo que le hemos dicho que se encienda, es de la libreria de la matriz.
matrix.renderBitmap(frame, 8, 12);

H();
A();


}
```
Primera Letra
<img width="1536" height="2048" alt="Taller" src="https://github.com/user-attachments/assets/8c2f9a76-98f1-4743-9d12-89166fa778b1" />

Boceto de segunda letra
<img width="1200" height="1600" alt="Taller parte 2" src="https://github.com/user-attachments/assets/c3493561-3fae-4001-b4be-dba8cf03dcb5" />

Ambas Letras que son nuestras iniciales
<img width="1152" height="2048" alt="Taller parte 3" src="https://github.com/user-attachments/assets/55ba3ee7-cf25-4b5d-9021-35403df10631" />










2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

```
//hacer junta en mi casa el dia viernes, con asado dependiendo de los que confirman el jueves.
void junta(casa, viernes) {
  confirmar(jueves, xwhatsapp);
  comprar(viernes, carne);

//da inicio el viernes desde las 8pm hasta las 4 aprox
  if (viernes && tiempo == 8pm) {
    compartir(inicio);
  }
  else if (viernes && tiempo == 4:00am) {
    compartir(fin);   
  }
```

## lectura
