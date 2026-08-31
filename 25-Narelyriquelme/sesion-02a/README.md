# sesion-02a
 
## apuntes sesión

## encargos
encargo02a:

en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. 

![alt](./imagenes/encargo2a.png)

conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.

## c++ 

### ¿qué es c++?

lenguaje programación más influyente y esencial en el desarrollo de software, creado en 1979 por Bjarne Stroustrup como una extensión del lenguaje C (lenguaje de programación de propósito general). 

se destaca por su control sobre los recursos, velocidad y eficiencia, utilizado en sistemas operativos complejos, convirtiéndose así en la opción para los desarrolladores que buscan máximo rendimiento.

### su evolución

este nace como una extensión de C, manteniendo eficiencia y control sobre el hardware, 
extendiendo la capacidad de este agregando nuevas características como la programación orientada a objetos y permitir estructurar el código de manera más modular y reutilizable. 

de igual manera este ha seguido evolucionando introduciendo nuevas versiones como lo son:
- C++11
- C++14
- C++17
- C++20

estas versiones han añadido características modernas que optimizan el rendimiento y simplifican el desarrollo, como las expresiones lambda, la gestión automática de memoria y las plantillas genéricas. 

### tipos de programación

en lo que se destaca C++ es que es un lenguaje versátil para diferentes tipos de proyectos, permitiendo diferentes tipos de programación, tales como:
- programación orientada a objetos: permite estructurar el código en objetos, facilitando la reutilización y el mantenimiento.
- programación procedimental: programación estructurada, organizándose en funciones y procedimientos.
- programación genérica: crear código que es capaz de funcionar con diferentes tipos de datos, destacando la reutilización y flexibilidad.

### características
- alto rendimiento: al ser un lenguaje compilado, permite que el código sea traducido de manera directa a instrucciones de máquina, reduciendo el tiempo de ejecución de los programas, además este otorga un control preciso en el uso de recursos del sistema como la memoria y el procesador.
- flexibilidad: permite diferentes paradigmas de programación, destacando su adaptabilidad y versatilidad dirigida a distintos proyectos.
- compatibilidad: a pesar de ser una extensión de C, este también es capaz de integrar los códigos escritos en C, sin necesidad de reescribir los códigos.

### sus diferentes usos

estos son algunos de los diferentes usos en los cuales se puede aplicar C++:
- desarrollo software de sistemas: capacidad de gestionar de manera directa recursos del hardware y su alto rendimiento, es especialmente escogido para software de bajo nivel en donde se requiere un control preciso en el ámbito de memoria y procesamiento.
- videojuegos/ motores gráficos: lenguaje popular en el ámbito del desarrollo de motores gráficos,juegos que requieren alto rendimiento y simulaciones 3D.
- aplicaciones financieras/ telecomunicaciones: se utiliza para almacenar grandes volúmenes de datos en tiempo real y que requieren alta eficiencia.
- programación dispositivos embebidos: desarrollo de software embebido para dispositivos electrónicos con recursos limitados. (microcontroladores, electrodomésticos inteligentes, control industrial)

> sistema embebido: sistema informático diseñado para hacer una tarea muy específica dentro de un aparato más grande.

### lenguaje 

el lenguaje C++ es un lenguaje amplio, el cual acá veremos un ejemplo básico y algunas de las palabras claves.

las palabras clave son identificadores reservados predefinidos que tienen un significado especial para el compilador, no se pueden usar como identificadores en el programa.

```
- setup: configuración para que empiece (función: secuencia de instrucciones) partes importantes, valores numerales, letras, palabras, imágenes, declarar datos). no responder, solo ocurrir.
- void: vacío, "esta función ocurre...", no expulsa valor, tipo.
- (): indica que tiene una función.
- ; aquí termina. como punto final.
- // comentario, describe todo lo que va a pasar, toda línea de código tiene que estar comentada.
- pseudocódigo
- { }: tiene que abrir y cerrar; estas llaves declaran la función.
- == comparar
- ctrl d formatear
está prohibido escribir una línea de código sin describir lo que tiene que pasar.
- loop: se repite hasta que no se pueda. va después de setup.
- backtick: carácter para renderizar códigos + indicar lenguaje cpp. ```
- bool: almacena dos valores (verdadero/falso).
- string: manejar cadenas de texto.
- while: mientras que...
- ! lo contrario de
- print = muestra algo en el Monitor Serial y deja el cursor en la misma línea.
- println = muestra algo y después salta a la siguiente línea.
```
> palabras claves que vimos en clases de taller.

![titulo](./imagenes/lenguaje.jpg)

> en esta imagen tenemos algunos de las palabras claves, las cuales hay una diversidad amplia

## potenciómetros

### ¿qué es un potenciómetro?

un potenciómetro es una resistencia variable de tres terminales. funciona como un elemento ajustable dentro de un circuito y tiene aplicaciones como el control de volumen en amplificadores, el ajuste de brillo en sistemas de iluminación y el control de diferentes parámetros eléctricos.
su funcionamiento se basa principalmente en el divisor de tensión cuando se utilizan los tres terminales. al ajustar la posición del rascador sobre el elemento resistivo, cambia la resistencia entre el rascador y cada uno de los extremos y, como consecuencia, cambia el voltaje de salida.
los potenciómetros son componentes pasivos, es decir, no necesitan una fuente de alimentación propia para realizar su función.
### estructura y funcionamiento
los potenciómetros generalmente tienen:
dos terminales extremos conectados a los extremos del elemento resistivo.
un terminal central llamado rascador, limpiaparabrisas o wiper.
un elemento resistivo.
un mecanismo que permite mover el rascador.
al mover el rascador a lo largo del elemento resistivo, se modifica la resistencia entre el rascador y cada uno de los terminales extremos. de esta manera, cuando se utilizan los tres terminales, es posible controlar el voltaje de salida.
si se utilizan solamente dos terminales, el potenciómetro puede funcionar como una resistencia variable.
### tipos de potenciómetros
existen potenciómetros analógicos y digitales.
**potenciómetros analógicos**
los potenciómetros analógicos utilizan un mecanismo físico para modificar la posición del rascador. según la forma en que se mueve, pueden clasificarse en:
giratorios: utilizan una perilla y un eje. al girarlos, el rascador se desplaza sobre el elemento resistivo.
lineales: utilizan un mecanismo de deslizamiento que permite mover el rascador en línea recta.
trimmers o potenciómetros de ajuste: están diseñados para realizar ajustes que normalmente no necesitan modificarse con frecuencia. pueden ajustarse utilizando una herramienta externa, como un destornillador.
**potenciómetros digitales**
los potenciómetros digitales no utilizan un rascador mecánico. en su lugar, emplean una red de resistencias y dispositivos electrónicos que permiten modificar digitalmente el valor de resistencia mediante señales de control.
los potenciómetros pueden utilizarse para:
controlar el volumen de un amplificador.
ajustar el brillo de los sistemas de iluminación.
controlar diferentes parámetros dentro de un circuito.
modificar una señal de voltaje.
realizar ajustes de calibración en equipos electrónicos.

| tipo de potenciómetro | características | uso / aplicación |
|---|---|---|
| **rotativo** | tiene una perilla y un eje que se giran para modificar la resistencia. | control de volumen, brillo y otros ajustes. |
| **lineal o de deslizamiento (fader)** | el rascador se mueve de forma recta mediante un control deslizante. | consolas de mezcla y equipos de audio. |
| **trimmer o de ajuste** | es pequeño y se ajusta normalmente con un destornillador. | calibración y ajuste de circuitos electrónicos. |
| **trimmer de múltiples vueltas** | puede girar varias veces, permitiendo realizar ajustes más precisos. | ajustes finos de resistencia. |
| **trimmer sin carcasa** | no tiene carcasa externa y puede montarse directamente en una pcb. | ajustes y calibración en placas de circuito. |
| **doble vía / dual o estéreo** | contiene dos potenciómetros independientes controlados mediante un mismo eje. | control simultáneo de dos canales, especialmente en audio estéreo. |
| **servo potenciómetro** | está diseñado para trabajar con servomotores y ajusta el voltaje según el movimiento o posición del motor. | control relacionado con servomotores. |
| **digital** | utiliza señales digitales para controlar la resistencia y no requiere movimiento mecánico. | control de parámetros dentro de circuitos mediante señales digitales. |

### pines

los potenciómetros generalmente tienen tres terminales:
- primer terminal: un extremo del elemento resistivo.
- segundo terminal: el rascador o wiper.
- tercer terminal: el otro extremo del elemento resistivo.
  
la disposición física de los terminales puede variar dependiendo del modelo, por lo que no siempre se debe asumir que una determinada posición física corresponde a un terminal específico. lo importante es identificar correctamente los dos extremos del elemento resistivo y el terminal del rascador.

### parámetros principales de un potenciómetro
- resistencia nominal: es el valor máximo de resistencia entre los dos terminales extremos. se expresa en Ω, kΩ o MΩ. por ejemplo, un potenciómetro de 10 kΩ tiene una resistencia total de 10 kΩ entre sus dos extremos.
- potencia nominal: indica la potencia máxima que el potenciómetro puede soportar sin sobrecalentarse o dañarse. se expresa en vatios (w).
- tolerancia: indica cuánto puede variar la resistencia real respecto al valor nominal indicado por el fabricante. por ejemplo, un potenciómetro de 10 kΩ con una tolerancia de ±10 % puede tener una resistencia real entre 9 kΩ y 11 kΩ.
- coeficiente de temperatura: indica cuánto puede variar la resistencia cuando cambia la temperatura. generalmente se expresa en ppm/°c. un coeficiente menor permite obtener una mayor estabilidad frente a cambios de temperatura.
- vida mecánica: indica aproximadamente cuántos movimientos o ciclos de ajuste puede soportar el potenciómetro antes de que su funcionamiento pueda deteriorarse.
- ley o característica de variación: describe cómo cambia la resistencia en función de la posición del rascador. las más comunes son la lineal y la logarítmica. la elección depende de la aplicación.
resolución: es especialmente importante en los potenciómetros digitales y representa la cantidad de niveles diferentes de resistencia que pueden seleccionarse.

### valores de resistencia

los potenciómetros se fabrican con diferentes valores de resistencia nominal, que indican la resistencia máxima entre sus dos terminales extremos. estos valores se expresan normalmente en ohmios (ω), kiloohmios (kω) o megaohmios (mω).

![titulo](./imagenes/potenciometro.jpeg)

## microcontroladores

### ¿qué es un microcontrolador?

un microcontrolador es un circuito integrado compacto diseñado para gobernar un sistema o realizar una tarea específica dentro de un aparato más grande, como parte de un sistema embebido. en su interior integra una unidad central de procesamiento (cpu), memoria y líneas de entrada/salida (e/s) programables, además de diferentes periféricos que permiten interactuar con otros componentes electrónicos.

### componentes internos
- cpu (unidad central de procesamiento): es el componente encargado de ejecutar las instrucciones del programa, realizar cálculos y controlar el funcionamiento general del microcontrolador.
- memoria flash: es una memoria no volátil utilizada habitualmente para almacenar el programa que ejecutará el microcontrolador. al ser no volátil, conserva la información incluso cuando el dispositivo deja de recibir energía. en los microcontroladores avr, la memoria flash se utiliza como memoria de programa y puede ser reprogramada.
- memoria ram (sram): es una memoria volátil utilizada para almacenar temporalmente datos, variables y otra información necesaria mientras el programa está en ejecución. su contenido se pierde cuando se interrumpe la alimentación eléctrica.
- puertos de e/s (entrada/salida): son pines físicos que permiten conectar el microcontrolador con componentes externos, como sensores, botones, potenciómetros y actuadores, por ejemplo motores o luces.
- periféricos internos: los microcontroladores pueden incorporar diferentes periféricos, como temporizadores (timers), convertidores analógico-digitales (adc) y módulos de comunicación como uart, i²c y spi. estos permiten realizar tareas de medición, control y comunicación con otros dispositivos.
  
### tipos de arquitecturas de memoria
- arquitectura von neumann: utiliza un espacio de memoria común para almacenar tanto las instrucciones del programa como los datos. por lo tanto, las instrucciones y los datos utilizan la misma estructura de memoria y vías de acceso.
- arquitectura harvard: utiliza espacios de memoria separados para las instrucciones del programa y los datos, generalmente con buses independientes. esta separación permite acceder a las instrucciones y a los datos de manera independiente y puede mejorar el rendimiento del procesamiento. la arquitectura avr, por ejemplo, utiliza una arquitectura harvard.
  
### familias populares
- avr: familia de microcontroladores de 8 bits desarrollada por microchip. un ejemplo conocido es el atmega328p, utilizado en placas como arduino uno. los microcontroladores avr utilizan arquitectura harvard y cuentan con memoria flash para almacenar el programa y sram para los datos.
- arm cortex-m: familia de núcleos de microcontroladores orientada a aplicaciones que requieren diferentes niveles de capacidad de procesamiento y eficiencia energética. se encuentra en numerosos microcontroladores utilizados en sistemas embebidos y aplicaciones industriales y de consumo.
  
### aplicaciones de los microcontroladores

los microcontroladores se utilizan en una gran variedad de sistemas embebidos y dispositivos electrónicos. algunas de sus aplicaciones incluyen:
automatización y control industrial: control de motores, sensores, sistemas de control y diferentes procesos automatizados.
dispositivos médicos y wearables: monitoreo y procesamiento de información proveniente de sensores y dispositivos portátiles.
electrodomésticos inteligentes: control de diferentes funciones en lavadoras, microondas, sistemas de climatización y otros dispositivos.
instrumentos musicales electrónicos y sintetizadores: control de interfaces, botones, secuencias y diferentes procesos relacionados con señales electrónicas.

## botones

### ¿qué es un botón?

un botón o pulsador es un componente electromecánico que permite controlar manualmente la conexión eléctrica de un circuito. en los pulsadores momentáneos, el contacto cambia de estado mientras se ejerce presión sobre el botón y vuelve a su estado inicial cuando se libera. los interruptores pueden clasificarse según el tipo de contacto y su funcionamiento.}

### estructura y funcionamiento
- terminales y contactos: los botones poseen contactos eléctricos internos que se conectan o desconectan mecánicamente cuando se acciona el botón. en un pulsador táctil, por ejemplo, un elemento metálico móvil permite establecer el contacto eléctrico al presionar el actuador.
- estado normal abierto (no): los contactos permanecen abiertos cuando el botón no está accionado. al presionarlo, los contactos se cierran y permiten el paso de corriente.
- estado normal cerrado (nc): los contactos permanecen cerrados cuando el botón no está accionado. al presionarlo, los contactos se abren e interrumpen la conexión eléctrica.
- componentes pasivos: un botón no genera energía eléctrica por sí mismo, sino que modifica la conexión eléctrica del circuito y permite enviar una señal de entrada al microcontrolador.
  
### tipos de botones
- SPST (Single Pole, Single Throw): Es el interruptor más básico. Cuenta con un solo polo y un solo tiro, por lo que simplemente abre o cierra un único circuito, funcionando como un clásico interruptor de encendido y apagado (ON/OFF). Los encuentras en formatos de palanca, balancín o deslizantes.
​- SPDT (Single Pole, Double Throw): Tiene un polo y dos tiros. Permite desviar una señal de entrada hacia dos salidas diferentes o actuar como un conmutador para alternar entre dos fuentes distintas hacia una misma salida.
- DPST (Double Pole, Single Throw): Posee dos polos y un tiro. Controla dos circuitos independientes de manera simultánea con un solo accionamiento físico (por ejemplo, útil para cortar al mismo tiempo la fase y el neutro de la corriente alterna por seguridad).
- DPDT (Double Pole, Double Throw): Combina ambas características con dos polos y dos tiros, permitiendo manejar dos circuitos separados donde cada uno puede conmutar entre dos rutas. Es muy empleado en electrónica para invertir polaridad en motores o rutear señales complejas.
- DIP Switch: Consiste en un bloque compacto que agrupa múltiples interruptores individuales (generalmente tipo SPST) en una sola pieza. Se utiliza principalmente en placas de circuito impreso (PCB) para configuraciones estáticas de hardware o modos de operación.

![titulo](./imagenes/botones.jpeg)

### relación entre los componentes dentro del sistema

existe una correlación directa entre todos estos elementos dentro de un mismo sistema electrónico:
el microcontrolador actúa como el cerebro del sistema, encargado de procesar y ejecutar el código programado en c++. recibe información de los distintos componentes de entrada, procesa esos datos y genera las respuestas correspondientes.
los potenciómetros entregan señales analógicas variables que el microcontrolador puede leer mediante sus entradas analógicas. al girar el potenciómetro, cambia el valor de la señal eléctrica, permitiendo controlar diferentes parámetros dentro del sistema.
los botones entregan señales digitales, generalmente asociadas a estados de encendido/apagado ("high"/"low"). estas señales se conectan a los pines de entrada del microcontrolador, permitiéndole detectar cuándo un botón ha sido presionado y tomar decisiones lógicas en función de esa información.

### referencias 

https://www.digikey.es/es/articles/the-complete-guide-to-potentiometers 

https://www.ariat-tech.es/blog/the-structure,function,and-common-types-of-potentiometers.html 

https://openwebinars.net/blog/que-es-cpp/ 

https://learn.microsoft.com/es-es/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170 

https://www.esic.edu/rethink/tecnologia/que-es-cpp-importancia-ejemplos-c 

https://www2.eii.uva.es/fund_inf/cpp/temas/1_introduccion/introduccion.html 

https://es.wikipedia.org/wiki/C%2B%2B 

https://www.microchip.com/en-us/search?q=microcontrollers 

https://onlinedocs.microchip.com/oxy/GUID-78362176-487F-41B9-95C7-B478A9A186EB-en-US-2/GUID-58665E03-55DB-4291-ADAA-2E3A8C9CB261.html

https://components.omron.com/us-en/products/basic-knowledge/switches/basics 

https://components.omron.com/us-en/products/switches/tactile-switches/tactile-switch_features 

## lectura
