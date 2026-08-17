# sesion-01b

2026-08-14

## Computación

**Álgebra Booleana:** Es un sistema matemático que funciona a través de variables que sólo tiene 2 valores (0 = falso y 1 = verdadero), además usa operaciones básicas como la suma (+), la multiplicación (*) y la negación (x̄) que sirven para diseñar y simplificar circuitos digitales y códigos.

 - "+" = OR
 - "*" = AND
 - "x̄" = NOT

La computación se trata de que las cosas puedan variar, aunque también hay constantes. 

Los datos no caben en un computador, por lo que tienden a ser aproximaciones (ejemplo: cuando vemos el clima es el resultado de un promedio de diferentes temperaturas en distintos lugares).

If = Condicional

## Variables en C++

Está prohibido escribir una línea de código sin decir qué va a hacer (comentario).

**bool** = Almacena valores con dos estados: true / false.

**string** = Almacena texto, entre comillas. (Ejemplo: "Hola Mundo").

**double** = Incluye números con decimales. (Ejemplo: 10.99 / -10.99).

**int** = Números enteros, sin decimales. (Ejemplo: 120 / -120).

**char** = Contiene caracteres individuales, cada uno entre comillas simples. (Ejemplo: 'A' / 'B').

**void** = vacío, no expulsa como respuesta un valor. Sólo necesita ocurrir.

**setup** = configuración

**loop** = estructura de control que repite un bloque de código varias veces hasta que una condición deja de cumplirse.

## Placas a revisar

Arduino UNO R4

![Fotografías de la placa Arduino UNO R4](./imagenes/fotos-arduino-unor4.jpg)

Raspberry Pi Pico H

![Fotografías de la placa Raspberry Pi Pico H](./imagenes/fotos-raspberry-pi.jpg)

## encargo01b - 1

Tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

**Intento 1: ¿Cómo prender, de manera intermitente, el LED que tiene incluido la Raspberry Pi Pico H?**

Para este primer acercamiento quisimos irnos a lo más básico sin saber nada de programación, y al no encontrar mucho que nos ayudara en google (no es que no haya contenido, es que aún nos cuesta encontrar lo que estamos buscando) decidimos acudir a chatGPT, en el que el prompt fue el siguiente:

```
"holaaa, sabes qué puedo hacer con una placa raspberry pi pico h?"
```

A lo que nos respondió diversas opciones, como que la raspi puede controlar cosas como: 

 - **Luces LED:** hacer secuencias, iluminación ambiental.
  
 - **Botones y sensores:** que algo reaccione cuando alguien lo toca, acerca, mueve.

 - **Perillas y potenciómetros:** controlar intensidad, velocidad, volumen, posición.
   
 - **Sensores:** temperatura, luz, movimiento, distancia, humedad.
   
 - **Servomotores:** mover piezas, abrir/cerrar mecanismos, hacer pequeñas animaciones.
   
 - **Sonido:** generar tonos o controlar un pequeño buzzer.
   
 - **Pantallas pequeñas:** mostrar números, texto, gráficos simples.

Ya con esa información base preguntamos otra cosa:

```
y cómo la puedo programar con arduino?
```

En base a esto nos explicó cómo instalar el core de [Arduino-Pico - GitHub](https://github.com/earlephilhower/arduino-pico/releases) de Earle Philhower (desarrollador de sofware estadounidens), el cual es el core de Arduino para los microcontroladores RP2040/RP2350, que son los chips que utilizan las Pico.

 - **Microcontroladores RP2040/RP2350:** Son microcontroladores de alto rendimiento creados por Raspberry Pi.

Gracias a esto es que podemos utilizar código como los que veremos en el ejemplo de más adelante:

```C++
pinMode();
digitalWrite();
delay();
```

Y ya con esto avanzado, pudimos partir con lo que sería el primer intento.

Además considerar información sacada del [DataSheet - Raspberry Pi Pico H](https://pip-assets.raspberrypi.com/categories/610-raspberry-pi-pico/documents/RP-008307-DS-2-pico-datasheet.pdf) , en donde pudimos ver cómo funciona el componente y descubrimos que para hacer cualquier cambio en el código debemos reiniciar la placa, que es a través del botón **BOOTSEL**, y que sin este paso nos daba un error al intentar poner en marcha lo que habíamos cambiado.

``` C++

  // primera prueba con comando de inteligencia artificial
  // chatgpt para ser precisas

void setup() {

  // sobre como prender de manera intermitente el LED incorporado en la placa
  // LED_BUILTIN se refiere al LED incorporado en la placa
  // llamado GP25 en el datasheet
  // si tuviera mas de un LED deberia ser llamado LED 25
  // o sea
  // (LED_25, OUTPUT)


  // output es para saber que la señal
  // debe salir por ese LED


  // pinMode = configurar el modo de un pin
  // en este caso el LED GP25


pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

  // digitalWrite = poner el pin es un estado determinado
  // en este caso lo que queremos es que el LED este encendido
  // y luego apagado por cierta cantidad de tiempo


  // por ende
  // HIGH = encendido
  // LOW = apagado
  // y delay = determinada cantidad de tiempo en milisegundos


  // entonces elegimos 1000 milisegundos = 1 segundo
  // esto significa que se mantendra encendido por un segundo
  // y se apagara un segundo


digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);

digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  //por que esta operacion se mantiene sucediendo
  // porque lo agrgamos en ´void loop´
  // lo que que la operacion se mantiene sucediendo
  // mientras el microcontroldor se encuentre funcionando

}

```

SUBIR!!

![Vídeo LED intermitente en la placa](./imagenes/video-led-intermitente.mp4)

**Aprendizajes:**

- Antes de poner "upload" luego de cualquier cambio, debemos reiniciar la placa. Esto se logra desconectando la placa del computador (en nuestro caso), y luego debemos mantener presionado el botón "**BOOTSEL**" mientras la volvemos a conectar. Ya con eso podemos iniciar otra vez.

- Otra cosa importante es que antes de cambiar cualquier cosa debemos revisar el DataSheet de lo que vayamos a usar, porque esto nos permite tener cierta consideración y compresión de distintas cosas que se pueden o no hacer con la placa. También saber los nombres correctos para poder programarlas.

- Algo que pensamos que no se podía era poner números menor que 1000 en "delay();", en cuanto a eso, comprobamos que si se podía y que producía distintos ritmos en la velocidad en que se prendía el LED.

## encargo01b - 2

Proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
