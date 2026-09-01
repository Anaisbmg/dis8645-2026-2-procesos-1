# Proyecto-1 / grupo-07

fecha: 6 de septiembre 2026

## Integrantes:

Emilia Contreras / [hazzaily](https://github.com/hazzaily)

Monserrat Paredes / [Monserrat-Paredes](https://github.com/Monserrat-Paredes)

Katalina Riquelme / [riyakatalinaa](https://github.com/riyakatalinaa)

---


## Poeta escogida → **Alfonsina Storni**

Esta poeta argentina nacida en 1892 en Suiza es uno de los íconos de la literatura posmodernista. Con una infancia difícil y con carencias y luego una vida con recurrentes enfermedades, su poesía está impregnada de lucha, audacia, amor y una reivindicación del género femenino. Algunos de sus poemas a resaltar son: ¡Adiós!, Alma desnuda, La caricia perdida, Razones y paisajes de amor, Queja, Tu dulzura, Dolor y Frente al mar.

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


## Materiales

|Componente|Cantidad|Precio|Link|
|---|---|---|---|
|Arduino UNO R4 Mínima|1|$32.990|<https://mcielectronics.cl/shop/product/arduino-uno-r4-minima/>|
|Pantalla LCD Oled 0,91" I2C|1|$3.990|<https://afel.cl/products/pantalla-lcd-oled-0-91?_pos=1&_sid=f1b122119&_ss=r>|
|Protoboard|1|$1.500|<https://afel.cl/products/mini-protoboard-400-puntos>|
|Botón Táctil|1|$400|<https://afel.cl/products/boton-tactil-tapa-12x12x7-3-interruptor?_pos=3&_sid=a0018323a&_ss=r>|
|cables|6|$1.000|<https://afel.cl/products/pack-20-cables-de-conexion-macho-macho>|
|Potenciómetro B500k|1|$500|<https://afel.cl/products/potenciometro-10k-ohm>|


---


## Proceso código y registro

Código 0 → 28/08/26

visualiza el poema en el serial monitor en loop

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
  // put your setup code here, to run once:
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
