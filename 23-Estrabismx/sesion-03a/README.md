# sesion-03a

Antes de iniciar a escribir (otra vez), me hago un recordatorio importante, demasiado importante

**Revisar al momento de hacer commit** 

Ya que se borró todo lo que había escrito...

<br>

## apuntes sesión

### Pantalla LCD OLED 0,91" I2C 

Iniciamos la clase revisando la nueva adquisición, una pantalla led 

![LCD](./imagenes/lcd.webp)

> Directamente desde [AFEL](https://afel.cl/products/pantalla-lcd-oled-0-91)

<br>

Vamos a desglosar el nombre para entender algunos puntos relevantes:

1. Pantalla: También conocido como _display_.

2. LCD OLED / (Diodo Orgánico Emisor de Luz): Tipo de pantalla. En este caso cada pixel se puede iluminar de manera independiente y generar mayores contrastes al no necesitar retroiluminación

3.  0,91": Es la resolución en pulgadas (acá somos hater del sistema imperial), esta se mide en diagonal. Para este caso es de 128px x 32px

4.  I2C / IIC: Quiza de los puntos más relevantes, ya que consta del protocolo de comunicación que existe entre la pantalla y nuestro microcontrolador. Se recomienda en este nivek, utilizar este protocolo, ya que solo consta de 4 pines

  - VCC > Es la alimentación de la pantalla, esta puede ser 3V3 o 5V

  - GND > Es la puesta a tierra, es importante que comparta la misma con el microcontrolador 

  - SCL / SCK > Serial Clock 

  - SDA > 

## encargos

## lectura
