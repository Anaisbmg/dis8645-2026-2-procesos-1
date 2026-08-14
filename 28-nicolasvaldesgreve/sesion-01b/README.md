# sesion-01b

## apuntes sesión

hoy no traje computador ya que hoy tengo que hacer muchos viajes y no quiero andar con dolor de espalda por el peso de mi pc #comprender. para poder tomar apuntes de manera más rápida, pedí prestado un computador del LID y me lo llevé a la sala de República 180:) todo iba bien hasta que me di que no podía conectar el cargador del computador a corriente ya que necesitaba un adaptador... fui a buscar uno al LID y no pillé uno que le sirviera al cargador:( le hablé a Emi (gracias emi por tanto, perdón por tan poco) y me dijo que vea en la mochila que estaba en el cajón debajo de las impresoras 3D, en donde encontré un cargador que me servía para poder conectar sin necesidad de usar un adaptador!! la vida es buena.

aarón, emi y seba hicieron una coreografía para que logremos entender la cantidad de valores posibles que se pueden hacer con 3 bits.. me emocioné, fue hermoso. la cantidad de variables posibles son 7, partiendo del 0.

int8_t -> 8 bits, con signo
uint8_t -> 8 bits, sin signo (como ej, para contar el tiempo ya que no existe la hora negativa)

---

## instalación de softwares!!

#### Arduino

en www.arduino.cc -> productos -> software -> Arduino IDE

agregar en boards manager: Arduino UNO R4 Boards

arduino es un fork de wiring, ya que el advisor de su tesis le robó la idea lol

para la entrega, al subir el archivo del código hay que subir la carpeta completa junto con el archivo .ide que se llama igual a la carpeta para poder mostrar cuál es el archivo correcto.

setup = configuración (coreografía 
setup() = secuencia de instrucciones para que sucedan cosas, o coreografía
las funciones también tienen que tener un tipo

funcion tipo int = el resultado es un numero entero
funcion tipo void = no expulsa como respuesta un valor

para que algo exista hay que declararlo. para declarar la función setup se hace de la siguiente forma:

```cpp
void setup() {
  // aquí va setup(), ocurre solo una vez y es al inicio

}
```

+ está prohibido hacer una línea de código sin comentar qué es lo que esa líena va a hacer, razón por la que trabajaremos con pseudocódigo.

luego va el loop, el cual ocurre después de setup() y se repite hasta que ya no pueda repetirse más.

```cpp
void loop() {


}
```

{ = desde acá
} = hasta acá

## encargos

## lectura
