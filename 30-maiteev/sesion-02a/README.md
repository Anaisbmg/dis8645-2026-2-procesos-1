# sesion-02a

## apuntes sesión
2026-08-17

Manuela Infante 

**Potenciometros y botones:**

Push buttons

Toggles


# 1. Potenciómetro:

- Regula la potencia de algún objeto. resistencia variables.

- Es una interfaz es una forma de encapsular.


- Existen 2 tipos de potenciómetros donde tienen letra A o  B.

- Los A son de audio y los B son lineales. 

- No comprar los tipos A.
 
- Subiendo energía y bajando el tiempo se genera potencia.

- Potencia= voltaje x corriente 

- Dentro del voltaje hay energía y dentro de la corriente hay tiempo.

- Que hace un resistor: hace que el electrón pase. 

- Se pueden definir los volts.

**Potenciómetro**
1: se conecta al voltaje

2: lectura

3: tierra


# 2.Botones/ Pushbutton

- Son temporales.

- No guardan información a largo plazo.

- N.O= normally open.

- Si nadie lo está presionando, significa que está abierto.

- RESISTOR, PULLDOWN, PULLUP

- vcc, cuando no esta conectado, 1: no toy / 0:toy

- Siempre hacer primero en papel lo que quieres hacer.

**Botón**
Cable negro: se ocupa para tierra 

Cable rojo: Volts

Breadboard/Protoboard: 
Tabla blanca 

Contiene alerones en las orillas. Impone voltajes

0: ausencia / 1: presencia


# 3. Arduino

-no usar vin

-+3V3 +5V: alimentan

-analog in: solo puede leer, no escribir, conectar potenciometro.

-digital (pwm-): salida digital de audio y botones.


-Conectar un cable a gnd 


-const int: no se puede cambiar 

-prohibido poner en loop 
```cpp 
Serial.begin();
```

-El puerto USB es serial 


```cpp
Serial.begin(9600);
```
-El número es es la velocidad de 9600 mensajes x segundos 

-Al poner el codigo se puede variar del 0 al 1023 

-10 bits  2 elevado a 10

-bang: !

while 

serial.println el ln ordena 




del 0 al 3: vale 0

del 0 al 4: vale 1

y así sucesivamente 




## encargos

## lectura
