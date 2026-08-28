# sesion-02a
martes 18 de agosto

## apuntes sesión
### potenciómetros y botones
**potenciómetro:**

- resistencia variable
- potencia = energía/tiempo
- en electricidad la potencia = voltaje x corriente (acá tiene que haber escondido energía y tiempo)
- el voltaje tiene que ver con energía
- y dentro de corriente hay tiempo
- por lo tanto son comparables
- los potenciómetros nos dejan regular potencias, permitiéndonos variar una propiedad eléctrica que es la resistencia.
- el resistor lo que hace es resistir a que el electrón pase.
- corriente = número de electrones
- voltaje = maneras de medir energía
- la parte variable del potenciómetro es la patita 2, lo que permite mover cualquier valor a una constante

**botón:**

- botones (pulsadores)
- pushbutton: temporales
- toggles: el impulso permanece
- normally open (N.O): el electrón no puede transitar
- normally connected (N.C): siempre conectados, al hacer una acción de presionar se desconecta
- no conectar vcc directamente a gnd, poner un resistor entre ellos para no provocar cortocircuito
- **pulldown:** VCC - BOTÓN - R - LECTURA - GND = 0: no toi, 1: toi
- **pullup:** VCC - R - LECTURA - BOTÓN - GND = 1: no toi, 0: toi

### pushbutton ejemplo
![ejemplo arduino](./imagenes/ejemploboton.png)

### recomendaciones conexiones arduino / ¿cómo conectar potenciómetros?
- conectar a 5V
- no usar VIN
- lado análogo, solo permite leerlo
- lado digital, es mutante por lo que se puede decidir
- las salidas que tienen Ñ sirven para las salidas de audio
- los potenciómetros se conectan al lado análogo
- conectar 5V y GND a orejas de potenciómetros, y A0 a la nariz de este
- la entrada tiene 10 bits: 2 elevado a 10 = rango [0, 1023]
  
### código para conectar a potenciómetro

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

al correr el código y mover la perilla al máximo, tuvimos un error que aparece a continuación, no entendemos por qué pasó, pero al cerrar y volver abrir el archivo, e intentarlo nuevamente, volvió a funcionar.

![error](./imagenes/captura.png)

__________________________________________________________________________________________________

## encargos
- documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.

### C++
- "C++ es un lenguaje de programación diseñado en 1979 por bjarne stroustrup.
- la intención de su creación fue extender al lenguaje de programación C y **añadir mecanismos que permiten la manipulación de objetos.**
- desde el punto de vista de los lenguajes orientados a objetos, C++ es un lenguaje híbrido."
- permite la agrupación de instrucciones.

#### tipos de datos
- caracteres: `char` (también es un entero), `wchar_t`
- enteros: `short`, `int`, `long`, `long long`
- números con coma: `float`, `double`, `long double`
- booleanos (sí / no): `bool`
- vacío: `void`

#### tipado estático y multiparadigma
- tipado estático significa que cada variable tiene un tipo conocido en tiempo de compilación, y el compilador comprueba tus tipos antes de que el programa siquiera se ejecute:
- `count` es un `int` durante toda su vida; intentar almacenar `"hello"` en él no compilaría. esto detecta toda una clase de errores de forma temprana, a costa de tener que escribir más al principio.

#### C y C++
- C++ surgió de C en los años 80 como "C con clases", y sigue siendo en su mayoría un superconjunto: mucho código C válido compila como C++. pero el lenguaje ha crecido enormemente desde entonces.
- C++ añade programación orientada a objetos, plantillas para código genérico, referencias, excepciones y una rica biblioteca estándar llena de herramientas listas para usar. **un error común de principiante es escribir C++ al estilo de C (memoria manual, arreglos crudos por todas partes) cuando la biblioteca estándar ya resuelve el problema por ti.**

#### arduino framework
- "serie de funciones, clases, estructuras, variables y constantes que simplifican el proceso de darle instrucciones al microcontrolador"

### microcontroladores
se pueden definir según su capacidad de bits o familia

_definiciones de vista de ia:_
#### capacidad de bits
- **8 bits:**
son los modelos más sencillos y de bajo costo, ideales para tareas básicas, control de electrodomésticos simples. (ej: ATmega328 en  Arduino)

- 1**6 bits:**
ofrecen mayor velocidad y precisión, usados en control industrial avanzado y sistemas de audio.

- **32 bits:**
son los más potentes, capaces de ejecutar tareas complejas como el procesamiento de señales, conectividad inalámbrica avanzada y gráficos (ej. ESP32 o STM32)

#### según arquitectura y familia
- **PIC (microchip):**
populares por su facilidad de uso en sistemas embebidos básicos _(dispositivo de computación especializado que se diseña para realizar una función muy específica dentro de un sistema más grande)_ y analógicos.

- **AVR (Atmel/Microchip):**
arquitectura RISC de gran rendimiento, famosa por estar en las placas tradicionales de arduino.

- **ARM:**
diseños de alta eficiencia energética utilizados desde dispositivos vestibles hasta teléfonos inteligentes. (ej: RP2040 en rasperry pi pico)

- **ESP (Espessif):**
destacados por incluir wi-fi y bluetooth integrados para proyectos de IoT (internet de las cosas)

#### ¿qué es un microcontrolador?
"es un circuito integrado que funciona con un procesador también llamado CPU y unidades de memoria ROM y RAM. todas estas partes están interconectadas y trabajan entre sí dentro del microcontrolador. son especialmente útiles en aplicaciones que requieren automatización, control y monitorio, como electrodomésticos, sistema de control de motores, sistemas embebidos, dispositivos médicos, sistemas de seguridad, juguetes electrónicos y una amplia gama de productos electrónicos.

#### elementos de un microcontrolador
1. **procesador (CPU):** es el cerebro del microcontrolador, encargado de ejecutar instrucciones y realizar cálculos.
2. **memoria:** incluye memoria de solo lectura (ROM) para almacenar el programa y memoria de acceso aleatorio (RAM) para datos temporales
3. **periféricos de entrada/salida:** permite que el microcontrolador interactúe con otros componentes, como sensores y actuadores.
4. **temporizadores y contadores:** ayudan a realizar tareas en intervalos de tiempo específicos.
5. **convertidores A/D y D/A:** permiten convertir señales analógicas a digitales y viceversa.

#### proceso básico de funcionamiento
1. **programación:** se escribe un programa en un lenguaje de programación y se carga en la memoria ROM del microcontrolador.
2. **ejecución:** la CPU lee las instrucciones del programa y realiza las tareas especificadas.
3. **interacción:** utiliza los periféricos de I/O para comunicarse con el mundo exterior, recibiendo datos de sensores y enviando señales a actuadores.

#### herramientas de desarrollo
1. **IDE (entorno de desarrollo integrado):** software que proporciona todas las herramientas necesarias para escribir, compilar y cargar programas en el microcontrolador. ejemplos: arduino IDE, MPLAB X para microcontroladores PIC y atmel studio para AVR.

### botones 
#### diferencia entre botón e interruptor
"los interruptores, como su nombre indica, cambian entre un estado de funcionamiento y otro. al mover permanentemente los contactos, encienden el dispositivo, que se apaga solo cuando se presiona nuevamente el interruptor. sin embargo, si hablamos de botones, la señal de control llega al receptor sólo cuando se pulsa el botón. cuando se suelta, la señal de control se interrumpe y el dispositivo vuelve a su estado inicial."

#### push button
un pulsador es un actuador eléctrico en forma de botón que, al ser presionado, puede cerrar o abrir los circuitos eléctricos a los que está conectado. 

#### tipos
1. **pulsadores momentáneos:** se debe mantener una presión continua para activar el mecanismo. tras soltar el botón, el pulsador volverá a su estado original.
2. **pulsadores mantenidos:** permanecerán en su estado de contacto establecido hasta que se vuelva a aplicar presión, lo que los hará regresar a su estado original.
3. **pulsadores normalmente abiertos (NA):** en su estado por defecto, no deja pasar la corriente. para que la electricidad circule por el circuito, es necesario presionar el botón. luego, cuando se vuelve a presionar, el resorte regresa a su posición inicial y el circuito se interrumpe nuevamente.
4. **pulsadores normalmente cerrados (NC):** funciona de forma opuesta que el anterior. la electricidad puede fluir por el circuito cuando no se ejerce presión sobre el botón, es decir, en su estado inicial. el flujo se interrumpirá una vez que se presione el pulsador.

### potenciómetro
es un dispositivo electrónico que funciona como una resistencia variable. el usuario al manipularlo obtiene entre el terminal central (cursor) y uno de los extremos una fracción de la diferencia de potencia total, se comporta como un divisor de tensión o divisor de voltaje.

### fuentes
- https://es.wikipedia.org/wiki/C%2B%2B
- https://coddy.tech/docs/es/cpp/what-is-cpp
- https://www.youtube.com/watch?v=itkYnIbpUec&t=3s
- https://www.redeweb.com/actualidad/que-es-un-microcontrolador/
- https://www.ibm.com/mx-es/think/topics/microcontroller
- https://www.wonderfulpcb.com/es/blog/comparing-microcontroller-types-solutions/
- https://www.tme.com/cl/es/news/library-articles/page/59080/interruptores-y-botones-diferencias-aplicaciones-y-principio-de-funcionamiento/
- https://www.promelsa.com.pe/blog/post/que-es-pulsador-electrico.html
- https://es.wikipedia.org/wiki/Potenciómetro


__________________________________________________________________________________________________
## lectura
he podido avanzar harto con el libro, voy en la página 62, ya que al ser conversaciones se hace ligero de leer, aunque sus temáticas sean un poco densas. son una serie de entrevistas hechas por distintas personas al artista ai weiwei, donde más allá de su obra he aprendido de las problemáticas que ha abordado principalmente en su vida y luego en su arte, sus problemas con el gobierno chino, la importancia y su lucha por lo derechos humanos y la libertad de expresión.

no tenía idea de que hasta el día de hoy había tanto control sobre las redes sociales, hasta el punto de borrar de todas partes las palabras o personas que estén en contra del régimen, como lo hicieron con ai weiwei y que por eso razón las nuevas generaciones de su país no lo conocen.

respecto a esto tengo una cita, las cuales dejaré traducidas:
 
"evan osnos: es una cosa si el estado censura tu trabajo, pero es otra cosa completamente si la gente empieza a censurar nuestro trabajo

ai weiwei: creo que este argumento es profundo. **el arte es el área en la que uno tiene el derecho de explorar, no necesariamente la idea del bien y del mal, sino plantear preguntas y presentar diferentes posibilidades.** el arte no debería haber sido retirado del espectáculo."

dejaré una recopilación de las citas que he ido encontrando interesantes hasta el punto que he leído:

> solo me quedo en el lado soleado de las redes sociales. ahí hay mucha luz y cosas hermosas y positivas. claro, hay una zona oscura y sombría, pero puedes elegir quedarte en la parte soleada. en la época de los medios tradicionales, no tenías esa opción, así que sigo agradeciendo vivir en esta época.

he tenido siempre una lejanía y una crítica a las redes por el nivel de adicción que causan y cómo fácilmente sin autocontrol me pueden llegar a hacer perder un día con su dinámica de recompensa inmediata, por lo que me chocó escuchar esta opinión desde una perspectiva de alguien que ha vivido la censura y el no poder acceder con libertad a ciertas plataformas, por lo que quizás sea mejor reconocer lo bueno, siempre y cuando sea con control, dejando de demonizarlas tanto.

> creo que si se vuelve perfecto, se volverá peligroso. es mejor que no sea perfecto.

> mi vida no sirve a ningún propósito. trato de valorar todas las oportunidades que se me presentan. además, quiero ver hasta dónde puedo llegar o dejar huella. sin embargo, sé que el tiempo es corto. en un par de minutos nos bajaremos de este escenario y estaré pensando en algo más.

> _(respecto a una pregunta sobre redes sociales)_ este es un problema real. la gente joven suele tomar rápidamente toda la información sin darse el tiempo de digerirla. todo este conocimiento o información puede no tener ninguna emoción o experiencia ligada a ella. esta nueva generación o este nuevo ser humano ofrecerá una perspectiva profundamente diferente a la forma de pensar de la generación anterior. no sé si esto será bueno o malo, pero tendrá un nuevo carácter. si ves a los universitarios hoy en día, rara vez ves a alguien trabajando duro o escribiendo o leyendo como antes. es muy fácil para la gente obtener cualquier tipo de información que deseen sin tener que desarrollar ningún tipo de pensamientos profundos.

**extra - recomendación de libro:** https://martingubbins.cl/wp-content/uploads/2018/06/Fuentes-del-Derecho.pdf

