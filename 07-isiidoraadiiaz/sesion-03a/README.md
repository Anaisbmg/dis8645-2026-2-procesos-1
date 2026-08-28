# sesion-03a

## apuntes sesión

25-08 apuntes
I2C

I2C = conexión de 4 cables.

Sirve para que los componentes se puedan comunicar entre sí usando pocos cables.

Los 4 son:

VCC = energía
GND = tierra
SCL / CK = reloj
SDA = señal de datos
SSD1306

SSD1306 = controlador de la pantalla.

Averiguar más sobre esto.

La pantalla que estamos usando funciona con I2C.

Placa / breadboard

La placa debe estar a X distancia y en formato horizontal.

Esto permite hacer bien las conexiones y que todos los componentes puedan conversar entre sí.

Proceso breadboard
Poner la pantalla.
Hacer las conexiones.
Conectar tierra y energía.
Conectar SDA y SCL.
Tierra - lechuga - tierra

Tierra - lechuga - tierra

Tierra normalmente es café o negro.

La lechuga es la amiga placa jajajaj.

CK / SCL

CK = reloj

También puede aparecer como SCL.

Es el que va marcando cuándo se manda la información.

SDA

SDA = señal de datos

Por acá pasa la información.

En la placa Arduino:

A4 = SDA

Biblioteca

Biblioteca jamás librería jajajaj.

Tenemos que descargar en Arduino IDE:

Adafruit SSD1306 2.5.17

Esa es la biblioteca que vamos a usar para poder trabajar con la pantalla.

#

Los # son para palabras claves / instrucciones.

Por ejemplo:

#include

Es como decir:

“anda a ese archivo, copia eso y pégalo en mi código acá”.

Sirve para traer bibliotecas o archivos que necesitamos usar.

Taxonomía

Usar la taxonomía para definir.

O sea, ordenar y clasificar primero lo que queremos que haga la pantalla antes de empezar a programar todo.

Mini resumen

I2C = conexión de 4 cables
SSD1306 = controlador pantalla
CK / SCL = reloj
SDA = datos
A4 = SDA
GND = tierra
Adafruit SSD1306 2.5.17 = biblioteca
#include = traer código / archivos al código

## encargos

Poeta: Malia Booker

Poema: Pepper Sauce


I pray for that grandmother, grinding her teeth,
one hand pushing in fresh hot peppers, seeds and all, turning
the handle of that old iron mill, squeezing the limes, knowing
          they will burn and cut raw like acid.

She pours in vinegar and gets Anne to chop five onions
          with a whole bulb of garlic,
          Chop them up real fine girl, you hear?
And Anne dicing, and crying, relieved that no belt has blistered her
skin,
          no knife handle smashed down onto her knuckles
until they bleed for stealing money from she grandmother purse.
 

I hear she made Anne pour in the oil and vinegar
          and stir up that hot sauce, how she hold her down.
I hear she tied that girl to the bedposts,
          strung her out naked, like she there lying on a crucifix.
I hear she spread she out, then say,
          I go teach you to go and steal from me, Miss Lady.


I hear she scoop that pepper sauce out of a white enamel bowl,
          and pack it deep into she granddaughter’s pussy,
I hear there was one piece of screaming in the house that day.


          Anne bawl till she turn hoarse,
               bawl till the hair on the neighbours skin raise up,
               bawl till she start hiss through her teeth,
               bawl till she mouth could make no more sound, 
          I hear how she turn raw,
          how that grandmother leave her there all day,
         
          I hear how she couldn’t walk or talk for weeks.


## lectura

En esta parte del libro siento que Witt empieza a mostrar de forma más concreta cómo ciertas ideas matemáticas pasan al mundo del diseño. Me sorprende cómo sigue hablando de la manera en que la arquitectura entra en esta relación entre matemáticas y diseño, porque no lo plantea solo desde lo técnico, sino también desde cómo estas ideas pueden influir en la forma de crear.

También nombra a arquitectos y diseñadores como Max Bill, que tomaban modelos matemáticos como referencia para su propio trabajo. Eso me hace pensar que esta relación no era solo algo teórico, sino que realmente formaba parte de cómo algunos diseñadores observaban y construían sus ideas.

“allows us to combine a study of experimental practice with an analysis of the public presentation and image of that science.” — pág. 18

“collecting is classification lived, experienced in three dimensions.” — pág. 21
