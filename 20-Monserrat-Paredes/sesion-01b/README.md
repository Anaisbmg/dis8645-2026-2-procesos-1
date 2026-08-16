# sesion-01b

## apuntes sesión

### 1. Tipos de Datos y Variables en C++

En la programación (especialmente en entornos de hardware como Arduino), las variables son contenedores que almacenan datos en la memoria. Cada variable debe declararse con un tipo de dato específico que define qué clase de información puede guardar y cuánto espacio ocupa.

→ Tengo que pasar la tabla de variables del autorretrato a c++

- bool (Booleano): Variables extremistas de dos estados (true / false o 1 / 0) o (Sí/No).
  
Un booleano es un tipo de dato lógico que solo puede tener dos valores.


**¿Qué es y para qué sirve?**

- Representa un estado de sí o no, encendido o apagado.
- Sirve para tomar decisiones en un programa de computadora con condiciones como "si esto es verdad, haz aquello".
- Controla el flujo del código mediante preguntas lógicas.


**Operadores lógicos**

- AND (Y): Da verdadero solo si ambas partes son verdaderas.
- OR (O): Da verdadero si al menos una parte es verdadera.
- NOT (NO): Cambia el valor de verdadero a falso y al revés.

- int (Enteros): Almacenan números enteros sin decimales. Se utilizan para datos exactos como la edad, el día del mes, o la cantidad de objetos. (Ej. int edad = 23;). Se usan enteros para facilitar la lectura.

- float o double (Punto flotante / Decimales): Almacenan números con fracciones decimales (ej. temperatura, voltajes precisos).

- char (Carácter): Almacenan un único carácter alfanumérico usando comillas simples (ej. char letra = 'A';).

- string (Cadenas de texto): Almacenan textos o secuencias de caracteres (ej. nombres).

- const (constantes): Variables cuyos valores no pueden cambiar durante la ejecución del programa.


### 2. Operadores en C++

= (operador de Asignación): Asigna el valor del lado derecho al contenedor del lado izquierdo. (Ej. int dia = 27;).

== (operador de Comparación): Compara si dos elementos son estrictamente iguales, devolviendo un valor booleano (true o false).

AND / OR (operadores Lógicos): Sirven para evaluar y juntar múltiples condiciones.

&& (AND / Y): Ambas condiciones deben cumplirse para que el resultado sea verdadero.

|| (OR / O): Con que al menos una de las condiciones se cumpla, el resultado es verdadero.

; (punto y coma): Funciona como el punto final de una oración; le indica al compilador que la línea de código ha terminado.

// (comentarios): Líneas de texto ignoradas por la máquina, utilizadas para escribir pseudocódigo, explicar la lógica o planificar ideas antes de programar.


### 3. Estructura de Control y Funciones en Arduino

En Arduino, la estructura de un programa se divide principalmente en dos bloques fundamentales llamados "murciélagos" { }

- void setup(): Se ejecuta una única vez al encender o reiniciar la placa. Sirve para configurar los estados iniciales. El uso de void indica que la función no devuelve ningún valor (es un proceso vacío de retorno).

- void loop(): Es la función cíclica por excelencia. Se ejecuta de manera infinita e ininterrumpida justo después del setup(), repitiéndose hasta que la placa se apague o falle. Es ideal para procesos que deben monitorearse constantemente (como sensores o condiciones de tiempo).



### 4. Autorretrato en C++

```cpp

// Variables booleanas (estados de dos opciones: true/false)
bool necesidadSueño = true;           
// Si descansa mal, amanece de mal humor
bool preparacionNocturna = true;       
// Todo listo la noche anterior (ropa, maquillaje, mochila)
bool ayunoEnLaManhana = true;          
// Agua y té verde en ayuno matutino
bool vitaminasAlmuerzo = true;        
// Tomo vitaminas fijas a la hora de almorzar
bool monseCasada = false;              // Mi estado civil es soltera
bool ritmoNocturno = true;             
// Mayor activación y rendimiento nocturno
bool consumoMusicaConstante = true;     
// Música obligatoria para leer, escribir, caminar, analizar
bool audifonosEnTrayecto = true;       
// Indispensable en viajes largos para regular el entorno
bool libretaFisicaActiva = true;       
// Anoto casi todo en papel para fijar información
bool organizacionPorTachado = true;    
// Presión por metas y satisfacción al tachar pendientes
bool celularSocialActivo = true;       
// Interfaz digital para amistades y familia
bool autonomiaSolitaria = true;        
// Preferencia por caminatas y movilidad independiente
bool boxeoPausado = true;              
// Pausado por tiempo y horarios
bool estudianteDisenho = true;

// Variables de números enteros (int) para datos exactos
int frecuenciaBicicletaSemanal = 1;    
// Se realiza 1 vez por semana
int frecuenciaBoxeoSemanal = 0;        
// En 0 debido a pausa temporal por choque de horarios
int bateriaSocial = 50;                
// Límite antes de requerir aislamiento/recarga
int edadActual = 23;
int diaNacimiento = 27;                
// Corregido el nombre de la variable
int mesNacimiento = 9;                 
// Corregido a minúscula para mantener orden
int anhoNacimiento = 2002;
int DiasUniversidad = 3;               
// Voy 3 veces a la semana a la universidad

void setup() {
  // Aquí va setup(), ocurre una vez al principio
  // Serial.begin(9600);
}

void loop() {
// Ocurre después de setup() y se repite infinitamente hasta que no se pueda
  
// Simulamos la fecha actual (en un proyecto real vendría de un sensor de tiempo o RTC)
int diaActual = 27; 
int mesActual = 9;

// Ejemplo de loop para decir feliz cumpleaños si la fecha coincide
if (diaActual == diaNacimiento && mesActual == mesNacimiento) {
// Acción repetitiva del loop cada 27 de septiembre: enviar mensaje de cumpleaños
    // Serial.println("¡Feliz cumpleaños, Monserrat! Hoy es 27 de septiembre.");
    
    // Ejemplo de actualización de edad (se ejecutaría al cumplirse la condición)
    // edadActual = edadActual + 1;
    // edadActual += 1;
    // edadActual++;
  }
}
```
### Link enviados en clase





### Bibliografía

- https://www.electrogeekshop.com/estructuras-de-control-en-arduino/?srsltid=AfmBOoohNwZMxEsydAlQfXtN4ovv21NBdHGlTOiBmzMwGmTAIy2hwtDu
  
- https://www.reddit.com/r/FreeCAD/comments/1l7wxb5/what_does_boolean_mean/?tl=es-419
  
- https://en.wikipedia.org/wiki/Boolean_data_type
  
- https://aprendiendoarduino.wordpress.com/2017/06/20/estructuras-de-control-3/


## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura

