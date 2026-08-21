# sesion-02a

## apuntes sesión


Análisis de lecturas Ir a ver a Manuela Infante por dos décimas

###Potenciómetros y botones

Los potenciómetros son como perillas (un círculo con tres patitas). Los botones o pushbuttons.

¿Qué es un potenciómetro? o como dice el profe dicho resistor variable, (potencia=energía/tiempo), para que la potencia suba hay que subir la energía y bajar el tiempo. En electricidad potencia= voltaje x corriente, dentro de estas variables hay características en común por ende se asemejan y se pueden comparar. Los potenciómetros nos sirven para medir la potencia.

En un circuito va a transitar un electrón. Un potenciómetro el profe hace un ejemplo con la puerta del paso del electrón. El resistor “cansa” al electrón, mientras más grande es la resistencia… Lo que hace un potenciómetro es una interfaz o forma de encapsular dos resistores.

![ejemplo1](./imagenes/resistor.jpeg)
![ejemplo2](./imagenes/100k-100.jpeg)

La patita 2 nos permite tener una variable. R1+R2 es una constante, básicamente distribuye la carga de un sonido por ejemplo. Los potenciómetros giran alrededor de un rango (tienen un final y inicio) y los encoders son perillas de giro infinito. Los potenciómetros A de audio y B lineales, Los A son exponenciales y funcionan en logaritmos, los B son constantes.

![ejemplo patita2](./imagenes/patita2.jpeg)

Botones o pulsadores o pushbutton, los interruptores de luz son donde el impulso permanece, los botones son temporales. En un circuito abierto el electrón no puede transitar. En un circuito no podemos conectar 5V a tierra porque ocurre un cortocircuito.

-N.O : normalmente abierto 
-N.C : normalmente conectado

![normalmente abierto](./imagenes/normalmente-abierto.jpeg)

NC cuando hacemos una acción de apretar, desconectamos y cuando lo soltamos conectamos, no se suele usar. 
-Vcc voltaje alto (ej:5V) 
-GND: tierra 
La lectura del resistor desconectado es aproximadamente 0V, al conectarse. Un resistor de pulldown. Nos permite que la lectura sea siempre 0 excepto cuando esta cerrado.

Resistor pullup va de Vcc en un circuito N.O. a tierra, con un resistor antes de esto y la lectura será igual a Vcc porque el electrón se “cansa” en ese recorrido.

![pull up](./imagenes/pullup.jpeg)
![pull down](./imagenes/pulldown.jpeg)


ejemplo:

![ejemplo1](./imagenes/ejemplo1-boton-resistencia.png)

Breadboard o protoboard (en Chile) En la entrada se conecta con cable 5V por ejemplo y eso alimenta los puntos (barras) Los botones tienen 4 patitas pero podrían tener solo dos, los botones se dividen por hemisferios.

El cable rojo seria por ejemplo 5V, llega a la patita del botón y el otro hemisferio debe llegar a tierra entonces hay que poner un amortiguador que es la resistencia que luego conecta al cable negro que esta a tierra. Es una resistencia pulldown porque al presionar llega el electrón a tierra. El cable verde es la lectura ,

0: ausencia 1: presencia (presionar)

![proto abierta](./imagenes/protobot-abierta.png)

(protobot abierta)

![proto abierta](./imagenes/ejemplo2-boton-resistencia.png)

rojo voltaje negro tierra amarillo lectura

Usar 5V porque funciona en todas. El lado Análogo In nos permite leer. Digital PWM. el lado digital para botones y el lado análogo para potenciómetros. Encontrar el GND que está en power, a cable verde, cable rojo a 5V, cable morado a A0, cable verde y rojo en las orejas del potenciómetro, y el morado en la nariz (centro)

const para indicar que es una constante 
0 es un valor 
-1 es que no hay nada 
setup puede estar vacío (entradas y salidas) 
loop palabra y paréntesis es una función: 

valorLectura = analogRead(); Serial.begin(9600); para prenderse va en setup 9600 baudios mensajes por segundo while significa mientras que, si ponemos una condicion que nunca ocurre ! significa lo contrario de… println imprime y saltate a la otra linea print imprime todo seguido

---
##encargos

![actions](./imagenes/actions.png)


Grupo: Santiago Cifuentes, Nicolás Valdés Y Francisca Palma. Nos dividimos la información en microcontroladores, botones y potenciómetro, C++ respectivamente.

C++
Es un lenguaje de programación el cual fue diseñado en el año 1979 y su intención era agregar programación orientada a objetos, en ese sentido, es un lenguaje hibrido, nació como una extensión del lenguaje de programación C y es multiparadigmas, es decir, se puede resolver un problema de muchas maneras.

El nombre «C++» fue propuesto por Rick Mascitti en el año 1983, cuando el lenguaje fue utilizado por primera vez fuera de un laboratorio científico. Antes se había usado el nombre «C con clases». En C++, la expresión «C++» significa «incremento de C» y se refiere a que C++ es una extensión de C.

La diferencia de C con C++ es que C es un lenguaje de programación de propósito general, en cambio, C++ es un lenguaje multiparadigmas el cual sirve para distintos propósitos, siendo la programación orientada a objetos su propósito más usado

Una de sus mayores características es la agrupación de instrucciones la cual consiste en agrupar varias líneas de código en un solo bloque de código.

ejemplo:

![ej](./imagenes/ejemplo1-c.png)

La definición de funciones es igual que en C, salvo por la distinción de que si main no va a recoger argumentos, basta con no ponerlos, a diferencia de C, donde, por seguridad, hay que explicitarlo usando la palabra clave void (int main(void)).[3] El símbolo << se conoce como operador de inserción, y en este caso, está enviando a cout el texto Hola mundo! para que lo imprima en consola.

a continuación se ve un ejemplo de un codigo simple de C++ que imprime “Hola mundo!”:

![ej](./imagenes/ejemplo2-c.png)

Tipos de datos

En C++ podemos encontrar distintos tipos de datos

Caracteres: char (también es un entero), wchar_t Enteros: short, int, long, long long Números en coma flotante: float, double, long double Booleanos: bool Vacío: void Según la máquina y el compilador que se utilice, los tipos primitivos pueden ocupar diferentes tamaños en memoria. La lista a continuación ilustra el número de bits que ocupan los distintos tipos primitivos en la arquitectura x86.[5]Otras arquitecturas pueden requerir distintos tamaños de tipos de datos primitivos. C++ no dice nada acerca de cuál es el número de bits en un byte, ni del tamaño de estos tipos; más bien, ofrece solamente las siguientes «garantías de tipos»:

En esta pagina se aprender mas sobre programacion y base de datos, se pueden realizar ejercicios y aprender algoritmos y estructuras de codigo: https://www.w3schools.com/cpp/default.asp

##lectura



