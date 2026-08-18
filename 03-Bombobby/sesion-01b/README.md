# sesion-01b

## apuntes sesión

Luchando contra el sueño y aprendiendo que el término "bug" se dio por una polilla, intento entender lo que el profesor explica sobre los códigos funciones y el C++

Nos presentar Arduino, un software que usaremos para crear códigos y funciones.

Setup = Configuración

= (guardar o asignar)
== (comparar)

Loop () Ciclo de vida
Int Da un resultado
Void ocurre sin dar un resultado, solo ejecuta la instrucción

Los códigos arduino (basado en C++) se dividen en 2 partes:

cpp
void setup () {
// 1. Configuración inicial
// Se ejecuta una sola vez
}

void loop () {
// 2. Bucle infinito
// Mientras la placa tenga energía, este se repite sin parar.
}

bit: o vale 0 (apagado) o vale 1 (encendido)

8 bits = 1 byte. Este permite guardar números o letras más grandes


## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.

La primera parte es difícil de explicarla para mí, ya que no tenía la placa conmigo. Pero mi compañera conectó la placa a su pc para iniciar, hicimos el reset manual y la luz de la placa empezó a parpadear suavemente.
He aquí las pruebas:

Lo que se logró posteriormente, fue prender completamente la matriz de LEDs.
Había que empezar el 

```cpp

 void setup () {
 pantalla.begin ();
 }
```

 siendo ".begin" lo que llama a la pantalla para prenderse.
Para saber cómo se prende la pantalla, necesitábamos saber cómo escribirla en código, ahí llega el bitmap que funciona con 0 y 1, que como anteriormente mencioné; cada 1 representa un encendido y cada 0 un apagado (en este caso los LEDs)

```
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

## lectura
