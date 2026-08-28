# sesion-03a

## apuntes sesión


Partimos viendo breadboard, tarjeta SD, botones y caimanes.

Elegir poeta como grupo para el viernes 03b. No Neruda.


Pantallas:


las patitas tienen que ir perpendiculares a la mitad del breadboard.

SCL = signal clock
SDA = signal data

esas dos son las más difíciles de ubicar/conectar.

Nuestra pantalla: 128 x 32, I2C, Adafruit SSD1306.


Libraries / bibliotecas:


instalar Adafruit SSD1306 2.5.17.

usar la de Adafruit porque tiene más probabilidad de funcionar bien. +1000 estrellas, +200 forks.

#include = traer otro archivo/código para poder usarlo acá.

#else = opción contraria al if. if si, else es si no basically


Proyecto:


documentar palabras + visual.

investigar referentes.

Para la pantalla pensamos que el poema podría partir más tranquilo y después ir subiendo en intensidad.



Ideas generales:


aparición lenta / rápida

texto grande / pequeño

izquierda a derecha / derecha a izquierda

zoom en algunas palabras

acumulación de texto

pantalla vacía en pausas

algún dibujo simple en píxeles

No hacer una animación distinta para cada línea porque sería demasiado. Mejor repetir algunos movimientos según el tono.

También pensamos que algunas frases podrían moverse según la acción que dicen, por ejemplo algo que gira, algo que aparece de golpe o una palabra que quede sola y grande.

Falta ver qué de todo eso realmente podemos hacer sin complicarnos demasiado.

## encargos

## lectura pag 1-15
En estas páginas ya entra más de lleno a explicar qué entiende el autor por poesía digital y por qué le interesa mirar hacia atrás para estudiarla. Algo que me quedó súper claro es que insiste en que la poesía digital no nació con Internet ni con la WWW, sino que muchas de sus bases ya se estaban formando décadas antes. De hecho, usa la idea de una especie de “prehistoria” de la poesía digital para referirse a esas obras anteriores a que el género estuviera más establecido.

También habla de que la tecnología no necesariamente reemplaza formas anteriores de poesía, sino que muchas veces toma ideas que ya existían y las lleva a otro medio. Por ejemplo, relaciona la poesía digital con poesía concreta, poesía visual, dadaísmo, modernismo y otras formas experimentales. Me llamó la atención porque entonces varias cosas que parecen súper propias de lo digital, como mover las palabras, romper el orden normal del texto, combinar fragmentos o hacer que el lector tenga que decidir cómo leer, en realidad tienen antecedentes mucho más antiguos.

Un ejemplo importante es Mallarmé y *A Throw of the Dice Never Will Abolish Chance*. El autor lo usa para mostrar cómo ya existía una preocupación por distribuir el texto de una manera distinta en la página, usando espacios, tamaños y posiciones como parte del poema. Después la poesía digital toma algunas de esas ideas, pero puede agregar movimiento, interacción o elementos que van cambiando.

También vuelve a aparecer la generación de textos por computador. Menciona programas escritos en lenguajes como BASIC, TRAC, FORTRAN y APL, que podían generar o reorganizar textos. Acá entendí mejor que no se trataba solamente de hacer que el computador escribiera cosas aleatoriamente porque sí, sino de trabajar con reglas, bases de palabras y combinaciones previamente definidas. Aunque el resultado pueda variar, igual existe una estructura que alguien tuvo que programar.

Otra cosa que aparece harto es la idea de fragmentación. Varias de estas obras toman palabras o textos que ya existen, los separan y los vuelven a organizar de otras maneras. El autor conecta esto con técnicas que ya estaban presentes en movimientos como el dadaísmo o en escritores modernistas, solo que ahora el computador permite automatizar o multiplicar esas combinaciones.

Después aparece la poesía cinética, donde el texto ya no está solamente fijo en una página, sino que puede moverse o transformarse en el tiempo. Esto me hizo pensar que lo “digital” no necesariamente está solo en haber usado un computador para producir el poema, sino también en las posibilidades nuevas que aparecen para leerlo y experimentarlo.

También habla de hipertexto e hipermedia. Ahí el texto deja de tener necesariamente un solo recorrido lineal, porque puede estar compuesto por distintos fragmentos conectados entre sí. El lector tiene que ir haciendo conexiones y tomando ciertas decisiones para construir el recorrido. Igual el autor aclara que eso no significa automáticamente que el lector pase a ser el autor, pero sí cambia bastante la forma tradicional de leer.

Una idea que se repite es que la poesía digital es súper amplia y que no existe una única forma que la defina. Puede ser texto generado por computador, poesía visual, cinética, hipertexto, multimedia, etc. Por eso el autor parece estar más interesado en encontrar relaciones y antecedentes entre todas estas formas que en intentar poner una definición demasiado cerrada.

### Citas

“Digital poetry is an evolving process” (p. 1).

“The dawning of the WWW [...] is a significant point of demarcation” (p. 7).

### Cosas que me quedaron

Me sigue llamando la atención que muchas cosas que yo pensaba que nacieron directamente con Internet en realidad vienen de experimentos anteriores con poesía visual, combinatoria y computadores.

También me quedó dando vueltas qué tanto tiene que cambiar una obra para que realmente sea algo nuevo y no solamente una versión tecnológica de una forma que ya existía.

Siento que estas páginas también responden un poco a mi pregunta anterior de cuándo un experimento tecnológico pasa a ser poesía digital. Al menos por lo que voy entendiendo, no depende solamente de usar un computador, sino de cómo esa tecnología participa en la construcción o la formadel poema.
