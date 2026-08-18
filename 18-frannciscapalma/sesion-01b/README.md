# sesion-01b

## apuntes sesión

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

prueba de codigos

El primer código que usé pensé que no habia funcionado por el texto que aparecía abajo, pensé que el arduino r4 no procesaba la información, entonces decidí probar con otro código.

Luego probamos con otro, pasó exactamente lo mismo, entonces decidimos usar la ayuda de la inteligencia artificial y ahí nos dimos cuenta de que en realidad estaba funcionando bien el código pero no estaba entendiendo como usar el arduino.

Para el arduino r4 minima usamos dos códigos, uno que enviá numeros desde el A0 al computador y otro codigo que enciende y apaga el led del arduino.

Codigo de numeros desde el A0:
/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}


 
Funcionó bien y no hubo mayor dificultad más que en encontrar el panel donde se veía la secuencia de los números. 
En el otro código lo elegimos porque queríamos ver algo que fuera visible físicamente. El problema que tuvimos con este fue que al principio no andaba el código porque la página no reconocía el dispositivo, tuvimos que desconectar, esperar y volver a conectar y seleccionar el arduino. Luego de eso funcionó bien y fue interesante ver que a través de un código respondiera en el arduino.

Código luz led:

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

FUNCIÓN irAEntrenamiento(día, hora, lugar)

    revisar el día del entrenamiento
    revisar la hora del entrenamiento
    preparar ropa deportiva
    preparar botella de agua
    preparar mochila
    calcular cuánto demora el viaje
    salir de la casa
    tomar transporte
    llegar al lugar
    cambiarse de ropa
    comenzar entrenamiento

FIN FUNCIÓN

## lectura
