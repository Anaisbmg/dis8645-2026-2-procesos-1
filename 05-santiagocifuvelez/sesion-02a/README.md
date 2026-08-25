# sesion-02a
*No existe un potenciómetro perfecto, pero si existimos nosotros.*

Hola profe Aarón, Profe Mati, Emi y Sebas!, espero que se encuentren bien cuando lean esto c: 

1. Apuntes de clase: Potenciómetros, encoders, Pull up y Pull down, referentes como Luis Llamas, explicación de conexión de aurdino con breadboard, Baudios.
2. Encargo
3. Lectura

# apuntes sesión
## 1. Apuntes de clase: Potenciómetros, encoders, Pull up y Pull down, referentes como Luis Llamas, explicación de conexión de aurdino con breadboard, Baudios.
La clase de hoy fue bastante extensa, pero muy fructífera.

## Potenciómetros: 
Los potenciómetros nos permiten variar la potencia. Como si este fuera un grifo de agua; si le abres mucho, sale mucha agua (la potencia mucho), si le abres poco, sale poca agua (la potencia poco).  

Así se ven:
![img1](./imagenes/img1.jpg)

## Resistencias: 
Las resistencias actúan como protectores y atajadores de la corriente que entra al circuito. Sin estas, el circuito no resiste y se puede quemar. Hay muchos colores, sabores, tamaños, etc..., `como los lgbtiq+ [Divesos y resistentes].`

Así se ven
![img2](./imagenes/img2.jpg)

## Encoders 
Un encoder es un  sensor que genera señales digitales en respuesta al movimiento.
La clasificación de un encoder depende de tres ejes distintos:

**1. Según el tipo de movimiento**
   **- Rotatorio:** Mide ángulos y giros.
    **- Lineal:** Mide desplazamiento en línea recta.

**2. Según el tipo de movimiento**

    - Óptico: Usa luz y un disco/regla graduada.
    - Magnético: Usa sensores de efecto Hall o magnetoresistivos.
    - Capacitivo: Mide cambios en la capacitancia.
    - Inductivo: Mide variaciones en campos magnéticos/inductivos.

**3. Según la forma de indicar la posición (Modo de lectura / Salida)**

    - Incremental: Genera pulsos conforme se mueve. No sabe su posición real al encenderse hasta pasar por un punto de referencia.  
    - Absoluto: Asigna un código único (bits) a cada posición. Sabe exactamente dónde está, incluso tras apagarse y encenderse.  

Esto permite la automatización de datos que se quieran recolectar.
[referencia](https://www.servomotorsadjust.com/encoders/)
[referencia](https://blog.structuralia.com/que-es-encoder-tipos/)

## Pull up y Pull down
Son configuraciones del circuito (usando una resistencia) para asegurar que un pin digital del microcontrolador lea un 1 lógico (HIGH) o un 0 lógico (LOW) claro cuando el botón no está presionado, evitando que el pin quede "flotando".

**Activado (On / Presionado):** El botón cumple su función, está encendido o la acción está seleccionada.  
**Desactivado (Off / No presionado):** El botón está apagado, en reposo o la función no está en uso.  

En el siguiente esquemático vamos a ver las diferencias del pull up y el pull down:    
![img3](./imagenes/img3.jpeg)

|Configuración|Sin presionar botón|Al presionar botón|¿Cómo se conecta?|
--------------|-------------------|------------------|------------------
|**Pull-up**|Pin recibe HIGH (VCC)|Pin recibe LOW (GND)|Resistencia arriba (a VCC), Botón abajo (a GND).|
|**Pull-down**|Pin recibe LOW (GND)|Pin recibe HIGH (VCC)|Botón arriba (a VCC), Resistencia abajo (a GND).|

**Pull Up:** La resistencia se encuentra desde el lado de VCC
**Pull Down:** La resistencia se encuentra desde el lado del GND

## Luis Llamas
`Referente súper importante en este rubro:` [Luis Llamas](https://www.luisllamas.es/)

## Explicación de conexión de aurdino con breadboard

![](./imagenes/img4.jpeg)
Ej1: [Enlace al ejercicio](https://docs.arduino.cc/built-in-examples/digital/Button/)

**- El cable rojo:** Positivo.  
**- El cable Negro:** Negativo.  
**- El cable verde/azul:** Es el puente entre la breadboard y el Arduino.   

Para el siguiente ejercicio que realizamos en clase, debemos entender esto primeramente: 

![](./imagenes/img7.jpg)

Con lo anteriormente comentado, vamos a realizar un ejercicio con un potenciometro y una placa de Arduino Uno R4 Wifi, para hacer un Analog Read Serial.

![](./imagenes/img6.jpeg)
[Enlace ejercicio](https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/)

Pasos:
- Cable dupont a GND  
- Cable dupont a 5V  
- Cable a “A0”  

Luego se conecta el cable “A0” **a la patita central del potenciómetro.**
Patita 1: 5V al comienzo patita 2: A0   Patita 3:GND

Y con este código le decimos al Arduino que va a suceder y que hacer con el potenciómetro.

```cpp
const int patitaLectura =A0;


// Este valor se va a remplazar constbatemente con lo que nos diga el voltaje de la nariz del potenciometro
int valorLectura = -1;


// las analogas son todas entradas
void setup() {
//valores seriales
// se pone en setup, porque se va a prender una sola vez


//Baudios
Serial.begin(9600);
}


//
void loop() {


// esto es una función, porque al finalizar tiene parentesis.
valorLectura = analogRead(patitaLectura);
Serial.println(valorLectura);
}
```
> println; Imprime y sáltate a la otra línea  
print: No se salta una línea

![](./imagenes/img8.gif)

## Baudios
"La velocidad en baudios define el número de cambios de señal transmitidos por segundo en un canal de comunicación. Mide la velocidad de comunicación en términos de símbolos en lugar de bits brutos. Muchos sistemas digitales igualan la velocidad en baudios con los bits por segundo, pero esto solo es cierto cuando cada símbolo transporta un bit." 

![](./imagenes/img9.jpeg)
[Texto y ejemplo sacado de este enlace](https://www.sbg-systems.com/es/glossary/baud-rate/)

## encargos.
1. en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.

2. conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.

![](./imagenes/img5.jpeg)

## Investigación Microcontroladores 
**¿Qué es un Microcontrolador?**
Un `microcontrolador` es un sistema completo programable dentro de un único chip que integra CPU, memoria y periféricos de entrada/salida. Es la pieza que permite que un circuito cambie de comportamiento con solo modificar el **firmware.**

**¿Qué es el firmware?**
- El firmware es el programa base o "código raíz" grabado directamenteen la memoria física de un circuito o microcontrolador Controla y coordina los circuitos de hardware, funcionando como el puente esencial entre la parte física del aparato y los sistemas operativos o aplicaciones. Es como si el hardware fueran los músculos y el software las ideas, el firmware es el sistema nervioso involuntario que hace que el corazón lata y los reflejos funcionen automáticamente.

**¿Comó esta conformado?**
- Tiene un mini cerebro llamado CPU (Microprocesador), que por si solo no puede vivir. (como el de los humanos)
- Y aquí es donde entra el termino MCU (Microcontroller Unit), que es el cuerpo el cual integra la CPU y los demás componentes para poder ser funcional, y tiene:

Es un ordenador completo en un solo chip (SoC - System on Chip). Dentro de esa pequeña pastilla de plástico tienes:    

  **- CPU:** El cerebro (más lento que el de un PC, pero suficiente).    
  **- Memoria RAM:** Para guardar variables volátiles.  
  **- Memoria flash:** memoria no volátil donde se guarda el programa.  
  **- Periféricos:** pines y bloques dedicados para interactuar con el mundo exterior.  

- CPU > MCU > Aurduino

**Del hardware al firmwar**e
Lo más importante que debes entender es el cambio de paradigma. En los módulos anteriores, si queríamos hacer una puerta AND, conectábamos transistores. El comportamiento estaba definido por la física.

Ahora, conectamos un microcontrolador y el comportamiento lo define el Firmware (Software embebido).

    - Podemos hacer que el Pin 1 sea una entrada ahora, y una salida dentro de 10 milisegundos.  
    - Podemos simular miles de puertas lógicas mediante código (if, else, and, or).  

El hardware se vuelve genérico; el software le da la personalidad.

[Fuente de investigación, Luis Llamas](https://www.luisllamas.es/que-es-microcontrolador-arduino-esp32/)

## lectura
Continuando con el capitulo anterior, comencé finalmente con el primer ejercicio del libro: 
### Cap 1. Iterative Pattern; Generating a texture or textile design. 

#### Brief
Debo crear un patrón textil teniendo en cuenta los siguientes estándares: Simetría, ritmo, color, detalle a múltiples escalas, control preciso de la silueta, y balance entre formas orgánicas y geométricas. 

Espero esto no sea ilegal, pero este es el contexto: 

