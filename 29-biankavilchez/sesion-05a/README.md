# sesion-05a

## apuntes sesión

corrección proyecto 1 

## encargos

## lectura

capítulo 7 

antes den enfrentarnos a la primera imagen nos mencionan el pensamiento de Robert May en base a los cálculos complejos.

sistemas dinámicos: Un sistema dinámico es algo que va cambiando con el tiempo siguiendo unas reglas

 "El comportamiento dinámico cambia totalmente si en la ecuación logística (o en cualquier función con un máximo parabólico) se introduce una discontinuidad en su máximo."

"En una conocida publicación en la revista Nature, Robert May presentó ecuaciones extremadamente simples, pero que tienen comportamientos dinámicos sorprendentemente complejos."

Por ejemplo, May estudia una regla muy sencilla:

No necesito una fórmula “monstruosa” para obtener resultados complejos. A veces, una regla muy simple, repetida muchas veces, es suficiente para generar caos y formas visualmente interesantes

pasemos a la primera imagen del libro 

$$x_{n+1} = y_n + b(1 - K y_n^2)y_n + F(x_n)$$
$$y_{n+1} = -x_n + F(x_{n+1})$$
$$F(x) = rx + 2(1-r)\frac{x^2}{1+x^2}$$

desglose de la fórmula según el libro (parafraseó)

el libro no la explica como una sola fórmula gigante, la desglosa en 2 partes:

la función base F(x)

$$F(x) = r x + 2(1-r)\frac{x^2}{1+x^2}$$

es la no-linealidad del sistema. Es una mezcla de:
*   `r x` : una parte lineal
*   `2(1-r) * x^2 / (1+x^2)` : una parte que se satura, se aplana cuando `x` es muy grande.

el parámetro `r` controla qué tan "parabólica" es la curva.

 El mapa en 2D de Gumowski y Mira

$$x_{n+1} = y_n + b(1 - K y_n^2)y_n + F(x_n)$$
$$y_{n+1} = -x_n + F(x_{n+1})$$

*   Es un mapa recursivo, el futuro depende solo del presente `(x_n, y_n)`.
*   `b` y `K` son parámetros de control. En la Figura 1, `K` está fijo en `0.05` y se barre `b` (eje X) contra `r` (eje Y).
*   El término `b(1 - K y_n^2)y_n` es un amortiguamiento cúbico. Si `y_n` se hace muy grande, el término se vuelve negativo y lo devuelve.
*   El `-x_n` en la segunda ecuación es el que hace que el mapa sea invertible y crea las formas de remolino en los bordes.

Con esta fórmula simple, variando solo `b` y `r`, se genera todo el diagrama pasando de zona estable (blanca) a zona caótica (negra).


la parte negra de arriba y de la izquierda yo creo que eso es el caos. Ahí los puntos nunca se repiten, saltan para todos lados. Es desorden puro. Arriba del todo yo veo como unas rayas blancas que caen, como una cortina, yo creo que esas son pequeñas ventanas donde por un momento el caos se ordena.

la parte blanca/beige de abajo y del centro Yo creo que eso es el orden. Ahí el sistema sí encuentra un punto fijo o un ciclo y se queda tranquilo. Se ve lisa, sin ruido.

el borde entre lo negro y lo blanco Yo creo que esta es la parte más importante. No es un corte limpio, es como si lo negro se derramara sobre lo blanco con hilos y pelitos. Yo creo que esos son los transientes, el sistema dudando si irse al caos o quedarse en el orden. Abajo del todo yo veo como una punta, como una V, yo creo que ahí es donde el sistema casi se cae del todo al orden.


