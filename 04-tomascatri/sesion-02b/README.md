# sesion-02b

clase cancelada por cierre de udp

## apuntes sesión

## Encargos

Encargo 02b:

subimos videos en canvas de hoy, son 3 videos.

1: instalar visual studio code, cami está regrabando el video parte 1 porque tuvimos un problema ténico, les avisará por discord cuando esté listo
2: ver los videos parte 2 y parte 3, aunque no tengan una placa raspberry pi, anotar dudas, tratar de subir código a sus placas si es que las piden.

---

**Resultado:**

1. **Configuración de Visual Studio Code:** Ya lo tenía instalado previamente. Como anécdota, antes solía confundirlo con Visual Studio; ahora entiendo que la principal diferencia radica en que Visual Studio está orientado a proyectos más robustos, mientras que VS Code es un editor mucho más ligero. La última vez que lo utilicé fue para desarrollar mi sitio web, editando el código HTML y previsualizando los cambios en tiempo real mediante extensiones. Para este encargo, ya instalé las extensiones de C/C++, complementos de Markdown y la extensión oficial de Raspberry Pi Pico.
   
   El semestre pasado utilicé Thonny para trabajar con la Raspberry Pi Pico y MicroPython. Resultó muy práctico porque no requería configurar complementos complejos, permitía monitorear la consola en tiempo real, reiniciar o cargar código rápidamente mediante atajos de teclado y gestionar bibliotecas de forma directa.

2. **Gestión de extensiones y dependencias:** Existen múltiples versiones y estándares de C++. En caso de presentarse algún error o *bug* con la extensión de Raspberry Pi Pico, conviene probar distintas versiones de esta. Al ingresar al apartado de la extensión, el sistema solicita instalar Python, paso que omití al contar con una instalación previa en el equipo.

3. **Creación del proyecto y estructura del código:** 
   * **Configuración inicial:** Creé el proyecto bajo el nombre `prueba`, seleccionando la placa Raspberry Pi Pico 2 W (que nostalgia). Se omitió la arquitectura RISC-V (marcada como *RISC*), ya que no se utilizará por ahora. Se habilitaron únicamente las opciones para salida de consola vía USB (STDIO USB) y la generación del código base en C++. Posteriormente, se completó la descarga e integración del SDK.
   * **Estructura de archivos:** Dentro del directorio del proyecto se genera la carpeta `build` (donde se compilan los binarios resultantes) junto con los archivos de configuración y el archivo fuente principal: `prueba.cpp`.
   * **Análisis del código (`prueba.cpp`):**
     * `#include`: Permite importar las cabeceras y bibliotecas necesarias (similar a cuando se adaptan librerías externas o de Arduino para la Pico).
     * `int main()`: Es la función principal y punto de entrada de la ejecución del programa.
     * Bucle `while (true)`: Mantiene una ejecución continua de las instrucciones internas.
     * `printf("Hola Mundo!\n")`: Envía el mensaje a la consola, donde `\n` representa un salto de línea.
     * `sleep_ms(1000)`: Pausa la ejecución durante 1000 ms (1 segundo) entre cada iteración.
   * **Configuración de compilación (`CMakeLists.txt`):** Es el archivo donde se declaran las dependencias del proyecto. Por ejemplo, para utilizar un potenciómetro a través del conversor analógico-digital, es necesario vincular la biblioteca de hardware correspondiente (`hardware_adc`).

---

**Pregunta:**
1. Al inicializar un proyecto para la **Pico 2 W**, aparece el apartado *Pico Wireless Options* (ausente en las versiones sin conectividad inalámbrica). ¿Qué parámetros configuran estas opciones y en qué influyen dentro del proyecto?
2. 
## lectura
