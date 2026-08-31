# sesion-02a

## apuntes sesión

![rasberry pi pico 2 pinout](./imagenes/pico-2-r4-pinout.svg)

<https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#layout_non-wireless>

ojo con agregar a mano hardware_adc para que quede así en Cmakelists.txt

```txt
# Add the standard library to the build
target_link_libraries(ej_pico_pote
        pico_stdlib
        hardware_adc)
```

### grupos

haremos grupos de la siguiente manera:

8 grupos de 3 personas
2 grupos de 4 personas

### apuntes SebastianSaez1003

Hoy partimos hablando sobre algunas de las lecturas que se hicieron durante la semana pasada.

existen los:

potenciómetros (resistor variable), que normalmente tienen una perilla y tres cosos. Es una interfaz que permite encapsular 2 resistores, el cual permite tener cualquier valor entre los dos extremos.

botones, se presionan y entran en contacto. Por ahora hablaremos de los push buttons. 

¿Qué es la potencia?

creemos a veces que es energía y se nos olvida que también corresponde al tiempo que transcurre hacia adelante.

la potencia eléctrica es voltaje multiplicado por corriente.

dentro del voltaje hay energía, dentro de la corriente hay tiempo.

los circuitos son un espacio donde circulan los electrones.

la corriente es un flujo de electrones.

los encoders son algo que se puede entender como un potenciómetro de giro infinito, se ocupan tan poco que no se han traducido al español aún, no son potenciómetros.

nuestra percepción no tiene nada que ver con la realidad.

existen dos tipos de potenciómetros, A de audio, B de lineal.

nunca hay que decir solo un botón, tiene que tener su apellido para declarar correctamente al que se está refiriendo, los push buttons son elementos temporales que solo están activos cuando tienen presión, los toggles son aquellos que cuando se interactúa con ellos se mantienen en ese estado (como se podría entender un botón de la luz de la sala de clases).

vcc Voltaje de corriente continua de alimentación.

GND 0 volts.

### Vuelta del break

se repartieron materiales para poder subir un código funcional para cada placa, primero vamos a partir con los ejemplos de Arduino.

primero tenemos que establecer cuál va a ser la patita en donde se va a poder leer un potenciómetro, le dejaremos para empezar el A0, que no va a cambiar, así que le vamos a asignar que es una const (constante) int (numérico). También tiene que existir un valor que va a ser medido, pero este si va a cambiar mediante una interacción, así que no será const.

Serial es uno a la vez, no paralelo.

9600 significa algo terrible, son la cantidad de mensajes por segundo. la mayoría de ejemplos ocupan ese número debido a que es algo moderado.

115200 es la velocidad que se transmite Midi.

Hay que trabajar muy fungi, muy resiliente toda la subida de archivos.

Algunas de las maravillas que se buscaron en internet en la clase de hoy:

- Manuela Infante (la Messi del teatro chileno)

- Martin Gubbins (ve el derecho como material artístico) tiene sus libros disponibles en su página web en formato PDF de manera totalmente gratis.

## encargos

encargo02a:

1. en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.
2. conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.

## lectura
