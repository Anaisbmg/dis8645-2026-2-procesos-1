# sesion-03a
Martes 28 de Agosto

## apuntes sesión
Durante el semestre trabajaremos con diferentes componentes electrónicos para realizar pruebas que llevaran a proyectos de conexiones y programación.

Los materiales entregados esta clase fueron:

- Mini protoboard de 400 puntos
- Botones
- Caimanes para realizar conexiones
- Cables macho y hembra
- Tarjeta SD
- Pantalla LCD OLED de 0.91" I2C

**Las pantallas se miden considerando la longitud de su diagonal**

###  Pantalla OLED I2C
Durante esta clase aprendimos a realizar la conexión de esta pantalla.

La pantalla utilizada cuenta con cuatro conexiones principales:

| Pin | Función |
|---|---|
| `VCC` | Alimentación |
| `GND` | Tierra |
| `SDA` | Señal de datos |
| `SCL / SCK` | Señal de reloj |

Las patitas de la pantalla deben conectarse respetando la alimentación y las señales correspondientes.

```text
VCC → Alimentación
GND → Tierra
SDA → Datos
SCL → Clock
```
En la protoboard, las conexiones de alimentación pueden realizarse en paralelo utilizando las líneas correspondientes a `+` y `-`.

### Voltaje
Una consideración importante durante la conexión de componentes es verificar el voltaje de funcionamiento.

No se debe entregar un voltaje menor o mayor al que soporta el componente, ya que una alimentación incorrecta puede provocar que el componente no funcione correctamente o incluso dañarlo.

Arduino puede trabajar con diferentes niveles de voltaje dependiendo de la placa y del componente utilizado.

Algunos sistemas trabajan con: `5V` `3.3V`

### Bibliotecas
En Arduino se utiliza:
```
#include
```
Esta instrucción permite **incluir** una biblioteca dentro del programa para utilizar las funciones y recursos que contiene.

Por ejemplo, para trabajar con una pantalla OLED se utiliza una biblioteca que permite controlar sus funciones de texto, gráficos y desplazamiento.

### Pruebas de pantalla
Durante la clase se realizaron diferentes pruebas modificando el código de ejemplo de la pantalla OLED.

Una de las pruebas consistió en utilizar funciones de desplazamiento del texto:
```cpp
display.stopscroll();
delay(1000);

display.startscrollleft(0x00, 0x0F);
delay(2000);

display.stopscroll();
delay(1000);

display.startscrolldiagright(0x00, 0x07);
delay(2000);

display.startscrolldiagleft(0x00, 0x07);
delay(2000);

display.stopscroll();
delay(1000);
```

**Prueba de texto**
También modificamos una función encargada de mostrar texto en la pantalla.

El primer código utilizado fue:
```cpp
void testdrawbitmap(void) {
  display.clearDisplay();

  display.drawBitmap(
    (display.width()  - LOGO_WIDTH) / 2,
    (display.height() - LOGO_HEIGHT) / 2,
    logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, 1);

  display.display();
  delay(1000);

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();
  delay(100);

  // Segundo mensaje

  display.setCursor(10, 0);
  display.println(F("que ser buena."));
  display.display();
  delay(100);

  display.startscrollleft(0x00, 0x0F);

  display.startscrollleft(0x00, 0x0F);
  delay(3000);
}
```

**Problema observado**

Cuando eliminamos `display.clearDisplay();` los textos comenzaron a quedar sobrepuestos.

Esto permitió observar que la pantalla no elimina automáticamente el contenido anterior cuando se escribe un nuevo mensaje.

La función `display.clearDisplay();` sirve para limpiar el contenido almacenado en el buffer de la pantalla antes de mostrar nueva información.

**Segunda prueba**

Volvimos a realizar la prueba utilizando dos mensajes.
```cpp
void testscrolltext(void) {

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();
  delay(100);

  // Segundo mensaje

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("que ser buena."));
  display.display();
  delay(100);

  display.startscrollleft(0x00, 0x0F);

  display.startscrollleft(0x00, 0x0F);
  delay(3000);
}
```

Nuevamente ocurrió el problema de superposición del texto, debido a que ambos mensajes tenían la misma posición `display.setCursor(10, 0);`.

Por lo tanto, los dos textos comenzaban a escribirse desde el mismo punto de la pantalla.

**Corrección de la posición**

Para solucionar el problema se modificó la posición del segundo texto.

El primer mensaje quedó en:
```cpp
display.setCursor(10, 0);
display.println(F("No tienes"));
```
Mientras que el segundo mensaje se colocó más abajo:
```cpp
display.setCursor(10, 10);
display.println(F("que ser buena."));
```
El código utilizado fue:
```cpp
void testscrolltext(void) {

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  display.println(F("No tienes"));
  display.display();
  delay(100);

  // Segundo mensaje

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 10);
  display.println(F("que ser buena."));
  display.display();
  delay(100);

  display.startscrollleft(0x00, 0x0F);

  display.startscrollleft(0x00, 0x0F);
  delay(3000);
}
```

El resultado visual fue:
```
No tienes
que ser buena.
```
De esta manera, los textos dejaron de superponerse porque cada uno tenía una posición diferente dentro de la pantalla.

### Funcionamiento
```
Código Arduino
      ↓
Biblioteca OLED
      ↓
Comunicación I2C
      ↓
SDA + SCL
      ↓
Pantalla OLED
      ↓
Texto / imagen / desplazamiento
```
## lectura
