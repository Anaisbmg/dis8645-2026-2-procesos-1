# Proyecto-1 / grupo-07

Fecha entrega: 2026-09-11

## Integrantes:

Emilia Contreras / [hazzaily](https://github.com/hazzaily)

Monserrat Paredes / [Monserrat-Paredes](https://github.com/Monserrat-Paredes)

Katalina Riquelme / [riyakatalinaa](https://github.com/riyakatalinaa)

---


## Poeta escogida → **Alfonsina Storni**

Esta poetisa argentina nacida en 1892 en Suiza es uno de los íconos de la literatura posmodernista. Con una infancia difícil y con carencias y luego una vida con recurrentes enfermedades, su poesía está impregnada de lucha, audacia, amor y una reivindicación del género femenino. Algunos de sus poemas a resaltar son: ¡Adiós!, Alma desnuda, La caricia perdida, Razones y paisajes de amor, Queja, Tu dulzura, Dolor y Frente al mar.

Toda su obra refleja dramatismo, lucha y una audacia inusual para la época. Su temática es, sobre todo, amorosa, feminista y profunda, en donde se refleja un carácter singular, marcado muchas veces por la neurosis.

Su muerte, continúa la huella de su transgresora personalidad. Su trágico suicidio, en las aguas de la playa "La Perla", de Mar del Plata, el 25 de octubre de 1938, le permitió huir de una penosa enfermedad oncológica y de la soledad que la invadía.

Información sacada de → https://www.poemas-del-alma.com/alfonsina-storni.htm#block-bio

## Poema escogido

Queja

Señor, mi queja es ésta,

Tú me comprenderás;

De amor me estoy muriendo,

Pero no puedo amar.

Persigo lo perfecto

En mí y en los demás,

Persigo lo perfecto

Para poder amar.

Me consumo en mi fuego,

¡Señor, piedad, piedad!

De amor me estoy muriendo,

¡Pero no puedo amar.

Poema sacado de → https://www.cultura.gob.ar/9-poemas-imprescindibles-de-alfonsina-storni-8463/

### Análisis:
"Queja" → habla de perfeccionismo que impide amar, de consumirse en el propio fuego por exigir perfección. Es un poema de contención, control, tensión interna.

---

## Bill of Materials

|Componente|Cantidad|Precio|Link|
|---|---|---|---|
|Arduino UNO R4 Mínima|1|$32.990|<https://mcielectronics.cl/shop/product/arduino-uno-r4-minima/>|
|Pantalla LCD Oled 0,91" I2C|1|$3.990|<https://afel.cl/products/pantalla-lcd-oled-0-91?_pos=1&_sid=f1b122119&_ss=r>|
|Protoboard|1|$1.500|<https://afel.cl/products/mini-protoboard-400-puntos>|
|Botón Táctil|1|$400|<https://afel.cl/products/boton-tactil-tapa-12x12x7-3-interruptor?_pos=3&_sid=a0018323a&_ss=r>|
|cables|6|$1.000|<https://afel.cl/products/pack-20-cables-de-conexion-macho-macho>|
|Potenciómetro B500k|1|$500|<https://afel.cl/products/potenciometro-10k-ohm>|


---

## ¿Qué queremos que pase?
- Cambio de dirección 2: de derecha a izquierda. Lo que queremos es que lo que se proyecte en la pantalla represente el poema, por ende, puede ser que solo se proyectan ciertas palabras y no todo el texto.
- Que la velocidad del texto cambie según la perilla del potenciómetro.
- A través de un botón, tener la posibilidad de detenerlo y/o cambiar la dirección del poema.
- Que a ciertas palabras del poema se les pueda bajar o subir la opacidad con el potenciómetro.
- perfeccionismo = control = pausar/reanudar (botón)
- cambio = velocidad de reproducción (potenciómetro)
- cambio = dirección del texto (botón)
- dirección inicial del texto: arriba hacia abajo
- cambio de dirección 1: de izquierda a derecha
- poner al comienzo el nombre de la poetisa Alfonsina Storni


## Paso a paso de que queremos que suceda

- lo primero en proyectarse en la pantalla es el nombre de la poetisa "Alfonsina Storni"
- el potenciómetro controla el salto de verso en verso 
- el poema "Queja" comienza proyectarse y avanza mediante uno vaya girando el potenciometro
- en algunos de los versos existen palabras intensas las cuales tienen el tamaño de la tipografía mas grande que simula un efecto de "grito"
- al inicio tiene un animación con el titulo del poema y entre medio de cada estrofa tiene una animación







## Proceso código y registro

[intentoUnoPoema](https://github.com/disenoUDP/dis8645-2026-2-procesos-1/tree/main/00-proyecto-1/grupo-07/codigos/intentoUnoPoema) → 28/08/26

versión 0 que solo visualiza el poema en el serial monitor en loop

```cpp
// poema "queja"
// de allfonsina storni

// Señor, mi queja es ésta,
// Tú me comprenderás;
// De amor me estoy muriendo,
// Pero no puedo amar.
// Persigo lo perfecto
// En mí y en los demás,
// Persigo lo perfecto
// Para poder amar.
// Me consumo en mi fuego,
// ¡Señor, piedad, piedad!
// De amor me estoy muriendo,
// ¡Pero no puedo amar.

// char = caracter
// por ende
// esta parte del codigo
// separa el poema en versos
// y al haber definido en clases
// que una linea como un arreglo de caracteres
// por eso se utiliza char

char *misVersos[] = {
  "Señor, mi queja es ésta,",
  "Tú me comprenderás",
  "De amor me estoy muriendo,",
  "Pero no puedo amar.",
  "Persigo lo perfecto",
  "En mí y en los demás,",
  "Persigo lo perfecto",
  "Para poder amar.",
  "Me consumo en mi fuego,",
  "¡Señor, piedad, piedad!",
  "De amor me estoy muriendo,",
  "¡Pero no puedo amar!"
};

void setup() {

  // 9600 baud (simbolos) es un numero moderado
  // y no puede ser cualquiera
  // debe ser el resultado de un 2 elevado a algo
  Serial.begin(9600);
}

void loop() {

  // recorrer el arreglo
  // for es para recorrer conjuntos
  // adentro tiene 3 mini lineas
  // inicio de los tiempos
  // oye pero cuando paro
  // que hago despues de cada iteracion
  for (int i = 0; i < 5; i++) {
    Serial.println(misVersos[i]);
  }
}
```
