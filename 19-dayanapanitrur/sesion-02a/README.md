# sesion-02a

## apuntes sesión

* Manuela Infante (teatro chileno)

* Trabajar en destruir la superficiallidad

la primera mitad de la clase se hablará de:

- teoria/pizarra potenciometros y botones

- visual studio code

- dramas github

y en la segunda mitad:

programar potenciómetros y botones

Aprenderemos a como controlar ciertos parámetros de estos componentes: 

¿qué es un potenciómetro?
algo que regula la potencia

¿qué es la potencia? rapidez con la que se usa o se transfiere la energía a lo largo del tiempo

una ecuación:

P = E / t

* no nos va a importar tanto el tiempo, sino la energía

-un circuito es un camino en el que transita corriente y la corriente es un flujo de electrones

El potenciómtro es una interfaz que si abstraemos es capaz de varear un valor de resistencia entre una constante.

Hay cierto tipo de perillas: encoders, pero no son potenciómetros.

En caso de potenciómetros de tipo A o B:

En el caso de los potenciómetros tipo A:

*Son logarítmicos

*Nuestro oído es logarítmico

*A (de audio) es una exponente, entonces:

*Para que algo suene el doble, tiene que ser 10 veces el original

*B son lineales

*Significa que en un punto u otro la resistencia varía en la misma medida.

Este semestre usaremos potenciómetros lineales.

Botones:

existen botones pulsadores (pushbutton) y temporales

-dentro de los pushbutton nos podemos encontrar con 2 tipos:

N.O. = normalmente abierto

N.C = normalmente cerrado

Para que no quemar el circuito los 5v nunca van conectados dierectamente a tierra. Para eso se utiliza una resistencia.

La lectura debe estar en un lugar variable.

Esa resistencia que está ubicada abajo del switch llegando a tierra se llama resistor "pulldown".

Y también existe el pullup, que en este caso la resistencia va hacia los 5v.

Entonces:

Pulldown: 

0: no estoy

1: estoy

Pullup:

0: estoy

1: no estoy

¿Y si se me quedó la resitencia en la casa? Existe la forma de pedirle al arduino que nos coloque la resistencia por nosotros. Gracias por evitar un incendio.

Toda esta parte electrónica es lo que entra en el primer encargo, ahora pasaremos a lo computacional:

*Voltajes de entrada análogo.

En el arduino R4

-El espacio del ANALOG IN: solo puede leer (aquí se pueden conectar los potenciómetros)

-El lado digital: puede leer y controlar

-Hay que hacernos cargo de todo lo malo que pudiese pasar. Entonces el A0 que es una variable la haremos una constante.

-Las análogas son entradas.

-El setup puede estar vacío.

-Serial.begin(); significa

-Lo que lee Serial.begin se llaman Baudios.

-La lupita que aparece en el extremo superior derecho es el serial monitor: para revisar que es lo que hace en el puerto serial. 

-Serial.print > imprime

-Serial.printlm  > iprime y salta una linea

Ahora conectando el potenciómetro:

El pin del medio se conecta al A0 para ser leído.

Un pin de un extremo va a GND

Y el otro pin del otro extremo va a los 5V

## encargos

## lectura

### - resumen

### - 2 citas

### - preguntas - referentes - material
