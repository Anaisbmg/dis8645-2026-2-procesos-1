# sesion-02a → 18/08/26

## Apuntes sesión

Primer proyecto

potenciometro (resistor variable) → regula la potencia → voltaje (energia) + corriente tiempo).

- Permite cambiar la cantidad de corriente o voltaje en un circuito de forma manual al girar una perilla o mover un deslizador.

- la corriente es un flijo de electrones

- potenciometro A: AUDIO
- potenciometro B: LINEALES 

botones pulsadores (pushbuttons)

- elementos temporales  → no guardan nada en la memoria

- resistor (pull down)  →  permite que la lectura sea siempre 0 hasta que al presionarlo es 1

  boton presionado: 1

  boton no presionado: 0

-resistor (pull up)  → 

presencia: 0

no presencia: 1

se eligen según cómo quiero que se comporte el circuito en reposo.

GND  → tierra  → 0 voltaje  →  usar cables cafe, negro  → riel negativo

Vcc  → 3v3  → 5v  →  usar cable rojo  → riel positivo 

protoboard  →  todas las filas son el mismo lugar


---


## Linkn vistos en clases

- https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#layout_non-wireless

- https://docs.arduino.cc/built-in-examples/digital/Button/

- https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/


## conexiones potenciometro

3 patitas del potenciometro

derecha → voltaje/tierra

izquierda → voltaje/ tierra

al medio → A0 → patita de lectura (int) → entero


## codigo visto en clases para arduino R4 wifi:

```cpp

const int patitaLectura = A0;
// numero de enteros
// arduino lee el A0 como si lo fuera
// const es algo que no se puede cambiar porque es constante 


int valorLectura = ;
// numero de enteros
// declarar valor

void septum () {
// solo 1 vez
// nada que configurar porwue es entrada

Serial.begin(9600);
// prohibido ponerlo en loop
// Serial es una clase por eso esta en mayuscula 
// Serial = un mensaje, uno a la vez en orden
// funciona en velocidad 9600 (mensajes por segundo)
// este numero es moderado, no es rapido ni lento
// al abrir este puerto significa que puedo escribir mensajes 
}
void loop (){
  Serial.println("holaa");
valorLectura = anologRead (patitaLectura);
//monitor serial, muestra lo que mandaste al codigo
// solo mostrara el "holaa"
}

```

## codigo enviado para hacer funcionar el potenciometro

```cpp

const int patitaLectura = A0;

int valorLectura = -1;

void setup() {

  Serial.begin(9600);

}

void loop() {
 valorLectura = analogRead(patitaLectura); 
 Serial.println(valorLectura);
}

```
minimo: 0
maximo: 1023


while  →  mientras que 

si el no puede recibir mensajes, se perderan los que mandaste 
tratar de no usar porque es complejo, usar cuando sea necesario 


0, 1, 2, 3 →  vale 0

4, 5, 6, 7 →  vale 1

- a la hora de programar se empieza de lo mas macro a lo mas micro




## Encargos

- Hacer grupos de 3 o 4 personas

1. en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.

2. conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.


primera mitad:

- teoria/pizarra potenciometros y botones
- visual studio code
- dramas github

segunda mitad:

- programar potenciometros y botones


---


## Lectura

Libro: A New Program for Graphic Design

Autor: David Reinfurt

El libro está dividido en 3 grandes capítulos.

I. T--Y-P-O-G-R-A-P-H-Y

II. G-E-S-T-A-L-T

III. I-N-T-E-R-F-A-C-E

Intentare leer por capítulo o dos temas por clase, depende del tiempo que tenga.

