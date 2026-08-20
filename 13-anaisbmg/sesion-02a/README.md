# sesion-02a

## apuntes sesión

Potenciómetro pot perillas 0- algo (resistor variable)
	Potencia=energía/tiempo
	*voltaje tiene que ver con energía y voltaje con tiempo


![fotopote](./imagenes/fotopote.jpeg)

potenciómetro: a audio - b lineales

botón toggle (interruptor) son distintos a pushbuttons (temporales)

+ _/ _ N.O = normalmente open -> ___
+ ___N.C = normalmente conectado -> _/ _

VCC= voltaje de conexión continua
+3V3
+5V

![fotoboton](./imagenes/fotoboton.jpeg)
	
breadboard= protoboard

**analog-in** es para lo que esta definido
digital puede mutar, dependiendo de las instrucciones que se les de

botones lado digital
pote análogo a

**BIN** se le puede inyectar más energía (no lo vamos a utilizar)

**Ejercicio clases**

Arduino GND - cable - 5V - cable - (solo concecciones sin una fuente de poder) - caimanes para hacer más fáciles las conexiones - se conecta al pote (dejando la del centro solo) - A0 va conectado a la para de al medio del pote 

![arduino](./imagenes/arduino.jpeg)

int patitalectura = A0;

const - constante

serial.begin (n) --> cantidad de mensajes (símbolos - baulios)

const int patitaLectura = A0;

int valorLectura = -1;

```cpp
void setup() {

Serial.begin (9600);

}

void loop() {
  valorLectura = analogRead(patitaLectura);
  Serial.println(valorLectura);
}
```

Código oficial:
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

un valor mínimo de 0
valor medio 
un valor máximo de 1023
2 elevado a 10 (0 a 1023)
los números importan dentro de un contexto 
10 bits

int 1/4= 0,25 al ser int debe ser un numero entero, entonces en este caso es 0

utilizamos: 
[botonDigital](https://docs.arduino.cc/built-in-examples/digital/Button/)
[analogoSerial](https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/)

## encargos

## lectura
