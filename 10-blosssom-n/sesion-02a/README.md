# sesion-02a

## apuntes sesión


No estuve en esta clase, así que para ponerme al día revisé los apuntes del profe y de algunos compañeros. Esto es lo que entendí de lo que se trabajó.


Potenciómetro: entendí que es una resistencia que puede variar manualmente al girar una perilla. A diferencia de un botón, que funciona más como sí/no, el potenciómetro puede entregar varios valores intermedios.


Tiene tres patitas. Las dos de los extremos se conectan a alimentación y tierra y la del medio se usa para leer el valor que va cambiando.


En Arduino esa lectura se puede hacer desde un pin como A0 usando:


```
analogRead()
```


La idea es que mientras giramos la perilla, el valor que recibe la placa también va cambiando.


También vi que existen potenciómetros tipo A y tipo B. Los tipo A se usan más en audio y su cambio no es lineal. Los tipo B son lineales, por lo que el cambio va siendo más parejo.


Botones / pushbuttons: trabajan más como una entrada digital porque básicamente tienen dos estados.


```
presionado / no presionado
1 / 0
HIGH / LOW
```


También aparecieron los conceptos Normally Open y Normally Closed.


Normally Open significa que cuando nadie presiona el botón el circuito está abierto.


Normally Closed funciona al revés, normalmente está conectado y al presionarlo puede cortar esa conexión.


Pull-up y Pull-down: esta parte me costó un poco más, pero lo entendí como una forma de evitar que la lectura del botón quede indefinida cuando nadie lo está presionando.


En un pull-down, cuando el botón no está presionado la lectura queda en 0 y al presionarlo puede pasar a 1.


En un pull-up funciona al revés, normalmente queda en 1 y al presionar puede pasar a 0.


La resistencia ayuda a que ese valor sea estable y no quede “flotando”.


Breadboard / protoboard: sirve para conectar componentes sin tener que soldarlos directamente.


Algo que se repitió harto en los apuntes fue ordenar bien los cables para no confundirse.


```
rojo = alimentación / VCC
negro = tierra / GND
otro color = señal o lectura
```


El ejemplo que más apareció fue el del potenciómetro conectado al Arduino y leído desde A0.


```
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


Lo que entendí de ese código es que:


```
const int patitaLectura = A0;
```


deja definido que vamos a leer desde A0. Se usa const porque esa referencia no debería ir cambiando.


Después:


```
int valorLectura = -1;
```


crea una variable donde se va a ir guardando la lectura.


En loop:


```
valorLectura = analogRead(patitaLectura);
```


la placa lee el valor que está llegando por A0 y reemplaza valorLectura por ese nuevo número.


Después:


```
Serial.println(valorLectura);
```


manda ese número al computador para poder verlo.


Como está dentro de loop, esto se repite constantemente, entonces al girar el potenciómetro deberían ir apareciendo distintos valores.


Serial: entendí que sirve para comunicar la placa con el computador.


```
Serial.begin(9600);
```


inicia esa comunicación a una velocidad determinada.


También vi la diferencia entre:


```
Serial.print()
```


y


```
Serial.println()
```


print escribe y sigue en la misma línea, mientras que println escribe y después salta a la siguiente.


También apareció:


```
while
```


que significa más o menos “mientras que”.


Y:


```
!
```


que se puede entender como “no” o “lo contrario”.


Entonces:


```
while (!Serial) {
}
```


sería algo como: mientras no esté lista la comunicación Serial, espera.


Después de revisar todo, siento que esta sesión conecta mucho más el código con cosas físicas. Hasta ahora había visto variables, funciones o if de una forma más abstracta, pero con botones y potenciómetros se entiende mejor que una variable también puede guardar algo que está pasando realmente en un circuito.



componente físico

↓

la placa lee algo

↓

el código guarda ese valor

↓

el programa puede hacer algo con él




El botón entrega una información más de sí/no, mientras que el potenciómetro permite trabajar con un valor que va cambiando.



## encargos
encargo02a:

en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.
![pantallazo de workflows activos](./imagenes/pantallazo-workflow.png)
conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.


Estudio conjunto: C++, microcontroladores, botones y potenciómetros

Como grupo hicimos una revisión general de C++, microcontroladores, botones y potenciómetros, tratando de entender cómo se relacionan entre sí antes de empezar a usarlos en ejercicios más complejos.

Vimos que C++ es el lenguaje con el que podemos escribir las instrucciones que después ejecuta el microcontrolador. Ahí aparecen cosas que ya hemos ido viendo como variables, int, bool, funciones, if y else. El microcontrolador sería la parte que recibe ese código y permite que la placa haga algo con él, por ejemplo leer una entrada o responder de alguna forma.

También revisamos los botones, que funcionan como una entrada más simple porque trabajan con dos estados. Dependiendo de cómo esté conectado, el microcontrolador puede leer si está presionado o no, usando valores como HIGH y LOW. Dentro de esto también aparecieron las configuraciones pull-up y pull-down, que sirven para que el pin tenga un valor claro cuando el botón no se está presionando y no quede con una lectura indefinida.

Con los potenciómetros la lógica cambia un poco, porque no se trata solo de dos estados. Al girar la perilla, la lectura puede ir cambiando gradualmente. Vimos que normalmente tienen tres patitas: dos asociadas a alimentación y tierra, y una central que se usa para obtener la lectura. En Arduino, por ejemplo, esa lectura se puede conectar a un pin analógico como A0 y obtener con analogRead().

Lo que más nos ayudó a ordenar la diferencia fue pensar que el botón responde algo más parecido a “sí o no”, mientras que el potenciómetro responde más bien “cuánto”. Con eso empezamos a entender mejor cómo el código, el microcontrolador y los componentes físicos se conectan entre sí dentro de un mismo sistema.



## lectura
Las primeras diez páginas que leí eran más que nada el foreword del libro y después empieza una cronología de obras de poesía digital entre 1959 y 1995. Al principio habla harto de que ni siquiera es tan fácil definir qué es poesía digital, porque eso también lleva a preguntarse qué hace que un poema sea un poema.

Después la cronología muestra varios ejemplos súper antiguos de gente experimentando con computadores, textos automáticos, poemas visuales, videos y cosas así. Me llamó la atención porque yo asociaba la poesía digital a algo mucho más actual, pero acá ya aparecen experimentos desde 1959.

Busqué algunos títulos que aparecían, como Stochastische Texte de Theo Lutz y Tape Mark I de Nanni Balestrini, porque no cachaba para nada qué eran y me dio curiosidad ver cómo se veían o cómo funcionaban; según lo que encontré, Stochastische Texte usa un computador para generar frases a partir de un conjunto de palabras tomadas de textos de Kafka, combinándolas de forma aleatoria mediante un sistema de números, y Tape Mark I es un poema generado por computador que trabaja con permutaciones y combinaciones de palabras para producir múltiples variaciones del texto.


Citas

“The definition of digital poetry remains up for grabs.” (p. xv)

“Funkhouser considers digital poetry as flexible, indeterminate, and perhaps infinite in scope.” (p. xvi)
 

Cosas que me quedaron

 ¿En qué momeno deja de ser un experimento con tecnología, pasando a ser poesía digital?
 ¿Si un computador está generando el texto, quién sería realmente el autor?
 Se me hace súper loco pensar que ya existían estas cosas en los 50 y 60, porque yo lo asociaba demasiado a Internet o a cosas mucho más nuevas.
