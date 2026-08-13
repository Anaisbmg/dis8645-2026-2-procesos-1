# sesion-01a

## apuntes 11/08

maneras de referirnos a los siguientes símbolos:

+ murciélago -> ``{}``
+ corchete -> ``[]``
+ paréntesis -> ``()``

---

### libro para el semestre omg

Aarón nos dijo que para este semestre tendremos que leer un libro por persona, por lo que nos indicó a las primeras dos filas a retirar un libro de los tantos que tenía en la mesa de en frente. la verdad no conocía ninguno, pero me llamó la atención el libro llamado "_Program Or Be Programmed - ten commands for a digital age_", escrito por Douglas Rushkoff e ilustrado por Leland Purvis ya que me dio risa el título el cual asumo que es una referencia al "ser o no ser" de Hamlet.

cuando ya escogimos los libros, Aarón nos explicó que estos serán parte de los encargos en los cuales cada martes debemos escribir un resumen de lo que leímos incluyendo dos citas del libro, siendo una página el mínimo de lectura por día para así leer un mínimo de 100 páginas al semestre (idealmente terminar el libro, pero eso ya es decisión de cada uno).

---

### GitHub

Aarón enseñó de manera rápida el cómo se utilizará GitHub, y cómo trabajar en las carpetas de cada uno utilizando la carpeta de Magdalena como ejemplo. al crear la carpeta de Magda, Aarón explicó cómo agregar cambios dentro del ``README.md`` y cómo agregar imagenes, las cuales se agregan dentro de la carpeta de imagenes y para poder añadirlas al README.md se hace de la siguiente manera: ``![AltText](./imagenes/nombredeimagen.jpguotroformatolol)``

para poder trabajar dentro de tu propia carpeta, Aarón explicó cómo crear un fork para poder editar con tu propio trabajo y apuntes, el cual se hace de la siguiente manera:

1. ir al repositorio del taller para la primera parte de este semestre, el cual es ``dis8645-2026-2-procesos-1`` y se puede encontrar en el siguiente link: <https://github.com/disenoUDP/dis8645-2026-2-procesos-1>
2. hacer click en donde dice ``Fork``
3. no cambiar nada, y hacer click en el botón verde que dice ``Create Fork``

> responsabilidad emocional y responsabilidad computacional:)

---

### ejercicio en clases: cosas constantes y variables que tiene el ascensor 

constantes:

+ tiene puertas
+ viaja en el eje ``Z`` (pero uno puede ingresar a este por el eje ``X`` o ``Y``)
+ tiene botones
+ puede parar
+ suena
+ tiene sensores

datos internos que maneja (según ascensor seleccionado , el cual fue el ascensor del lugar en donde vive Bombobby):

> esta información es inferida!! todo basado en observaciones que ha tenido Bombobby durante el tiempo que ha vivido ahí:)

+ distancia entre pisos (cuánto tiene que viajar)
+ cantidad de pisos
+ selección de ascensor al más próximo al piso en el que se solicita mediante la botonera de llamada
+ si pasa una cantidad determinada de tiempo (5 min aprox), el ascensor baja a la planta (piso 1) de manera automática 
+ prioridad de llamada dependiendo del sentido en el que desean viajar los usuarios y la cercanía que tiene el ascensor
+ tiempo de espera que tienen las puertas para mantenerse abiertas

variables:

+ cantidad de botones
+ orden de botones
+ tipos de botones auxiliares
+ limite de peso
+ velocidad en la que viaja

gracias a estas variables, se pueden hacer acciones (funciones), como por ejemplo:

``
if (EstoyEnUnPiso){
AbrirPuerta();
}
``

el que tenga un ``();`` quiere decir que esto es una acción, como por ejemplo:

``SonarAlarma();``

---

## encargos

encargo 01-a:

autorretrato: describir variables y funciones de ustedes.
investigar pantallas de segmentos, tomar fotos, documentar contexto, lugar, ubicación, alfabetos posibles, usos, comparar entre resultados encontrados, al menos 3 ejemplos distintos. https://en.wikipedia.org/wiki/Segment_display

---

## lectura


