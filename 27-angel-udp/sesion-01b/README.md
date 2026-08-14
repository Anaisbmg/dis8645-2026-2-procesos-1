# sesion-01b

14-08-2026

## apuntes sesión

Hoy vamos a leer nuestras descripciones propias y las vamos a pasar a codigo.

- Tipo: es que tipo de dato puedo tener

- Variables: pueden ser extremas y pueden valer SI o NO

Variable boolean

---

**Fire Fox y hay atajos para buscar en la web no con Google EJEMPLO:**

- !g: Google
- !w: Wikipedia
- !yt: Youtube

---

Álgebra Booleana

### AND gate / OR gate

### OR

A + 0 = A

A + 1 = 1

A + A = A

A + (opuesto de)A = 1

### AND

A * 0 = 0

A * 1 = A

A * A = A

A * (opuesto de)A = 0

Entonces vamos a describirnos con valores ej: si es verdaderovale 1 y si es falso vale 0

Un bicho = un Bug, gracias a que una polilla no dejó cerrar una compuerta.

Nesecidad de formas "variables" y "constantes" en rangos distintos

los datos no caben en un computador así que se aproxian para la retención humana

Ejemplo

Variable: Rut

Funciones: Ver, moverse, hablar

hay niveles de abstracción dependiendo de que nesecitemos programar

**String** = es una cadena (tiene un núcleo y una espiral pon encima envuelta como en cuerdas de guitarra)

C++ Variables: https://www.w3schools.com/cpp/cpp_variables.asp

**EN COMPUTACIÓN PARTIMOS CONTANDO DESDE EL CERO** 

Enteros de ej: 8 bits (2 elevado a 8) = 256 posibles valores / -127, 126 y como estoy midiendo siempre en valor positivo

- int8_t = 8, con signo
- uint8_t = 8, sin signo (La "U" es sin signo)
- int16_t = 16, con signo
- uint16_t = 16, sin signo

Vamos a instalar 2 programas que nos acompañaran en este periodo del semestre

Arduino IDE (entorno de desarrollo integrado)

Para conversar con el arduino, las que están en el lab es la "UNO r4" Tiene USB C

Historia de Arduino: https://arduinohistory.github.io/

Cursos Gratis usabilidad y etc: https://github.com/ITPNYU/physcomp

https://itp.nyu.edu/physcomp/

Cuando inyectamos un software Es el programa de aurdino

- Void = Vacio "es un tipo", No responde con nada despues de pasar algo
- En Arduino, setup() es la función principal de configuración que se ejecuta una sola vez al encender o reiniciar la placa.
- el murcielago "{,}" Ej: {- esto declara la cunción Setup

Declarar es para señalar que algo existe

Si es setup Ej: en la linea 2 que hay: // esto es un comentario que describe todo lo qu va a pasar

acá está prohibido escribir una linea de código si no estácomentada con lo que realiza, porque lo importante es leer lo que describe lo que se supone que hace lo que deveria pasar, por lo que estamos describiendo un pseudo código que describe lo que queremos

() si veo parentesis hay una indicación

**Loop()** : Ocurre repetidamente
// aqui va loop()
// ocurre despues de setup()
// se repite hasta que no se pueda

Backtick = `

If condicional : una estructura de control en programación que evalúa si una condición es verdadera para ejecutar código, o las oraciones condicionales con "if" en inglés que expresan situaciones y sus resultados.

Luego para colocar códigos y que se sepa el enguaje ej: `, y luego cerramos con los mosmos peor iniciamos así para C++ ```cpp

### Este código en Arduino IDE (ejemplo Angel)

```cpp
// Angel es estudiante udp
//bools
bool AngelEstudianteUDP = true;
bool AngelColombiano = true;
bool AngelCoreano = false;
bool AngelDientes = true;

// integers
int AngelEdad = 23;

int AngelNacimientoAnho = 2003;
// enero es 1, diciembre 12 
int AngelNacimientoMes = 06;
// dias desde 1 hasta que termine el mes
int AngelNacimientoDia = 13;

// negro
string AngelColorFavorito = "000000";

// 10 millones de colores
// 24 bits tengo mas de 10 millones de valores posibles
// 3 receptores rojizo, verdoso, azuloso
// desmosle 8 bits a cada canal de color
// entonces rojo tiene 8 bits
// G de verde tb, B de azul tb
// entonces 0 es apagado, 255 es prendido al maximo
// 8 bits se llaman 1 byte
// disco duro 2 MB mega bites, pero de 2 Mb y esos son 2 mega bit

// 1 byte tiene 2 nibbles, 2 pedacitos



// en 1 nibble, o 4 bits tengo 2 elevado a 4 valores posibles
// del 0 al 15


// sistema decimal   luego colocaron el sistema hexadecimal
// 00                      0
// 01                      1
// 02                      2
// 03                      3
// 04                      4
// 05                      5
// 06                      6
// 07                      7
// 08                      8
// 09                      9
// 10                      A
// 11                      B
// 12                      C
// 13                      D
// 14                      E
// 15                      F

// estoy en el dia de nacimiento
// de Angel
// le deseo feliz cumpleanhos

// scope esta dentro de {}
// scope es un contexto

//if (mesActual == AngelNAcimientoMes)  {
// estoy en el mes interesado

// if (diaActual == AngelNacimientoDia) {

  // decirle feliz cumple
  // que se tome el dia libre
  // traer cositas pa picar
//}

if (mesActual == AngelNAcimientoMes &&
diaActual == AngelNacimientoDia)



// }
}



En Arduino tien un editor para reglas y estandares como auto formatear, también finalizar o algo que esto termina acá (importantes comentarios o punto y coma) Hay señales como que las funciones están pegadas al borde, La "v" hace void

- las funciones tienen parentesis
- las funciones tienen nombre
- Primero se resuelve el valor de la derecha se inserta al valor de la isquierda

// la vamos a correr cuando
// sea el cumple de Angel
void cumplirAnhosAngel() {
 // actuializar la edad de Angel
 // edad es la que es mas uno
 AngelEdad = 23 + 1;
 // manera abreviada
 // AngelEdad += 1; (esta no la vamos a usar pero existe)
 // AngelEdad++; (esta no la vamos a usar pero existe)
}
```

Otro ejemplo:

// sumar numeros
// es tipo int porque nos va a dar un resultado
// las void ocurren sin emitir un resultado
int sumarEnteros(int x, int y) {
  // declarar un resultado
  int resultado = 0;
  // es una abreviación de dos pasos
  // declarar           int resultado;
  // asignar valor     re



## encargos

## lectura

Resumen:



2 Citas:

Pregunta:

Referente:

Aseveración:
