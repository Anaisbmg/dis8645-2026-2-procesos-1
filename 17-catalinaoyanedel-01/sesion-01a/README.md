# sesion-01a
martes 11 de agosto

## apuntes sesión
trabajamos en clase y profundizamos el ejercicio de observación del funcionamiento de ascensores, trabajando y conversando con nuestro equipo llegamos a esto:

"El funcionamiento de un ascensor parte desde la experiencia fuera de él, estando frente a sus puertas, donde se suele encontrar al costado botones para subir o bajar, dependiendo en qué piso uno se encuentre, por ejemplo, al estar en el último piso sólo hay botón para bajar. Al llamar al ascensor, se debe presionar el botón con la flecha de la dirección a la que uno se dirigirá. Al entrar, podemos ver distintas variables de botones, divididas en pisos, funcionamiento de las puertas y botones para casos de emergencia. Los botones de los pisos al ser apretados, hay una programación detrás que genera el movimiento del mecanismo para ser llevado a tal piso, al cerrarse las puertas, ya sea de manera automática luego de un tiempo determinado, o al apretar el botón para realizar esta acción."

### conversación en clases

**¿qué se necesita para un ascensor (datos)?**

- puertas
- botones pisos: números enteros positivos y negativos, no hay 0
- botones auxiliares: abrir y cerrar puertas
- botón de emergencia
- movimiento en eje z
- espejos opcionales
- poleas
- motores
- contrapeso
- carril
- electricidad

**funciones básicas**

- subir
- bajar
- mantenerse
- hacer sonar una alarma
- mecanismo de falla

### sobre lenguajes y programación

if(estoyEnUnPiso){

abrirPuerta();


if(esSeguro){

abrirPuerta();

- para programar, las acciones son con paréntesis y si no tienen son datos
- variables / funciones
- entender los comportamientos de las funciones como absolutos o relativos

*tomamos apuntes juntas con marcela zuñiga por lo que compartimos estos apuntes:)
__________________________________________________________________

## encargos
1. autorretrato: describir variables y funciones de ustedes
2. investigar pantallas de segmentos, tomar fotos, documentar contexto, lugar, ubicación, alfabetos posibles, usos, comparar entre resultados encontrados, al menos 3 ejemplos distintos. https://en.wikipedia.org/wiki/Segment_display

primero busqué información respecto a los conceptos

### definiciones
#### variables
"Una variable es un contenedor que almacena un valor o conjunto de valores en la memoria de un ordenador y les asigna un nombre único." / "Una variable representa un contenedor o un espacio en la memoria física o virtual de una computadora, donde se almacenan distintos tipos de datos (valores) durante la ejecución de un programa. A cada variable se le asigna un nombre descriptivo o un identificador que se refiere al valor guardado. Los datos almacenados pueden cambiar de valor o ser constantes." / "En algunos lenguajes de programación de alto nivel, una variable es un almacenamiento abstracto o una ubicación de indirección asociada con un nombre simbólico, que contiene una cantidad conocida o desconocida de datos u objetos a los que se hace referencia como un valor; o en términos más simples, una variable es un contenedor nombrado para un conjunto particular de bits o tipo de datos (como integer, float, string, etc...) o indefinido".

tipos de datos:
- interger: números enteros sin decimales.
- float: números con decimales.
- string: texto o secuencia de caracteres.

#### funciones
"Una función es un bloque de código al que ponemos un nombre que realiza una tarea específica. Son una herramienta fundamental para estructurar y reutilizar el código en la programación moderna." / "Para explicar qué es una función se suele decir como ejemplo que es una “máquina” donde “entran cosas” y “salen cosas”. _(Una función es una “máquina” que transforma inputs en outputs)._"

#### segmentos
"Una pantalla de segmentos es un dispositivo de visualización que consta de varios segmentos, los cuales se encienden y apagan para dar la apariencia de dígitos o caracteres alfanuméricos. Los segmentos suelen ser LED individuales o cristales líquidos. Las pantallas de segmentos se utilizan a menudo en relojes digitales y calculadoras de bolsillo. Los tipos comunes incluyen pantallas de siete segmentos (que se usan solo para números) y pantallas alfanuméricas de catorce y dieciséis segmentos (que pueden mostrar números y letras del alfabeto latino)."

**fuentes:**

- https://www.domestika.org/es/blog/12614-que-es-una-variable-en-programacion
- https://ebac.mx/blog/variable-en-programacion
- https://en.wikipedia.org/wiki/Variable_%28high-level_programming_language%29
- https://www.luisllamas.es/programacion-que-es-una-funcion/

### parte uno encargo

**mis variables**

contenedores que almacenan distintos tipos de datos

_físicas_

- `color de ojos`: #8a7246
- `largo de pelo`: 48cm
- `color de pelo`: café, rubio
- `color usual ropa`: azul, negro, café, verde
- `estatura`: 1.54cm
- `edad`: 22 años
- `tatuajes`: 7
- `accesorios`: dos anillos, una pulsera

**mis funciones**

mis "máquinas" que transforman inputs en outputs

- `manos`: están configuradas para que al recibir una idea, ya sea a través de inspiración, investigación o el encargo de una tarea, puedan diseñar, dibujar o escribir, para dar vida a lo que está en la mente.
- `piernas`: al tener la necesidad de ir a un lugar, tienen la función de transportarme ahí con su movimiento.
- `nariz`: respirar oxígeno, para no morir.
- `músculos faciales`: al recibir cualquier tipo de información, ya sea genere felicidad, enojo, tristeza, disgusto, sorpresa o confusión, hacer una expresión inmediatamente, sin importar si es apropiado o no. _esta función debe mejorarse._

### partes dos encargo

## lectura
elegí llevarme el libro Conversations de Ai Weiwei porque me llamó la atención que sean conversaciones sobre arte principalmente, sin conocer al artista, por lo que hoy investigué más de él y su obra, y leí las primeras páginas donde pude entender la importancia del artista por lo reconocido que es y también su relación con el activismo político.

**citas:**

"Nombrado la persona más influyente del mundo del arte en 2011 por la revista ArtReview, Ai Weiwei es uno de los artistas contemporáneos chinos más importantes, una figura única de la escena internacional y claro disidente del régimen comunista de su país. [...] Mediante su trabajo ha explorado los temas de opresión y desplazamiento. Autodenominándose ‘refugiado’, ha desarrollado una empatía por los refugiados y migrantes, convirtiéndolo en el contenido central de su obra."

"Las conversaciones con el comisario Hans Ulrich Obrist están reunidas en Ai Weiwei. Conversaciones, donde el pensamiento del artista se despliega de forma continua a lo largo de varios años. El formato de entrevista permite seguir su evolución casi en tiempo real, atravesando tanto su práctica artística como su experiencia personal. A lo largo de los diálogos aparecen cuestiones muy diversas —desde la cerámica, la arquitectura o el blogging hasta la filosofía, la naturaleza y las influencias de su entorno familiar—, configurando el retrato de un creador que entiende el arte como una extensión inseparable de la vida. Especialmente relevantes son sus reflexiones sobre la infancia en el exilio, la figura de su padre y su posición crítica frente al Estado chino, elementos que atraviesan de forma constante su obra y su concepción de la libertad artística."

me interesó harto por lo que leí así que tengo muchas ganas de seguir leyendo el libro!

**fuentes**
- https://corpartes.cl/blog/ai-weiwei-artista-activista/
- https://artstatementmagazine.com/ai-weiwei-cinco-libros-para-entender-su-universo/

