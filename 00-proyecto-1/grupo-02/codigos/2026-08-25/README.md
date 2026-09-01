# Génesis 

# part 1 en clase
En este día, nos fueron entregados los materiales con los que vamos a trabajar. 
1. Proto Board
2. pantalla LCD Oled 0,91
3. Cables
4. etc..., poner que más. 

Luego, cuando se nos fue explicado el ejercicio en clase, el cual escalo a ser el proyecto 1, comenzamos en la búsqueda de los poemas que queríamos seleccionar para nuestro proyecto, y a su vez, se comenzó a definir lo que queríamos hacer, y así se ve nuestra primera intro, de lo que queríamos hacer:

```cpp
// lectura de 2 poemas con arduino uno r4 wifi
// En una pantalla LCD Oled 0,91" I2C. 

// por Francisca Palma, Nicolas Valdes, Santiago Cifuentes Vélez.
// Ejercicio en clase para dis8645-2026-2

// materiales
// arduino uno r4 wifi
// potenciometro b100k
// push boton
//Protoboard
//pantalla LCD Oled 0,91" I2C
//resistencia de 10k
//cable usb/C

// conexiones
//potenciometro
// orejas de potenciometro a VCC y GND
// nariz de potenciometro a entrada A0 (entendiéndose como la pata de la mitad)

//proyectar fragmento del poema "a los perros buenos no les pasan cosas malas", y "mamá tu no cumples años, tu cumples sueños" de elvira sastre, en pantalla LCD Oled 0,91" I2C
//el hardware tiene dos componentes interactivos esenciales: potenciometro y botón.
//potenciómetro: el poema saltará de línea a medida que se cambia la resistencia de este.
// La primera línea del texto será 0k y la última línea será del texto será 100k. Vamos a movernos dentro del rango de 0 y 100 para avanzar o retroceder en líneas y leer.
//push boton: al oprimir el botón, se cambia de poema.
//push boton:  el poema se mantiene en la pantalla; estado 0. Al presionar, se cambia de poema; estado 1 y luego se mantiene en el poema cambiado; estado 0.
```
## poemas escogidos
Los poemas que fueron seleccionados en el comienzo, fueron fragmentos de la poeta, autora y escritora Elvira Sastre: 
1. "A los perros buenos no les pasan cosas malas"
2. "Mamá tu no cumples años, tu cumples sueños"
