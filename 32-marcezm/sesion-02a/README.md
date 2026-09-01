# sesion-02a
Martes 18 de Agosto
(este día no fui a clases asi que mis apuntes son en base a las bitácoras de mis compañeros)

## apuntes sesión

### Potenciómetro 
- Potenciómetro = resistencia variable
- Permite regular o variar una propiedad eléctrica mediante el cambio de resistencia.
- Tiene una parte fija y una parte variable.
- La patita de el medio corresponde a la lectura variable.
- Dependiendo de su tipo puede ser utilizado para audio o de manera lineal.

### Potencia, energía, voltaje y corriente
- Potencia = energía/tiempo.
- En electricidad:
  - Potencia = voltaje x corriente
- El voltaje está relacionado con la energía.
- La corriente está relacionada con el movimiento/cantidad de electrones y el tiempo.
- El resistor funciona oponiéndose al paso de los electrones.

---

### Botones
- Los botones también se conocen como **pulsadores**.
- Existen diferentes tipos:
  - **Pushbutton:** funciona mientras se mantiene presionado, por lo que es temporal.
  - **Toggle:** el cambio permanece después de realizar presionar, funcionando como un interruptor.

### N.O. Y N.C.
- **N.O.** = Normally open
  - El circuito está abierto normalmente.
  - Al presional el botón se permite el paso de corriente.
    
- **N.C.** = Normally closed
  - El circuito es conectado normalmente.
  - Al presionar el botón se desconecta.

### Pull-down y Pull-up
**Pull-down:** 
`VCC → BOTÓN → RESISTENCIA → LECTURA → GND`

- Sin presionar: `0`
- Presionado: `1`

**Pull-up:**
`VCC → RESISTENCIA → LECTURA → BOTÓN → GND`

- Sin presionar: `1`
- Presionado: `0`
- Es importante utilizar un resistencia para evitar conectar directamente el VCC con GND y provocar cortocircuito.

---

### Arduino
**Alimentación:**
- VCC: voltaje de alimentación continua.
- Arduino tiene conexiones de:
  - `5V`
  - `3V3`
  - `GND`
- Para el ejercicio utilizaron `5V` y `GND`.
- No se utilizó `VIN`.

### Entradas analógicas y digitales
- **Analog-in:** está destinada a realizar lecturas analógicas.
- **Digital:** puede funcionar de distintas maneras dependiendo de las intrucciones que se le den.
- Los potenciómetros se conectan a entradas analógicas.
- Los botones se conectan a entradas digitales.

### Protoboard
- breadboard = protoboard
- Se utuliza para realizar y organizar las conexiones entre Arduino y los componentes.

---

### Conexión de potenciómetro 
- Conectar una patita del potenciometro a `5V`.
- Conectar otra patita a `GND`.
- La patita de el medio se utiliza como salida/entrada.
- Conectar patita central a `A0`.
- Para facilitar se pueden usar cables y caimanes.

### Lectura analógica
- Arduino trabaja la entrada analógica con 10 bits.
- `2^10 = 1024` valores posibles.
- El rango de lectura va desde:
  - mínimo: `0`
  - máximo: `1023`
- Valor aproximado del medio: `511/512`
- Los números de lectura deben entenderse dentro de un contexto.

### Código para leer el potenciómetro

```cpp
const int patitaLectura = A0;

int valorLectura = -1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valorLectura = analogRead(patitaLectura);
  Serial.println(valorLectura);
}
```

### Elemetos del código
- `const` se utiliza para definir una constante.
- `int` permite guardar números enteros.
- `patitaLectura` nombre que se le da a la variable que indica dónde realizará la lectura.
- `A0` entrada analógica utilizada para leer el potenciómetro.
- `valorLectura` variable donde se almacena el valor obtenido.
- `Serial.begin(9600)` inicia la comunicación serial.
- `analogRead()` realiza una lectura analógica.
- `Serial.println()` muestra el valor en el monitor serial.
- `9600` velocidad de comunicación serial.

###Sobre `int`
- `int` trabaja con números enteros.
- Por ejemplo:
  - `1/4 = 0,25`
  - si se trabaja como `int`, el resultado será `0` porque no conserva los decimales.

### Ejercicio en clases
- Se conectó un potenciómetro a Arduino mediante una protoboard.
- Se conectó:
  - `5V` al potenciómetro
  - `GND` al potenciómetro
  - `A0` a la patita central del potenciómetro
- Se cargó el código en Arduino.
- Se abrió el Monitor Serial.
- Al mover la perilla se pudieron observar diferentes valores.
- Al llevar la perilla hacia un extremo se obtiene un valor cercano a 0.
- Al llevarla al otro extremo se obtiene un valor cercano a 1023.
- En una posición intermedia se obtiene un valor intermedio.

### Problemas durante el ejercicio
- Al ejecutar el código y mover la perilla hasta el máximo apareció un error.
- No se identificó exactamente la causa del error.
- Se cerró y volvió a abrir el archivo/programa.
- Después de volver a intentarlo, el código funcionó correctamente.

## encargos

## lectura
