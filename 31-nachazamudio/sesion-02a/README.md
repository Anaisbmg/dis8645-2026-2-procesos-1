# sesion-02a

## apuntes sesión

POTENCIÓMETRO Y BOTONES

Push buttons, no usaremos toggles. 

Potenciómetros(resistor variable): regula la potencia de algo, variando la resistencia. 

Potencia: energía/tiempo.

En electricidad, la Potencia: Voltaje x Corriente. energía → voltaje y Corriente → tiempo. La corriente tiene que ver con el flujo de electrones.

El potenciómetro le pone resistencia al flujo de electrones. 

El resistor se divide en dos partes R1 Y R2, donde podemos dividirlo en cualquier parte con la perilla, dejando una resistencia más grande al comienzo o al final, o la misma en ambas partes. R1 + R2 siempre será constante, solo se divide la resistencia en dos partes. 

tiene tipo A Y B, donde a es de audio que trabaja con logaritmos,  y b son lineales. USAREMOS LOS B.

botones: pulsadores/push button, son temporales, al presionarlos abre el camino del flujo. 

toggles: mantienen su estado

En el inicio de nuestro arduino, no puede tener valor 0,  ya que al llegarle el voltaje por medio de nuestro botón, hace un corto circuito. Para ello, podemos usar un resistor entre el botón y nuestro arduino para bajar el flujo de electrones que trae y así amortiguar el voltaje. En este caso el resistor es de PULLDOWN, ya que baja el flujo, lo tira abajo. Así permite que el voltaje en el inicio sea 0.
1(activar botón: activarlo, pasa la corriente. 0(circuito abierto): apagado

En otro caso, al poner el resistor antes del botón, baja la corriente antes de abrir o cerrar el circuito. resistor PULLUP, y al cerrar el circuito(activar el botón) el circuito queda en 0V y se “desactiva la función”, 1(activar el botón): desactivado. 0(circuito abierto): activado.

POTENCIÓMETRO:
![icono de potenciometro](./potenciometro-icono.png)

1.VCC

2.LECTURA

3.GND


Vcc. voltaje de corriente continua

N.O: normally open, abierto y el electrón no puede circular, 

Encoders: otras perillas, codificadores, de giro infinito.


## encargos

## lectura
