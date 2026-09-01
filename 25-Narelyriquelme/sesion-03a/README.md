# Sesión 03a
Primera clase presencial a la que asistí. Se trabajó con la pantalla LCD OLED y se empezó a definir el proyecto grupal.

## Apuntes sesión

### Pantalla LCD OLED 0.91" (I2C)

La pantalla es monocromática, es decir, solo trabaja con un color, y funciona con el controlador **SSD1306**. Tiene 4 patas que hay que conectar a la protoboard. Un punto clave: no hay que alimentar el circuito hasta estar completamente seguros de que las conexiones están bien hechas, para no dañar nada.

**Orden en que se deben conectar las patas:**
1. Primero VCC y GND, que son las conexiones más simples.
2. Luego SCK, que es la señal encargada del clock (reloj).
3. Y por último SDA, que es la señal que transmite los datos.

**Sobre el protocolo I2C:**

Es el protocolo que usa esta pantalla para comunicarse — se le llama "circuito inter-integrado". Su función es conectar distintos circuitos integrados y dispositivos entre sí a corta distancia, usando líneas de tierra, reloj y dato.

### Sobre la biblioteca y el código

Para este proyecto instalamos la biblioteca SSD1306 de Adafruit, que trae varios códigos pequeños y de ejemplo que podemos ir usando como base.

Los archivos con extensión **`.h`** son archivos de encabezado (header files) — ahí van las declaraciones y definiciones que después se pueden llamar desde el código principal.

Otros puntos a tener en cuenta al escribir código:
- Siempre cerrar las instrucciones con punto y coma, es un error muy común olvidarlo.
- La línea `#include` es la que permite traer el contenido de una biblioteca externa hacia nuestro propio código.
- Si en algún ejemplo aparece la librería `SPI`, no la vamos a necesitar para este proyecto.

Sobre editar o borrar código: hay que tener cuidado, porque borrar de forma "destructiva" (eliminar directamente) es riesgoso — si uno deja algo a medias se puede echar a perder todo el archivo. Por eso es más seguro comentar las líneas que ya no se quieren usar, en vez de borrarlas.

### Conexión en Arduino

| Pin Arduino | Señal | Cable |
|---|---|---|
| A4 | SDA | Amarillo |
| A5 | SCL | Azul |

### Poesía + computación

En clase se mencionaron algunos referentes que trabajan en el cruce entre poesía y programación, como ejemplo de hacia dónde puede ir este tipo de proyectos:
- Ramsey Nasser
- Allison Parrish
- Nick Montfort

### Ejemplos de código vistos en clase

Trabajamos con dos ejemplos para programar la pantalla LCD, subidos desde Arduino IDE:

1. **Ejemplo principal de Adafruit** — es la demo completa que viene con la biblioteca para una pantalla SSD1306 de 128x32 por I2C. Dibuja líneas, rectángulos, círculos, texto, y termina con una animación tipo copos de nieve cayendo.
2. **Ejemplo reducido, usado por Aarón** — es básicamente el mismo código pero recortado, dejando solo las funciones de dibujo de texto (`testdrawchar()`, `testdrawstyles()`) y el texto con scroll (`testscrolltext()`).

---

### Definir qué hacer — Proyecto 01 (grupal)

Como grupo definimos a nuestro poeta: **Federico García Lorca**. Estuvimos revisando sus libros y, en conjunto, elegimos trabajar con *Romancero gitano*, específicamente con el poema **"Romance de la luna, luna"**.

También revisamos si podíamos usar sus poemas libremente dentro de nuestro proyecto, y confirmamos que sí se pueden utilizar sin problema, sin necesidad de pedir permisos ni pagar derechos.

La idea que queremos mostrar en la pantalla todavía la estamos terminando de definir: por ahora la propuesta es reemplazar algunas frases del poema por emojis, para jugar con la lectura del texto.

**Pasos que anotamos para avanzar en el proyecto:**
1. Describir la idea en texto (un párrafo).
2. Describir en coreografías.
3. Dibujar.
4. Programar en C++.

---

## Encargos

No se asignó un encargo formal en esta sesión — el trabajo se centró en avanzar con la definición del Proyecto 01 en grupo (detallado arriba) y en probar los ejemplos de código de la pantalla OLED.

---

## Lectura

### *Anarchy*, John Cage (pp. ix, I, 2)

**Qué entendí:**
La página ix cierra el prólogo en prosa con más citas encadenadas — Emma Goldman describiendo el anarquismo como un orden social basado en la agrupación libre de individuos, Buckminster Fuller planteando que las soberanías nacionales son un obstáculo para la circulación de recursos a nivel mundial, y Bakunin definiendo la libertad no como algo formal otorgado por el Estado, sino como el desarrollo pleno de las capacidades de cada persona. Ya en las páginas I y 2 empieza el cuerpo del libro: el poema mesóstico propiamente dicho, donde el texto sigue tejiendo ideas sobre revolución, gobierno y organización social, pero ahora con una estructura vertical, no como prosa corrida.

**Cita interesante:**
> "Anarchism stands for a social order based on the free grouping of individuals" (Emma Goldman, citada en *Anarchy*, p. ix)

**Reflexión personal:**
Lo que más me sorprendió al leer las páginas I y 2 fue la forma en que Cage arma estos poemas: esconde frases de manera vertical entre el texto, como un acróstico, pero en el medio de las palabras y no al principio. Se nota que no es azar puro, hay una estructura pensada detrás aunque el contenido en sí venga de operaciones de azar.

**Investigación adicional:**

*Esta información la busqué en fuentes externas y con ayuda de la IA para entender mejor el contexto del poema.*

Cage le decía "mesósticos" a estos poemas, pero al principio él pensaba que estaba escribiendo acrósticos normales. Fue un amigo suyo, Norman O. Brown, quien le dijo que en realidad no eran acrósticos porque en un acróstico la palabra escondida va en el borde de cada línea, y en lo que Cage estaba haciendo la palabra va en el medio — por eso el nombre "mesóstico" (de "meso", que significa medio). En los años 60, cuando más trabajó esta técnica, Cage andaba muy metido en las ideas de Thoreau, Marshall McLuhan y Buckminster Fuller, y decía que con su trabajo quería enseñar a la gente a vivir en una especie de utopía anárquica, "sin director de orquesta", como él mismo la describía. Para escribir *Anarchy* en específico, usó citas y textos de gente como Bakunin y un ensayo de McLuhan, y dejó que el I Ching (un método chino antiguo de azar) decidiera cómo iba armando todo. Básicamente tomaba textos de otros autores (Wittgenstein, Joyce, Thoreau, Emerson, McLuhan, entre otros) y los iba mezclando con el azar para armar los poemas.

En la primera página de los poemas aparece el nombre de Peter Kropotkin, y por eso me metí a investigar sobre esto: resulta que era un filósofo ruso, considerado uno de los principales pensadores del anarquismo comunista.

Básicamente el anarquismo comunista (también le dicen anarcocomunismo o comunismo libertario) plantea eliminar el Estado, el capitalismo, el trabajo asalariado y la propiedad privada, pero sin meterse con las cosas personales de cada uno. La idea es que todo lo que se produce sea de todos, y que la gente se organice en grupos voluntarios sin que nadie mande desde arriba. La frase que más resume esta idea es "de cada cual según sus capacidades, a cada cual según sus necesidades". Se diferencia del comunismo más tradicional (el de Marx) en que ese sí necesita un partido y un Estado fuerte para manejar todo, mientras que el anarquismo comunista directamente no quiere ningún tipo de Estado ni jerarquía — quiere que la organización nazca sola, de la cooperación entre las personas.

Con esto entiendo mejor por qué Cage mezcla en su libro tanto a anarquistas más individualistas (como Goldman o Bakunin) como ideas más colectivas — el anarquismo comunista de Kropotkin es justo ese punto donde se juntan la libertad de cada persona y la organización en grupo sin gobierno, que es la misma tensión que se repite todo el rato en las citas del libro.
