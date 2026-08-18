# sesion-02a

10-08-2026

## apuntes sesión

### Perillas y botones

- Potenciómetro
- Botones: pushbuttons (es el que haremos), toggles (este no lo haremos)

**Potenciómetro** = Resistor variable

- potencia = energía/tiempo

Para que suba la potencia podemos aumentar la energía y bajar el tiempo

En electricidad la potencia es un sub caso de la potencia es, voltaje multiplicado por corriente

adentro de voltaje hay energía y más cosas y adentro de corriente hay tiempo

Circuito es un lugar donde empiezo y vuelvo a llegar casi como un "circulito"

potenciómetro es de resistencia variable al flujo de electrones

corriente tiene que ver con número de electrones

5v - 0v (GND)

el potenciómetro es una forma de encapsular 2 resistores

para la entrega uno vamos a aprender como programar pot: R1 + R2 = constante

nuestro oído funciona de manera logarítmica y para escuchar algo el doble de fuerte tendría que ser 10 veces lo mismo para que se escuche el doble

los potenciómetros lineales son más fáciles de programar

**Los botones (pulsadores)** en inglés pushbutton - elementos temporales

N.O. = Normaly Open - Normalmente Abierto

N.C. = Normaly Conect - Normalmente conectado

- 5v es 5 volts y 3V3 es 3.3 volts Vcc
- 0V es GND

una resistencia que esté hacia abajo es un resistor de pulldown

¿Si lo a lo que le ponemos código y a al hardware le aplicamos circuitos por ejemplo como hace todo esto para reaccionar más rápido siendo que es olo arena lo que estamos moviendo?

Link para programar en Arduino: https://docs.arduino.cc/built-in-examples/digital/Button/

Link programar en Potenciómetro: https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/

### Receso

Ahora vamos a conectar un potenciómetro

### ahora vamos a programar

concepto A0 significa un número de manera simbólica pero no "A0" entre comillas porque porque es literalmente A y 0 y no se le puede poner una palabra

int es variable pero si le ponemos constant antes se vuelve constante y ya no varía por lo que no se puede cambiar

un valor para no poner uno real y que me diga si no estoy en uno colocamos un -1

cuando vemos una palabra seguida de paréntesis es una función

serial se hace en setup y no en loop, porque se haría constantemente

Serial uno a la vez en orden y lo contrario es en paralelo que es todo a la vez al mismo tiempo

El número con ciertos múltiplos y estándares son 9600 para que sea moderado

al loop le puso Serial.printLn(), lo que prende una línea

Y ahora lo que haremos (escribimos siempre de afuera hacia a dentro: función, paréntesis, comillas para que no se olvide y luego el valor interno)

###Código ejemplo

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
while es = mientras que 

! = significa lo contrario

print = imprime y no se salta la linea

printLn = imprime y luego se salta la linea

filtrarConDivision 

## encargos

1. en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.

Está listo 

2. conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.



## lectura

La lectura que escribí en la sesión 01b es la página hasta el día que leí por día hasta hoy, que sería la número 17. La voy a voler a pegar en este lugar nuevamente:

Resumen:

Estas páginas presentan una introducción al hardware de la Raspberry Pi, revisando sus principales puertos y conectores.

Se explican conexiones como Ethernet, micro USB, USB 2.0 y 3.0, además de conectores utilizados para cámaras y pantallas táctiles.

También describen el puerto AV, que permite enviar audio y vídeo compuesto a televisores, proyectores u otras pantallas mediante un adaptador TRRS.

2 Citas:

“televisores, proyectores y otras pantallas que admitan una señal de vídeo compuesto”

“un adaptador TRRS (las iniciales inglesas de punta-anillo-anillo-cuerpo)”

Pregunta:

¿Qué función específica cumple cada uno de los conectores de la Raspberry Pi y qué tipo de dispositivos puedo conectar en ellos?

Referente:

Como referente puedo considerar otras placas y dispositivos electrónicos, ya que muchos utilizan conexiones USB, Ethernet y conectores especializados para comunicarse con periféricos tal como una compu de mesa.

Esto permite relacionar la Raspberry Pi con dispositivos que ya conozco, como computadores y smartphones.

Aseveración:

La Raspberry Pi no funciona únicamente como una placa para programar, sino que cuenta con diferentes puertos y conectores que permiten conectarla con otros dispositivos, como redes, cámaras, pantallas, proyectores, televisores, sistemas de audio y periféricos USB.
