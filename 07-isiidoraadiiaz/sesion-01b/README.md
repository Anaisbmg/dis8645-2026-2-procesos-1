# sesion-01b

## apuntes sesión

Álgebra booleana

Algebra booleana: sistema matemático creado por George Boole en 1847. Usa variables que solo tienen dos valores: 0 (falso) y 1 (verdadero).

Sus tres operaciones básicas son AND (producto), OR (suma) y NOT (negación), y es la base de la informática y los circuitos digitales.

Bool

Bool: hablamos de algo que es sí o no.

Bool: variables extremistas verdadero / falso.

O sea, un bool solo puede tener dos posibilidades:

true = verdadero
false = falso

Diferencia AND - OR
AND: añadir - círculo
OR: múltiples - triángulo círculo

&&: se ocupa para trabajar con más de una condición al mismo tiempo.

AND significa que se tienen que cumplir las dos condiciones.

OR significa que puede cumplirse una condición o la otra.

Variables

Variables = cambia.

Las variables guardan datos que pueden cambiar.

string = cadena.

Se ocupa para guardar texto.

Ejemplo:

string nombre = "Isidora";

Letra = 'A';

Inicial = "C";

= para asignar valores.

Ejemplo:

edad = 22;

Estoy asignando el valor 22 a edad.

== para comparar.

Ejemplo:

edad == 22

Estoy comparando si edad es igual a 22.

Primero surge la derecha y después se inyecta al valor de la izquierda.

Por ejemplo:

edad = edad + 1;

Primero se hace edad + 1 y después ese resultado se guarda nuevamente en edad.

Notación camello

Notación camello: cuando empieza una nueva palabra lleva mayúsculas.

Ejemplo:

cumplirAnhos

Nunca empezar en mayúsculas.

También podría ser:

colorFavorito

comidaFavorita

Función

Función: es una secuencia de instrucciones para que ocurran cosas.

(): única indicación de que es una función.

Ejemplo:

dormir()

Los paréntesis nos indican que dormir es una función.

Void

void = vacío.

Void: vacío - responde con nada, solo ocurre.

Void se usa para acompañar la función, una función que no necesita responder con algo.

Ejemplo:

```cpp
void dormir() {
}
```

La función dormir() ocurre, pero no necesita entregar ningún resultado.

Llaves

{}: murciélago - ayuda a declarar la función - hace que las cosas partan y cierren.

{ indica dónde parte lo que hace la función.

} indica dónde termina.

Scope

Scope: lugar o contexto.

Es el lugar donde una variable o una instrucción existe y puede ser ocupada.

Por ejemplo, algo que está dentro de {} pertenece a ese contexto.

Condicional

if: condicional para expresar una condición.

Se puede entender como un “si”.

```cpp
if (edad == 22) {
}
```

Se puede leer como:

“Si edad es igual a 22, entonces ocurre algo”.

Bits y bytes

Bit: puede tener un valor 0 o 1.

1 byte tiene 8 bits.

Ejemplo:

01010101

1 byte tiene 2 nibbles.

Entonces:

1 nibble = 4 bits
1 byte = 8 bits
1 byte = 2 nibbles

Comentarios

Comentario: definimos algo que es para nosotros - qué vamos a hacer.

Está prohibido escribir una línea de código sin saber lo que se va a hacer, TODO DEBE TENER UN COMENTARIO.

Iniciamos con comentarios.

Ejemplo:

```cpp
// guardar la edad
int edad = 22;
```

El comentario sirve para nosotros, el computador no lo ejecuta.

Setup

Setup: configuración - levantarse - inicio de las cosas.

En Arduino:

```cpp
void setup() {
}
```

Es donde colocamos las cosas que tienen que ocurrir al inicio.

setup() ocurre una vez cuando parte el programa.

Arduino IDE

ARDUINO IDE = es capaz de conversar con algunos Arduino UNO R4 Mínima.

Hay que instalarlo en el 2 icono.

Carpeta completa - indica cuál es el archivo principal.

Primera entrega: entrega de carpeta ARDUINO, sin espacio y sin mayúscula.

Para seleccionar todo en Arduino es Command + A.

Apretar 2 veces el botón de reset para resetear la placa Arduino.

Apretar flechita para subir el código en la Arduino - importante seleccionar la placa en la app.

Código en apuntes:

Se tiene que ocupar el backtick, tilde al revés, y después Cpp.

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
