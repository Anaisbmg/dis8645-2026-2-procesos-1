# sesion-02a

## apuntes sesión

Potenciómetros y botones

Potenciómetro: es un componente que permite cambiar un valor poco a poco.

Por ejemplo, imagina la perilla del volumen de una radio: si la giras, el volumen sube o baja. Un potenciómetro funciona parecido, porque al girarlo cambia la resistencia.

Tiene 3 patitas y la del medio normalmente va entregando el valor que cambia.

Entonces, en simple:

giro el potenciómetro → cambia la resistencia → Arduino recibe un valor distinto

Eso sirve para controlar cosas como:

-brillo de una luz
-volumen
-velocidad
-intensidad
-cualquier valor que queramos ir aumentando o disminuyendo

Potencia

La potencia nos dice cuánta energía se está usando en un cierto tiempo.

En electricidad se puede calcular así:

potencia = voltaje × corriente

No hace falta memorizarlo todavía como algo súper complejo. La idea importante es entender que la potencia tiene que ver con **cuánta energía se está usando**.

Corriente eléctrica

La corriente es el movimiento de electrones por un circuito.

Puedes imaginar el circuito como un camino y la corriente como lo que circula por ese camino.

Si el camino está cerrado, la corriente puede circular.

Si el camino está abierto, no puede seguir avanzando.

Botón o pushbutton

Un pushbutton es simplemente un botón que cambia lo que pasa en el circuito cuando lo presionamos.

Por ejemplo:

sin presionar → no pasa nada
presionado → Arduino detecta el cambio

Entonces podríamos programar cosas como:

aprieto botón → se prende una luz

o

aprieto botón → empieza una acción

¿Qué es una resistencia pull-down?

La resistencia pull-down sirve para que Arduino no se confunda cuando el botón no está apretado.

Sin esta resistencia, Arduino podría recibir una señal medio indefinida y leer cosas que nosotros nunca hicimos.

La pull-down mantiene la entrada conectada a GND.

Entonces normalmente tenemos:

botón sin apretar → LOW
botón apretado → HIGH

`LOW` lo podemos pensar como apagado / 0.

`HIGH` lo podemos pensar como encendido / 1.

La resistencia pull-down hace que Arduino tenga un valor claro cuando nadie está tocando el botón.

Código para leer un valor

```cpp
const int patitaLectura = A0;

int valorLectura = -1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hoolaa");

  valorLectura = analogRead(patitaLectura);

  Serial.println(valorLectura);
}
```

```cpp
//`const int patitaLectura = A0;`
```

Acá le estamos diciendo a Arduino:

“voy a usar la patita A0 para leer información”

`A0` es una entrada analógica.

Y `const` significa que esa patita no va a cambiar durante el programa.

```cpp
//`int valorLectura = -1;`
```

Acá creamos una variable llamada:

```cpp
`valorLectura`
```

La variable es como una cajita donde podemos guardar información.

En este caso va a guardar el número que Arduino lea desde A0.

Parte con `-1`, pero después ese número va cambiando.


`setup()`

```cpp
void setup() {
  Serial.begin(9600);
}
```

`setup()` ocurre una sola vez, cuando Arduino empieza a funcionar.

Acá estamos iniciando la comunicación con el computador.

¿Qué significa `Serial.begin(9600)`?

`Serial` sirve para que Arduino pueda mandar información al computador.

El `9600` es la velocidad de esa comunicación.

Puedes pensarlo como:

Arduino y computador tienen que ponerse de acuerdo sobre qué tan rápido van a hablar.


`loop()`

```cpp
void loop() {
```

`loop()` significa que todo lo que pongamos dentro se va a repetir una y otra vez.

Arduino termina el código y vuelve a empezar.

Por eso se llama loop: bucle o repetición.


`Serial.println("hoolaa");`

Esto hace que Arduino escriba:

`hoolaa`

en el monitor serial.

Es como si Arduino nos estuviera mandando un mensaje al computador.


`analogRead()`

```cpp
valorLectura = analogRead(patitaLectura);
```

Esta parte significa:

“Arduino, mira qué valor está entrando por la patita A0.”

Después guarda ese valor dentro de la variable `valorLectura`.

Entonces:

A0 recibe un valor → Arduino lo lee → lo guarda


`Serial.println(valorLectura);`

Después Arduino muestra ese valor en el monitor serial.

Así podemos ver en el computador lo que está leyendo la placa.

Esto sirve mucho para comprobar si nuestro circuito está funcionando.


¿Qué es Serial?

Serial es una forma de comunicación entre Arduino y el computador.

La información se manda de manera ordenada, un dato después de otro.

Por ejemplo:

Arduino lee un valor de un potenciómetro y después puede mostrarnos ese número en el computador.

Entonces:

potenciómetro → Arduino → Serial → computador

Y nosotros podemos ver ese resultado en el Monitor Serial.


Para recordarme

Potenciómetro: permite cambiar un valor girándolo.
Botón: detecta si lo presionamos o no.
Pull-down: evita que Arduino lea valores raros cuando el botón está suelto.
A0: patita donde podemos leer valores analógicos.
analogRead(): lee lo que entra por esa patita.
Serial: permite que Arduino se comunique con el computador.
Serial.println(): muestra información en el Monitor Serial.


## encargos

![captura de pantalla](./imagenes/c2)

Intergrantes grupo: Isidora Díaz, Natalia Gutierrez y Carlo Martínez

Como grupo estuvimos revisando C++, microcontroladores, botones y potenciómetros para entender mejor cómo funciona cada cosa y cómo se conectan entre sí cuando trabajamos con una placa.

Primero vimos un poco más de C++, que es el lenguaje que usamos para escribir el código. Repasamos cosas que ya habíamos visto en clases, como las variables, int, bool, las funciones y los if y else. Entendimos que básicamente con el código le damos instrucciones al microcontrolador para que después la placa pueda leer algo o hacer alguna acción.

También revisamos qué es un microcontrolador. Lo entendimos como la parte principal de la placa que se encarga de ejecutar el código y trabajar con las entradas y salidas que le conectemos. Por ejemplo, puede recibir la información de un botón y, dependiendo de lo que diga el código, hacer que ocurra otra cosa.

Después vimos los botones, que son más simples de entender porque tienen dos posibilidades: está presionado o no está presionado. El microcontrolador puede leer estos estados como HIGH y LOW. También vimos los conceptos de pull-up y pull-down, que sirven para que el pin siempre tenga un estado definido y no entregue valores al azar cuando el botón no se está usando.

Por último revisamos los potenciómetros. A diferencia de un botón, estos no tienen solamente dos estados, sino que el valor va cambiando dependiendo de cuánto giremos la perilla. Vimos que normalmente tienen tres patitas y que la del medio permite obtener ese valor. En Arduino esta lectura se puede hacer conectándolo a un pin analógico, por ejemplo A0, y usando analogRead() en el código.

La forma más fácil que encontramos para diferenciar los dos componentes fue pensar que un botón responde “sí o no”, mientras que un potenciómetro responde “cuánto”. Eso nos ayudó a entender mejor cómo los componentes físicos entregan información al microcontrolador y cómo después podemos trabajar esa información desde el código.

## lectura

Andrew Witt Formulations pág 11- 15

Hasta ahora entiendo que el libro analiza cómo la arquitectura se puede relacionar con distintas formas de diseño a través de geometrías, sistemas y fórmulas. Me da la idea de que Witt intenta mostrar que las matemáticas no están solo para calcular una construcción, sino que también pueden participar directamente en cómo se piensa y se genera una forma incluso vinculándolo con el lado artístico.

Cita 1: 

“I am convinced it is possible to evolve a new form of art in which the artist’s work could be founded to quite a substantial degree on a mathematical line of approach to its content.” — pág. 11

Me sorprende demasiado como plantea que las matemáticas también podrían ser parte de un proceso creativo.

“Mathematics is the majestic structure conceived by man to grant him comprehension of the universe. It holds both the absolute and infinite, the understandable and the forever elusive.” - pág 13

Me gusta cómo expresa que las matemáticas son una forma de comprender el mundo. Aunque nunca las he entendido demasiado, igual siento que son una parte vital de cómo se forma y se organiza todo.




