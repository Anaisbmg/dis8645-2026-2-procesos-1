# sesion-01a

2026-08-11

# apuntes sesión

Primero, analizamos en grupo diversas fotografías de tableros de ascensores, tomadas por cada persona entre el viernes de la semana pasada y el martes de esta semana. A partir de estas imágenes, observamos similitudes, diferencias y elementos recurrentes en su funcionamiento y organización.

![imagen de tablero de ascensor](./imagenes/tablero_01_botones.jpg) 

## ASCENSORES 

En conjunto, identificamos y analizamos los principales elementos, variables y características funcionales presentes en un ascensor. Consideramos aspectos como el movimiento en un eje, la dirección, la posición, la electricidad, los números utilizados para identificar los pisos, los botones, sensores, señales, puertas, peso, velocidad, tiempo y límites del sistema. Este análisis nos permitió descomponer el ascensor en unidades más simples y comprender qué información y elementos básicos intervienen en su funcionamiento.


| Elemento básico | En el ascensor |
|---|---|
| Movimiento en un eje | Movimiento vertical |
| Dirección | Arriba / abajo |
| Posición | Piso o altura actual |
| Electricidad | Energía necesaria para funcionar |
| Números enteros positivos | 1, 2, 3, 4… |
| Números arábigos | Forma visual de representar los pisos |
| Botones principales | Selección de piso |
| Botones auxiliares | Abrir, cerrar, alarma |
| Variables | Piso, peso, velocidad, dirección |
| Entradas | Botones y sensores |
| Salidas | Movimiento, luz, sonido, puertas |
| Sensores | Posición, peso, puerta, obstáculos |
| Tiempo | Espera, apertura y desplazamiento |
| Velocidad | Rapidez del movimiento |
| Peso / carga | Peso dentro de la cabina |
| Límites | Peso máximo, piso mínimo y máximo |
| Secuencia | Llamar → llegar → abrir → cerrar → mover |
| Estados | Detenido, subiendo, bajando, puerta abierta/cerrada |
| Señales visuales | Número de piso, luces de botones |
| Señales sonoras | Aviso de llegada, alarma |
| Puertas | Apertura y cierre |
| Cabina | Espacio que contiene personas o carga |
| Pisos | Puntos definidos dentro del recorrido |

La tabla representa una base general del sistema. Estos elementos pueden variar o ampliarse según el contexto; por ejemplo, ante una detención o corte de electricidad aparecen variables asociadas a emergencia, energía auxiliar, alarma o comunicación.

## encargos
- autorretrato de variables
- pantalla de segmentos

## Variables (autorretrato de variables)

Una variable es un espacio que utiliza el computador para **guardar un dato** mientras se ejecuta un programa. A ese espacio se le asigna un nombre para poder identificar la información y utilizarla cuando sea necesario. Por ejemplo, si hacemos un programa que suma dos números, podemos tener una variable numero1 para guardar el primer valor, otra llamada numero2 para guardar el segundo y una variable resultado para guardar la suma de ambos. Así, las variables permiten almacenar, identificar, reutilizar y modificar los datos con los que trabaja un programa.

>numero1 = 5  
>numero2 = 3  
>resultado = numero1 + numero2  

En este caso, numero1 guarda el primer valor, numero2 guarda el segundo y resultado almacena la suma.


## <ins>Las variables pueden guardar distintos tipos de datos, por ejemplo:</ins>

-**Enteros**: números sin decimales, como 25   
-**Decimales**: números con decimales, como 3.14   
-**Texto**: palabras o frases, como "Hola"   
-**Booleanos**: valores true o false   

La forma en que se indica el tipo de dato depende del lenguaje de programación.

### C++

En C++ normalmente debemos declarar explícitamente qué tipo de dato tendrá la variable:
```cpp
int edad = 25;
string nombre = "Magdalena";
bool estudiante = true;
``` 
Aquí nosotros le estamos indicando al programa que edad será un número entero, nombre será texto y estudiante será un valor booleano.

### JavaScript

JavaScript utiliza tipado dinámico, por lo que no necesitamos escribir el tipo de dato al crear la variable:
```cpp
let edad = 25; 
let nombre = "Magdalena"; 
let estudiante = true; 
```
JavaScript reconoce el tipo observando el valor que le asignamos. Si escribimos 25, sabe que es un número; si escribimos "Magdalena", sabe que es texto.

### Python

Python también utiliza tipado dinámico:
```cpp
edad = 25
nombre = "Magdalena"
estudiante = True
```
Python reconoce automáticamente qué tipo de dato contiene cada variable.

Por lo tanto, el concepto de variable es común entre los lenguajes de programación, pero la forma de declararla cambia según el lenguaje. En lenguajes como **C++** indicamos explícitamente el tipo, mientras que en JavaScript y Python el lenguaje lo reconoce a partir del valor que asignamos.

entooncessss....

>C++ → se declara explícitamente el tipo de la variable (int, float, etc.).   
>JavaScript → se reconoce automáticamente el tipo según el valor.   
>Python → también reconoce automáticamente el tipo según el valor.    

## <ins>Declarar variables en c++</ins>

>Estructura:
>tipo nombre = valor;

Ejemplo:

        int edad = 25;
              │
      ┌───────┼───────────┐
      │       │           │
     int     edad         25
      │       │           │
      ▼       ▼           ▼
   Tipo de   Nombre     Valor
    dato    variable   almacenado

<ins>importante en sintaxis:</ins>    
-**camelCase**: la primera palabra va en minúscula y las siguientes comienzan con mayúscula. int porEjemplo: valor;  
-**Texto** va entre ""  
-**Números enteros** entre ''  
-**Al final de cada declaración** ;  


Algunas de las variables más utilizadas son: 

| Tipo de variable | Se declara como | Uso |
|---|---|---|
| Entero | `int` | Guarda números enteros, sin decimales |
| Decimal | `float` | Guarda números con decimales |
| Decimal de mayor precisión | `double` | Guarda números decimales con mayor precisión que `float` |
| Carácter | `char` | Guarda un solo carácter, letra o símbolo |
| Texto | `string` | Guarda palabras, textos o cadenas de caracteres |
| Booleano | `bool` | Guarda valores de verdadero (`true`) o falso (`false`) |
| Entero grande | `long` | Guarda números enteros de mayor rango |
| Entero muy grande | `long long` | Guarda números enteros de un rango aún mayor |
| Entero sin signo | `unsigned int` | Guarda números enteros iguales o mayores que 0 |

## <ins>Guardar más de un valor</ins>

Si quiero guardar varios datos dentro de una misma variable, puedo escribirlos como texto, pero en ese caso el programa los entiende como un solo `string`.
```cpp
string comidasFavoritas = "Sushi", "Pasta";
```
Aunque aparecen dos comidas, C++ interpreta "Sushi, Pasta" como un solo texto.
Si quiero que cada comida se guarde como un dato separado, puedo usar un **array**:
  
```cpp
string comidasFavoritas[2] = {"Sushi", "Pasta"};
```
En este caso, comidasFavoritas guarda dos elementos distintos.
  
Cada elemento tiene una posición, llamada índice, y en C++ se empieza a contar desde 0:
Por ejemplo: 
comidasFavoritas[0] // "Sushi"
comidasFavoritas[1] // "Pasta"



## Autorretrato en variables 

```cpp
// Datos de nombre
string nombre = "Magdalena";
string apellidoPaterno = "Balart";
string apellidoMaterno = "Tomicic";
char inicialNombre = 'M';

// Datos identificador
string rut = "20675554";
char dv = '8';

// Datos personales
int edad = 24; 
float estatura = 1.64;
string nacionalidad = "Chilena";

// descripción física
bool peloRubio = false;
bool peloCastano = true;
bool ojosCafes = true;

// Datos de estudio
bool estudiante = true;
string carrera = "Diseño";
string universidad = "UDP";
int horasEstudioMin = 2;
int horasEstudioMax = 4;

// Mis favoritos
string peliculaFavorita: "Perfect Days";
string ciudadFavorita = "Antofagasta";
string artistaFavorito = "Mara Faundez";
string animeFavorito = "Frieren";
string obraFavorita = "La Bailarina";
string coloresFavoritos[2] = {"Rojo", "Azul"};
string comidaFavorita = {"Hamburguesas", "Pizza", "Pastas", "Sushi"};
char numeroFavorito = '5';

// lo falso y lo cierto
bool sabeConducir = false;
bool sabeCocinar = true;
bool haceDeporte = false; 
bool leGustaViajar = true;
```





## lectura

me llevé este libro

hacker code

![imagen de la portada del libro hackers](./imagenes/libro-hacker.jpg) 

