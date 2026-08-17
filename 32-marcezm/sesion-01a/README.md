# sesion-01a
Martes 11 de Agosto

En esta clase vimos el funcionamiento de GitHub, también escogimos una lectura y hablamos en grupo de nuestro encargo de el ascensor para que llegáramos a conclusiones que luego se conversaron con el curso.

## apuntes sesión

### Conversación en grupo
El funcionamiento de un ascensor parte desde la experiencia fuera de él, estando frente a sus puertas, donde se suele encontrar al costado botones para subir o bajar, dependiendo en qué piso uno se encuentre, por ejemplo, al estar en el último piso sólo hay botón para bajar. Al llamar al ascensor, se debe presionar el botón con la flecha de la dirección a la que uno se dirigirá. Al entrar, podemos ver distintas variables de botones, divididas en pisos, funcionamiento de las puertas y botones para casos de emergencia. Los botones de los pisos al ser apretados, hay una programación detrás que genera el movimiento del mecanismo para ser llevado a tal piso, al cerrarse las puertas, ya sea de manera automática luego de un tiempo determinado, o al apretar el botón para realizar esta acción.

---

## ¿Qué se necesita para un ascensor?

### Datos
- Puertas
- Botones de pisos: números enteros positivos y negativos, no hay 0
- Botones auxiliares: abrir y cerrar puertas
- Botón de emergencia
- Movimiento en eje Z
- Espejos opcionales
- Poleas
- Motores
- Contrapeso
- Carril
- Electricidad

## Funciones básicas
Las funciones corresponden a las acciones que puede realizar el ascensor:

- Subir
- Bajar
- Mantenerse
- Hacer sonar una alarma
- Mecanismo de falla

## Condiciones

Para definir algunos comportamientos del ascensor se pueden utilizar condiciones:

```javascript
if(estoyEnUnPiso){
    abrirPuerta();
}

if(esSeguro){
    abrirPuerta();
}
```
Las acciones se escriben con paréntesis `()`. Si no tienen paréntesis, corresponden a datos o variables.

*Apuntes compartidos en clase con Catalina Oyanedel*

--- 

## encargos

### ¿Qué es una variable?
Una variable es un espacio que permite guardar información o un dato. Su contenido puede cambiar dependiendo de la situación.

Por ejemplo:
```
edad = 35
color_favorito = "morado"
estado_animo = "feliz"
```
Una variable puede representar diferentes aspectos de una persona, como sus características, gustos, emociones o situaciones.

Por ejemplo:
```
nombre
edad
estado_animo
color_favorito
```
Algunas variables cambian con el tiempo, como:
```
estado_animo = "cansada"
```
Luego podría cambiar a:
```
estado_animo = "motivada"
```
Por lo tanto, una variable permite representar información que puede modificarse.

### ¿Qué es una función?

Una función representa una acción o tarea que se puede realizar.

A diferencia de una variable, que representa un dato, una función representa algo que hacemos.

Las funciones se escriben utilizando paréntesis `()`.

```
estudiar()
caminar()
escuchar_musica()
crear()
descansar()
```
Los paréntesis permiten reconocer que se trata de una acción o función.

Una función también puede producir un resultado:
```
estudiar() → aumenta_conocimiento
descansar() → recupera_energia
crear() → genera_una_idea
```
### Diferencias entre variables y funciones
| Variables | Funciones |
| --- | --- |
| Representan datos | Representan acciones |
| Guardan información | Realizan una acción |
| No llevan `()` | Llevan `()` |

Ejemplo:

| Variables | Funciones |
| --- | --- |
| `edad` | `estudiar()` |
| `color_favorito` | `crear()` |
| `estado_animo` | `descansar()` |

### Autoretrato

```
nombre = "marcela"
apellido = "zuñiga"
edad = 21
color_favorito = "morado"
comida_favorita = "lasaña"
pelicula_favorita = "enredados"
estado_animo = "cansada"
hobby = "ver_peliculas"
personalidad = "extrovertida"
lugar_favorito = "playa"
```

### Mis funciones
Las funciones representan algunas de las acciones que forman parte de mi vida cotidiana:

```
estudiar()
aprender()
escuchar_musica()
descansar()
compartir()
```

### Reflexión
Las variables muestran diferentes características que forman parte de nuestra identidad, mientras que las funciones representan las cosas que hacemos diariamente.

Además, algunas acciones pueden generar cambios en nuestras variables. Por eso, mi autorretrato no es completamente estático, sino que puede cambiar según mis experiencias, decisiones y contexto.

--- 

## lectura
Escogí el libro **_El cero de las formas: Arte, tecnología e historia_**.

![Libro](imagenes/foto-libro.jpg) 

---

## Avance de lectura
Llevo leído lo que vendría siendo el primer capitulo **_Arte, tecnología y humanismo_** escrito por Boris Groys. Me llamó la atención el como el autor relaciona el arte con la forma en que las personas se muestran y son observadas por los demás. No habla de el arte solo como algo que hay que contemplar, sino también de cómo el ser humano tiene un deseo de ser visto, admirado y reconocido, (esto lo plantea con artistas y diseñadores). En este sentido la persona puede llegar a convertirse en algo así como un objeto de contemplación, como si su imagen tomara el valor de una obra de arte.

También me gustó como muestra el arte relacionado a nuestra vida cotidiana y con los cambios de la sociedad. Se plantea que el arte puede dejar de ser algo que solamente contemplamos y transformarse en una acción, expresión y resistencia. 

## Citas

**Cita 01 - Página 26**

*“Para los seres humanos, devenir obra de arte significa precisamente lo siguiente: salir de la esclavitud, siendo inmunizado contra la violencia.”*

Se relaciona al ser humano con una obra de arte, pero no solo desde el punto de vista de ser observado, sino que también se plantea que convertirse en una obra de arte también significa liberarse de aquello que nos limita. Me hace pensar que el arte también puede ser una forma de sentirse libre, permitiendo expresarte y ser uno mismo.

**Cita 02 - Página 31**

*“Aquí el arte pasa de la contemplación a la acción.”*

El arte no es solo algo que miramos, sino que también puede hacernos pensar, expresar lo que sentimos o pensamos y genera algo en las personas.
