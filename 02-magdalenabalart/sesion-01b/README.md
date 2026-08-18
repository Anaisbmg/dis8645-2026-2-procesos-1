# sesion-01b

## apuntes sesión

# Álgebra booleana

El **álgebra booleana** es una forma de trabajar con lógica utilizando solamente dos valores posibles:

```text
0 = falso
1 = verdadero
```

no es cualquier álgebra ya que no se trabaja principalmente con cantidades, sino con **estados lógicos**.

entonces yo puedo imaginar:

```text
0 = luz apagada
1 = luz encendida
```

O también:

```text
0 = condición falsa
1 = condición verdadera
```

Esto es importante porque un computador constantemente necesita evaluar si algo es **verdadero o falso** para decidir qué acción realizar. (si soi)

Por ejemplo, en C++ puedo tener:

```cpp
int edad = 24;
```

y luego evaluar:

```cpp
edad >= 18
```

El computador se está preguntando:

> ¿24 es mayor o igual a 18?

La respuesta es verdadera, por lo tanto:

```text
edad >= 18 → true → 1
```
## Operaciones principales del álgebra booleana

Las tres operaciones principales son:

- **AND** → Y
- **OR** → O
- **NOT** → NO / negación

pueden ser representadas de distintas maneras:

| Operación | Álgebra booleana | C++ | Significado |
|---|---|---|---|
| AND | `A · B` | `A && B` | A **Y** B |
| OR | `A + B` | `A \|\| B` | A **O** B |
| NOT | `Ā` | `!A` | **NO** A |

los símbolos `+` y `·` **no funcionan exactamente como una suma y una multiplicación matemática normal**. Acá representan operaciones lógicas.

## Reglas del álgebra booleana

![Reglas del álgebra booleana](INSERTAR_AQUI_IMAGEN_ALGEBRA_BOOLEANA.png)

La imagen anterior muestra algunas de las reglas principales que cumplen las operaciones `OR`, `AND` y `NOT`.

## OR — `||`

`OR` significa **“O”**.

Sirve cuando quiero que algo ocurra si **al menos una de varias condiciones es verdadera**.

Por ejemplo:

```cpp
if (esSabado || esDomingo) {
    // es fin de semana
}
```

En este caso, no necesito que sea sábado y domingo al mismo tiempo. Basta con que una de las dos condiciones sea verdadera para que el `if` se cumpla.

> **“Tengo distintas alternativas y con que una se cumpla, es suficiente.”**

Me sirve cuando una acción puede ocurrir por **más de una razón o alternativa válida**.

## AND — `&&`

`AND` significa **“Y”**.

Sirve cuando necesito que **todas las condiciones se cumplan al mismo tiempo**.

Por ejemplo:

```cpp
if (tengoEntrada && soyMayorDeEdad) {
    // puedo entrar
}
```

En este caso necesito cumplir dos requisitos:

- Tener entrada.
- Ser mayor de edad.

Si tengo entrada pero no soy mayor de edad, no puedo entrar. Si soy mayor de edad pero no tengo entrada, tampoco puedo entrar.

Por eso puedo pensar `AND` como:

> **“Para que esto ocurra, necesito cumplir todos los requisitos.”**

Me sirve cuando una acción depende de **varias condiciones obligatorias**.

## NOT — `!`

`NOT` significa **“NO”** o **negación**.

Sirve para tomar una condición y preguntar por **lo contrario**.

si tengo:

```cpp
bool encendido = false;
```

puedo escribir:

```cpp
if (!encendido) {
    // el dispositivo está apagado
}
```

`!encendido` significa:

> **“NO está encendido.”**

Entonces `NOT` invierte el valor de una condición:

- Si algo era verdadero, pasa a falso.
- Si algo era falso, pasa a verdadero.

Por eso puedo pensar `NOT` como:

> **“Quiero comprobar que algo NO esté ocurriendo.”**

Me sirvepara revisar si una puerta **no** está abierta, si un botón **no** está presionado o si un dispositivo **no** está encendido.

Entonces puedo resumirlos así:

- `OR` → sirve cuando **una de varias opciones es suficiente**.
- `AND` → sirve cuando **todas las condiciones deben cumplirse**.
- `NOT` → sirve cuando quiero comprobar **lo contrario de una condición**.

En C++ se representan como:

```cpp
||   // OR
&&   // AND
!    // NOT
```

Estas operaciones son importantes porque son la base lógica que después utilizamos dentro de los `if` para indicarle al computador **cuándo debe o no debe ejecutar una acción**.

# `if`: decidir si ejecutar un bloque de código

`if` es una **estructura condicional**. Sirve para que el computador decida si debe ejecutar o no una parte del código.

Su estructura básica es:

```cpp
if (condicion) {
    // instrucciones
}
```

osea: SI ES MAYOR DE EDAD ES TRUE, ENTONCES LE DAMOS PERMISO, SI ES FALSE, NO TIENE PERMISO

solo dos resultados:

```text
true
```

o:

```text
false
```

Por ejemplo:

```cpp
int edad = 24;

if (edad >= 18) {
    Serial.println("Puede entrar");
}
```

El computador evalúa:

```text
24 >= 18
```

Como el resultado es:

```text
true
```

entra al bloque `{ }` y ejecuta:

```cpp
Serial.println("Puede entrar");
```

Una forma que me sirve para entenderlo es:

> **`true` funciona como un permiso para entrar al bloque de código.**

En cambio, si:

```cpp
int edad = 15;
```

entonces:

```text
15 >= 18 → false
```

y el computador **no entra al bloque**.

## ¿Y los comentarios `//`?

El computador **no entiende ni ejecuta** lo que está después de `//`.

Por ejemplo:

```cpp
if (edad >= 18) {
    // puede entrar
}
```

`// puede entrar` es solo una nota para quien está leyendo el código

Si quiero que el computador realmente haga algo, necesito una instrucción:

```cpp
if (edad >= 18) {
    Serial.println("Puede entrar");
}
```

Entonces puedo separar el `if` en dos partes:

```text
CONDICIÓN
edad >= 18
↓
true o false
↓
¿entra al bloque?

ACCIÓN
Serial.println("Puede entrar");
↓
qué hace si logra entrar
```

## `if` y `else`

`else` permite indicar qué hacer si la condición da `false`.

```cpp
if (edad >= 18) {
    Serial.println("Puede entrar");
} else {
    Serial.println("No puede entrar");
}
```

Entonces:

```text
true  → entra al if
false → entra al else
```

En resumen:

> **La condición decide si se entra al bloque y las instrucciones dentro del bloque indican qué debe hacer el computador.**

# Operadores de comparación

Los **operadores de comparación** sirven para comparar dos valores.

Se usan mucho dentro de un `if`.

| Operador | Significa |
|---|---|
| `==` | igual a |
| `!=` | distinto de |
| `>` | mayor que |
| `<` | menor que |
| `>=` | mayor o igual que |
| `<=` | menor o igual que |

Ejemplo:

```cpp
int edad = 24;
```

```cpp
edad == 24
```

Resultado:

```text
true
```

```cpp
edad > 18
```

Resultado:

```text
true
```

```cpp
edad < 18
```

Resultado:

```text
false
```

También es importante diferenciar:

```text
=  → asignar un valor
== → comparar
```

# Cómo y por qué cambia el valor de una variable

Una variable puede cambiar mientras el programa está funcionando, pero **no cambia sola** para que cambie, tiene que existir alguna instrucción que le diga al programa **cuándo debe modificarla**.

Por ejemplo, en un juego puedo comenzar con:

```cpp
int vidas = 3;
```

Eso significa que el jugador comienza con 3 vidas

Pero escribir solamente

```cpp
vidas--;
```

no explica **cuándo** debería perder una vida.

Por ese cambio aparece asociado a una condición:

```cpp
if (jugadorMurio == true) {
    vidas--;
}
```

La lógica sería:

```text
¿murió el jugador?
      ↓
    true
      ↓
ejecutar vidas--
      ↓
3 vidas → 2 vidas
```

Entonces puedo separar estas dos ideas:

- `if` decide **cuándo ocurre el cambio**.
- `vidas--` indica **qué cambio hacer**.

Esto sirve porque el programa puede ir **actualizando información automáticamente según lo que ocurre mientras está funcionando**, sin que yo tenga que editar manualmente el valor cada vez.

Algunas formas comunes de modificar variables son:

```cpp
vidas--;       // resta 1
contador++;    // suma 1
puntaje += 10; // suma 10
dinero -= 500; // resta 500
```

Por lo tanto, la idea importante no es solamente que “una variable puede cambiar”, sino que:

> **el programa puede cambiar el valor de una variable cuando ocurre una condición o evento determinado.**

## ¿Qué es un bit?

Un **bit** es una sola posición binaria.

Por ejemplo:

```text
1
```
es **1 bit**.

En cambio:

```text
1010
```
son **4 bits**, porque hay cuatro posiciones:

```text
1   0   1   0
↑   ↑   ↑   ↑
1   2   3   4 bits
```

Cuando tenemos **8 bits**, se forma una unidad llamada **byte**:

```text
10101100
```
```text
8 bits = 1 byte
```
Esto es una convención utilizada en computación, parecido a decir:

```text
100 centímetros = 1 metro
```
 **cada posición tiene un valor**.

En un número binario de 4 bits, las posiciones valen:

```text
8   4   2   1
```
```text
8   4   2   1
↓   ↓   ↓   ↓
0   1   0   1
```

El `1` significa:

> “Tomo el valor de esta posición”.

El `0` significa:

> “No tomo el valor de esta posición”.

Entonces en:

```text
0101
```
es igual a

```text
8   4   2   1
0   1   0   1
```

# ¿Por qué las posiciones valen 8, 4, 2 y 1?

el sistema binario funciona en **base 2**, eso significa que cada posición vale **el doble que la posición anterior**.

Partimos desde la derecha con:

```text
1
```

y vamos duplicando hacia la izquierda:

```text
1
2
4
8
16
32
64
128
...
```
La forma matemática de verlo sería:

```text
2³   2²   2¹   2⁰
8    4    2    1
```

> **Parto desde 1 a la derecha y cada posición hacia la izquierda vale el doble.**

# Hexadecimal

El **sistema hexadecimal** es otra forma de representar números. La diferencia es que en vez de usar 10 símbolos como el sistema decimal, se utilizan **16 símbolos**:

```text
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

Las letras aparecen porque después del `9` todavía faltan seis valores para llegar a 15:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

Después de `F` viene `10`. En hexadecimal, ese `10` representa el número **16 en decimal**.

## ¿Cómo se relaciona con los bits?

Un grupo de **4 bits** puede representar números desde `0` hasta `15`. Por eso se puede convertir directamente en **un símbolo hexadecimal**.

Para saber cuánto vale un grupo de 4 bits uso:

```text
8 4 2 1
```

Por ejemplo:

```text
8 4 2 1
0 0 1 0
```

Solo está activo el `2`, entonces:

```text
0010 = 2
```
Como el resultado es `2`, en hexadecimal **sigue siendo `2`**

Las letras aparecen solamente cuando el resultado es `10`, `11`, `12`, `13`, `14` o `15`

Por ejemplo:

```text
8 4 2 1
1 1 0 0
```

Sumo las posiciones que tienen `1`:

```text
8 + 4 = 12
```

Y como en hexadecimal:

```text
12 = C
```

entonces:

```text
1100 = C
```

## Conversión de 4 bits a hexadecimal

| Binario | Decimal | Hexadecimal |
|---|---:|---|
| `0000` | 0 | `0` |
| `0001` | 1 | `1` |
| `0010` | 2 | `2` |
| `0011` | 3 | `3` |
| `0100` | 4 | `4` |
| `0101` | 5 | `5` |
| `0110` | 6 | `6` |
| `0111` | 7 | `7` |
| `1000` | 8 | `8` |
| `1001` | 9 | `9` |
| `1010` | 10 | `A` |
| `1011` | 11 | `B` |
| `1100` | 12 | `C` |
| `1101` | 13 | `D` |
| `1110` | 14 | `E` |
| `1111` | 15 | `F` |

Por lo tanto, la regla que me sirve es:

> **Primero calculo cuánto valen los 4 bits usando 8-4-2-1. Si el resultado es de 0 a 9, mantengo el número. Si el resultado es de 10 a 15, uso las letras A-F.**

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.
2. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

Intento 01 función: 

Nombre: comidaBuenaOnda
Tipo: void
Argumentos: diaDeLaSemana, estoyConEri, hayChoritos
Uso: decidir si una comida cumple las condiciones para que mi corazón esté contento.

Estoy en un día de comida
        ↓
¿Es domingo Y estoy con Eri?
        ↓
       SÍ
        ↓
¿Hay choritos con mayo y limón?
      ↙       ↘
    SÍ         NO
    ↓           ↓
corazón      buscar otra
contento       comida

```text
FUNCIÓN comidaBuenaOnda(díaDeLaSemana, estoyConEri, hayChoritos)

    SI es domingo Y estoy con Eri
        ENTONCES

        SI hay choritos con mayo y limón
            ENTONCES
            corazón contento

FIN 
```
```cpp
void comidaBuenaOnda(string diaDeLaSemana, bool estoyConEri, bool hayChoritos) {

    if (diaDeLaSemana == "Domingo" && estoyConEri == true) {

        if (hayChoritos == true) {
            corazonContento();
        }
    }
}

comidaBuenaOnda("Domingo", true, true);
```
intento 02 función: 

# Intento 02 función:

**Nombre:** `deberiaSalir`  
**Tipo:** `void`  
**Argumentos:** `diaDeLaSemana`, `tengoPlata`, `tengoGanas`, `eriDisponible`  
**Uso:** decidir si salir o qué hacer dependiendo del día y de las condiciones que tenga.

Quiero salir
      ↓
¿Es viernes?
      ↓
    SÍ
      ↓
¿Tengo plata Y tengo ganas?
   ↙              ↘
 SÍ                NO
 ↓                  ↓
salir          quedarme en casa


Quiero salir
      ↓
¿Es sábado?
      ↓
    SÍ
      ↓
¿Eri está disponible?
   ↙              ↘
 SÍ                NO
 ↓                  ↓
salir          ver una película


Si no corresponde a ninguna de esas situaciones
              ↓
        quedarme en casa

```text
FUNCIÓN deberiaSalir(diaDeLaSemana, tengoPlata, tengoGanas, eriDisponible)

    SI es viernes
        ENTONCES

        SI tengo plata Y tengo ganas
            ENTONCES
            salir
        SI NO
            quedarme en casa

    SI NO, SI es sábado
        ENTONCES

        SI Eri está disponible
            ENTONCES
            salir
        SI NO
            ver una película

    SI NO
        quedarme en casa

FIN
```

```cpp
void deberiaSalir(string diaDeLaSemana, bool tengoPlata, bool tengoGanas, bool eriDisponible) {

    if (diaDeLaSemana == "Viernes") {

        if (tengoPlata && tengoGanas) {
            salir();
        }
        else {
            quedarmeEnCasa();
        }
    }

    else if (diaDeLaSemana == "Sabado") {

        if (eriDisponible) {
            salir();
        }
        else {
            verUnaPelicula();
        }
    }

    else {
        quedarmeEnCasa();
    }
}
```
## lectura
