# Sesión 02b

> Clase no presencial: el profesor Aaron mandó 3 videos por Canvas explicando la instalación y ejecución de una nueva app para trabajar con Raspberry Pi.

---

## Apuntes sesión

### Contexto de los videos

Se subieron 3 videos en Canvas:

Instalar VS Code → agregar extensiones → instalar complementos de Raspberry → crear proyecto en C/C++

### Instalación y configuración de VS Code para Raspberry Pi Pico

**Extensiones necesarias:**
- C++
- Markdownlint
- Raspberry Pi Pico

Además de las extensiones, hay que instalar los **complementos que pide Raspberry** (SDK y toolchain) para poder compilar y correr código en la placa.

**Nota personal:** Aaron explicó que usar una IA como Claude para pedir código no asegura que esté bien, ya que si no se especifica con mucho detalle (versión, tipo de placa, etc.) puede fallar o dar algo que no sirve. Por eso para este tipo de proyectos es mejor usar la extensión/app oficial de Raspberry en vez de generar el código con IA.

### Creación de un nuevo proyecto en Raspberry Pi Pico

Pasos a seguir usando la extensión, en orden:

1. **Nombre del proyecto** — con buenos modales (nombre claro y ordenado).
2. **Board type (tipo de placa)** — elegir según la placa que se esté usando, revisando el nombre exacto de la placa.
   - ⚠️ **No elegir RISC-V** — es otra arquitectura/forma de trabajar que no se va a usar en el taller (se trabaja en modo ARM).
3. **Ubicación del proyecto** — elegir dónde se va a guardar.
4. **Versión** — elegir la más reciente disponible.
5. **Features** — por ahora no se activa ninguna, pero a futuro probablemente se agreguen SPI e I2C.
6. **STDIO** — elegir consola por USB.
7. **Code generation options** — activar **Generate C++ code** y desactivar todo lo demás.
8. **Create** — se genera el proyecto.

### Archivos importantes del proyecto

| Archivo | Función |
|---|---|
| `main.cpp` | Contiene el código del proyecto |
| `CMakeLists.txt` | Archivo de configuración, le dice al compilador qué librerías necesita el proyecto |

**Configuración manual en `CMakeLists.txt`:**
Se agrega manualmente `hardware_adc` dentro de `target_link_libraries`, en la línea 48. Esto habilita el uso del conversor análogo-digital (ADC) en el proyecto.

Después de esa configuración, Aaron usó el ejemplo visto en la clase 02a: se copia y pega ese código en `main.cpp` y con eso ya se podría probar.

---

## Encargos

### Encargo02b

**Consigna:** ver los videos (aunque no se tenga una placa Raspberry Pi), anotar dudas, y tratar de subir código a la placa si es que se llegan a pedir.

Vi los 3 videos completos. Logré instalar Visual Studio Code y seguí todos los pasos: instalación de extensiones (C++, Markdownlint, Raspberry Pi Pico), instalación de los complementos que pide Raspberry, y creación del proyecto siguiendo las indicaciones (board type, versión, STDIO por USB, generación de código C++, configuración de `CMakeLists.txt` con `hardware_adc`). No tengo la placa física todavía, así que queda pendiente únicamente subir el código a la placa cuando se preste una.

**Avance:**

![avance encargo02b](./imagenes/encargo02b-01.jpg)
![avance encargo02b](./imagenes/encargo02b-02.jpg)
![avance encargo02b](./imagenes/encargo02b-03.jpg)
![avance encargo02b](./imagenes/encargo02b-04.jpg)
![avance encargo02b](./imagenes/encargo02b-05.jpg)
![avance encargo02b](./imagenes/encargo02b-06.jpg)

---

## Lectura

### *Anarchy*, John Cage (pp. vi–viii)

**Qué entendí:**
En estas páginas Cage primero explica su método para escribir el libro: los "mesostics", un sistema donde arma el texto dejando que el azar (usando el I Ching) decida en vez de escribir todo controlado como autor tradicional. Cuenta cómo fue reuniendo las citas de distintos pensadores anarquistas (Tolstoy, Thoreau, Goldman, Bakunin, Whitman, entre otros) gracias a varias personas que le prestaron o regalaron libros. Después arma una especie de collage encadenando esas citas para transmitir una idea de conjunto: el anarquismo no es caos, es una sociedad que se organiza sola, sin necesidad de gobierno ni jerarquía impuesta desde arriba. Cierra reforzando que los cambios grandes no llegan de golpe.

**Cita interesante:**
> "we are merely facilitating processes so that anything can happen" (Cage, *M*, citado en *Anarchy*, p. vi)

**Reflexión personal:**
Lo que más se me quedó fue la idea de que los períodos de cambio lento son seguidos por períodos de cambio violento, y que las revoluciones son tan necesarias para la evolución como los cambios lentos que las preceden — o sea, no hay salto brusco sin que antes haya un proceso lento acumulándose atrás. Conectado con eso está la otra idea que me hizo más sentido: el cambio real empieza en la mente de las personas, no impuesto por la fuerza. Siento que estas dos ideas se complementan: primero cambia algo adentro (la forma de pensar de la gente), y ese cambio lento y silencioso es el que después se traduce en algo más grande y visible, casi como una revolución. Me parece interesante que Cage aplique este mismo principio no solo para hablar de política, sino también para su forma de componer música/texto: dejar que las cosas se organicen solas en vez de controlarlo todo desde arriba, como autor.
