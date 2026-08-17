# sesion-01b

### tragedia al inicio de la clase (es una exageración, todo salió bien)

para esta clase no traje mi computador ya que hoy tengo que hacer muchos viajes, y la verdad no quiero andar con dolor de espalda por el peso de mi pc (aparte de que ando llevando 6 kilos de cerámica en mi mochila (ayuda)).

para poder tomar apuntes de manera más rápida, pedí prestado un computador del LID y me lo llevé a la sala de República 180 en donde tenemos la clase de taller:) todo iba bien hasta que me di cuenta de que no podía conectar el cargador del computador al enchufe de la corriente ya que necesitaba un adaptador, por lo que volví a Salvador Sanfuentes para buscar un adaptador que me sirva en el LID, lo cual salió mal ya que no encontré ninguno que sirviera LOL (probablemente busqué mal, ya que estaba medio desesperado y no estaba pensando muy bien). como no encontraba nada, le hablé a Emi por discord para pedirle ayuda (gracias emi por tanto, perdón por tan poco) y me dijo que vea en la mochila que estaba en el cajón debajo de las impresoras 3D, en donde encontré un cargador que me servía para poder conectarme a corriente sin necesidad de usar un adaptador!! la vida es buena.

---

## apuntes 14/08

al hablar del encargo que se había dejado la clase pasada (autorretrato), se nos volvió a explicar qué son las funciones y qué son las variables, en donde se nos explicó que las variables de tipo entera usan más de un bit de información! como se nos explica en <https://disenoudp.github.io/apuntes-maquinas/>, pág. 56, la cantidad de valores posibles con bits (en donde los símbolos posibles son dos, estos siendo _0_ y _1_) sigue la ecuación de:

``valores posibles = 2^número de símbolos usados``

Aarón, Emi y Seba hicieron una coreografía para que logremos entender la cantidad de valores posibles que se pueden hacer con 3 bits… me emocioné, fue hermoso. la cantidad de valores posibles son 8, eso es contando desde 0-7.

dentro de <https://disenoudp.github.io/apuntes-maquinas/> también se nos menciona una tabla en donde se muestra la importancia de usar prefijos al momento de usar variables enteras, ya que así uno puede indicar el tamaño en bits y si esta usa signo o no:

| tipo de variable | tamaño en bits|
| :---: | :---: |
| int8_t | 8 bits, con signo |
|uint8_t | 8 bits, sin signo (como ej, para contar el tiempo ya que no existe la hora negativa)|

#### ¿el _=_ en programación tiene el mismo significado que en matemáticas?

no!! en programación, el signo _=_ no se utiliza para decir que algo es igual a otra cosa, sino que se utiliza para asignarle valor a una variable, mientras que el _==_ en programación es para comparar

#### fuente:

+ <https://www.lenovo.com/gb/en/glossary/equal/> (en realidad esto fue para recordar, pero esta info la dijo Aarón en clases lol)

---

## instalación de software!!

#### Arduino IDE

este semestre trabajaremos con microcontroladores, en los cuales inyectaremos código mediante Arduino IDE el cual debemos instalar siguiendo estos pasos:

1. ir a la página de Arduino (<https://www.arduino.cc/>) y hacer click en donde dice ``Products``

![screenshot de página de Arduino](./imagenes/arduinocc.png)

2. dentro de la sección ``SOFTWARE``, hacer click en donde dice ``Arduino IDE``

![screenshot de los productos que ofrece la página de Arduino](./imagenes/products.png)

3. bajar hasta donde dice ``Arduino IDE 2.3.10``

![screenshot de dónde se encuentra la versión de Arduino IDE que buscamos](./imagenes/arduino-ide.png)

4. seleccionar la opción que se adapte a tu pc y luego presionar ``DOWNLOAD``

![screenshot download Arduino IDE](./imagenes/download.png)

5. una vez ya lo instalemos, dentro del software tenemos que hacer click en ``BOARDS MANAGER``, en donde tenemos que buscar “Arduino UNO R4 Boards” e instalarlo.

![screenshot de boards manager en Arduino IDE](./imagenes/boards-manager.png)

cada vez que hagamos entregas, tenemos que subir la carpeta completa del código que hemos hecho en Arduino IDE, la cual contiene dentro el archivo ``.ide`` el cual se llama igual que la carpeta que lo contiene, demostrando así que es el archivo correcto.

---

### lenguaje de programación

el _setup_ es una configuración, o también se puede ver como una coreografía por lo tanto ``setup()`` es la secuencia de instrucciones para que sucedan las cosas, es decir que indica la coreografía

tipos de funciones:

+ función tipo ``int`` = el resultado es un número entero
+ función tipo ``void`` = no expulsa como respuesta un valor, solo sucede

para que algo exista *hay que declararlo*. para declarar la función setup() se hace de la siguiente forma:

```cpp
void setup() {
  // aquí va setup(), ocurre solo una vez y es al inicio

}
```

> está prohibido hacer una línea de código sin comentar qué es lo que esa línea va a hacer, razón por la que trabajaremos con pseudocódigo.

luego va el loop, el cual ocurre después de setup() y se repite hasta que ya no pueda repetirse más.

```cpp
void loop() {
// aquí va loop()
// ocurre despues de setup()
// se repite hasta que no se pueda
}
```

los murciélagos indican desde dónde y hasta dónde suceden las cosas, es decir:

{ = desde acá

} = hasta acá

#### sistema hexadecimal

en hexadecimal se cuentan los números en una casilla de 0 a F, lo cual es equivalente a contar del 0 al 15 de la siguiente forma:

| hexa | decimal |
| :---: | :---: |
| 0 | 0 |
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |
| 4 | 4 |
| 5 | 5 |
| 6 | 6 |
| 7 | 7 |
| 8 | 8 |
| 9 | 9 |
| A | 10 |
| B | 11 |
| C | 12 |
| D | 13 |
| E | 14 |
| F | 15 | 

> dato: ``Ctrl + T`` organiza el archivo de Arduino IDE

---

## ejemplos de código

### ejemplo sumar

```cpp
//sumar enteros
//es tipo int porque nos tiene que dar un resultado
//void no entrega nada, solo ocurre sin emitir resultado

int sumarEnteros(int x, int y) {
//voy a declarar un resultado
	int resultado = 0;
	// int resultado y declarar
	// int vale 0

// hacer la suma de x e y
// y reemplazar valor resultado por ese valor
resultado = x + y;

return resultado;
}
```

+ isitchristmas.com (página hecha con ``if``)

---

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

---

## lectura


