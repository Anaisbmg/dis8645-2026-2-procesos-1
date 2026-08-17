# sesion-01b

viernes 2026-08-14

## apuntes sesión

08:30 am charla

partimos hablando de algunos libros subidos por Matías
- su portada
- colores
- editorial (algo que realmente nunca investigamos o tomamos en cuenta)

**MIT media lab:** es un centro de investigación en el instituto de tecnología de Massachusetts, donde se fusiona la tecnología, el diseño, la ciencia y el arte para la creación de inventos futuristas

**Nicholas Negroponte:** 
- arquitecto e informático estadounidense
- fundador de MIT media lab 

**Joir Ito:** 
- es un activista y empresario japonés-estadounidense
- fue presidente del MIT media lab
- curiosamente no termino la universidad

primer logo de joi ito

**subir foto**

**Jeffrey Epstein:** 
- dio inversión a MIT media lab

**Neri Oxman:** 
- arquitecta, diseñadora e investigadora (conocida por su concepto de ecología material)
- fue profesora en MIT media lab
- su laboratorio es conocido mundialmente por crear instalaciones ecológicas y estructuras impresas en 3D
- realizo una obra de arte en agradecimiento para Jeffrey Epstein

09:00 am empezó la clase

**Álgebra Booleana:** 
- es un sistema matemático creado por George Boole
- este sistema funciona a través de de solo 2 variables **0 = falso** y **1 = verdadero**
- usa operaciones tales como **suma = +**, **multiplicación = * o x** y **negación = x̄** sirven para diseñar
   - **+ = OR** (solo da **0 si todas las entradas son 0** y si **existe 1 el resultado es 1**)
   - **x o * = AND** (ambos dan 0 a no ser que existe un **1 = 1**)
   - **x̄ = NOT** (convierte el **1 en 0** y **0 en 1**)
 
**apuntes de computación**
- las cosas pueden variar pero también existen constantes
- los datos no caben en computación por ende siempre se aproximan, ya que los números son infinitos
- deben existir especificaciones
- prohibido que en la línea de códigos no exista algún comentario (siempre se debe escribir lo que se va hacer)
   - **palabras claves/variables de C++**
      - **bool** = valor lógico que solo puede tener dos estados: **true/false**
      - **char** = caracteres individuales cada uno con comillas simples ('K' y 'A')
      - **double** = valor que incluye números decimales (50.89 / -50.89)
      - **if** = orden que sirve para tomar decisiones 
      - **int** = es un tipo de dato destinado a almacenar números enteros, sin decimal (180 / -180)
      - **loop** = estructura que repite el mismo código una y otra vez hasta que una condición sea vuelva falsa
      - **setup** = configuración ( es una función y contiene **()**, es decir **setup()** )
      - **string** = contiene texto entrecomillas ("buenas")
      - **void** = vacío, no da resultado como tal, solo sucede (va antes de una función)

**programa a descargar: ARDUINO IDE 2.3.10**

## encargos
01- tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

**dupla:** 
- Emilia Contreras (hazzaily) 
- Katalina Riquelme (riyakatalinaa)

**microcontrolador elegido:** 
- Raspberry Pi Pico H

**¿Qué es un Raspberry Pi Pico H**
- es un placa microcontroladora (pequeña tarjeta electrónica inteligente) que sirve para controlar inventos y proyectos escolares o caseros.
- a diferencia de una computadora normal, no tiene pantalla ni ejecuta programas grandes, sino que se usa para **dar órdenes a luces, motores, botones y sensores.**

### proceso encargo

**para este trabajo no pudimos reunirnos de manera presencial, pero trabajamos online mediante meet**

- como era nuestro primer acercamiento a la programación consultamos por internet pero sentimos que no encontrábamos exactamente lo que buscábamos ( la información era demasiada que nos sentíamos un poco perdidas) así que, debido a eso le preguntamos a **chatGPT** lo siguiente:

**"holaaa, sabes qué puedo hacer con una placa raspberry pi pico h?"**

- nos respondió dándonos diferentes opciones de cómo controlar la placa raspberry pi pico h, tales como:
   - **Luces LED:** hacer secuencias, iluminación ambiental.
   - **Botones y sensores:** que algo reaccione cuando alguien lo toca, acerca, mueve.
   - **Perillas y potenciómetros:** controlar intensidad, velocidad, volumen, posición.
   - **Sensores:** temperatura, luz, movimiento, distancia, humedad.
   - **Servomotores:** mover piezas, abrir/cerrar mecanismos, hacer pequeñas animaciones.
   - **Sonido:** generar tonos o controlar un pequeño buzzer.
   - **Pantallas pequeñas:** mostrar números, texto, gráficos simples.

- con esta información preguntamos lo siguiente:

**y cómo la puedo programar con Arduino?**

- después de realizar esa pregunta nos explico cómo instalar el core de [Arduino-Pico — GitHub](https://github.com/earlephilhower/arduino-pico/releases) de Earle Philhower (desarrollador de software estadounidense), el cual es el core de Arduino para los microcontroladores **RP2040/RP2350**, que son los chips que utilizan placas Pico.

**IMPORTANTE: cabe destacar que, a pesar de no estar juntas, ambas intentamos instalar el core, sin embargo, nos dimos cuenta de que solo se podía instalar en el computador que tenía conectada la Raspberry Pi Pico H (en este caso lo tenia mi compañera Emilia/hazzaily)**


- al instalar ya el core podemos utilizar códigos, tales como los que veremos más adelante:

```C++
pinMode();
digitalWrite();
delay();
```

-  también recolectamos información de [DataSheet - Raspberry Pi Pico H](https://pip-assets.raspberrypi.com/categories/610-raspberry-pi-pico/documents/RP-008307-DS-2-pico-datasheet.pdf) ,
-  en este salía información de **cómo funciona el componente** y descubrimos que para hacer cualquier cambio en el código debemos reiniciar la placa, que es a través del botón **BOOTSEL**, y que sin este paso nos daba un error al intentar poner en marcha lo que habíamos cambiado.
-  ya con estos datos, pudimos partir con lo que sería el primer ejemplo:

**¿Cómo prender el LED que tiene incluido la Raspberry Pi Pico H?**

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
  delay(1000);

digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  //por que esta operacion se mantiene sucediendo
  // porque lo agregamos en ´void loop´
  // lo que que la operacion se mantiene sucediendo
  // mientras el microcontroldor se encuentre funcionando

}

```

**IMPORTANTE:** nos dimos cuenta de que al querer cambiar el **delay** (los milisegundos) descubrimos que debíamos reiniciar la placa a través del botón **BOOTSEL**; si no hacíamos este paso, nos daba un error al intentar poner en marcha las modificaciones, **esto es relevante para realizar cualquier cambio en el código original**

2-proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
