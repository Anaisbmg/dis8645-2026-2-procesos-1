# sesion-06a

## apuntes sesión


Variables y tipos de datos


Explicaron que `int` vendría siendo una variable. Como metáfora: si vas al súper tienes que pensar **cómo y dónde llevarte lo que compraste**.

Si compras un chicle, lo puedes llevar en el bolsillo. Pero si compras una tabla de tres metros de madera, necesitas un flete sí o sí (o una camioneta, obvio).

¿Podrías llevarte el chicle en un flete? Sí, pero sería ineficiente. De la misma manera, tenemos que elegir el tipo de dato según lo que necesitamos guardar.



### `int`

`int` funciona con números antes y después del cero.

Por ejemplo:

```cpp
int edad = 23;
```

También existe `uint`, que mueve el cero al inicio, por lo que solamente permite aumentar.

La idea es elegir el tipo de dato que corresponde según lo que necesitamos guardar, para no utilizar más espacio del necesario.



### `bool`

`bool` es un tipo de dato muy pequeño.

Aaron lo comparó con **el bolsillo dentro del bolsillo del jeans** jiji

Sirve para valores que pueden ser solamente dos opciones 0 1, como:

```cpp
bool hambre = true;
bool durmiendo = false;
```



### `char`

`char` sirve para guardar un carácter.


## Datos, variables y funciones


Las **clases siempre van con mayúscula**.


Podemos pensar en:


* **Datos / variables / atributos** → lo que tiene una cosa.
  
* **`()` acciones / funciones / métodos** → lo que se puede hacer con esos datos.


Por ejemplo, una persona puede tener atributos y métodos.


### Matías


**Atributos**

* `float` → piti, porque es un porcentaje.
* 
* Le cuesta pronunciar algunas palabras.


**Métodos**

* Ponerse los lentes.

### Blossom

**Atributos**

* Manicurista.
* Tengo rulos en el pelo. Esto podría ser `float`, en porcentaje, porque hay veces que tengo los rulos menos definidos o más definidos.
* Cumplo años en octubre.


**Métodos**

* Hacer las uñas.
* Leo en la Kindle.
* Voy a clase.

## Clases e herencia

La **herencia** nos permite decir que existen clases que tienen características de una clase superior.

Por ejemplo, `Poodle` puede ser una clase y su superclase puede ser `Perrite`, porque todos los poodles son perritos.

```cpp
class Perrite {
    bool hambre = true;
    bool durmiendo = true;
    int pelaje = #000000;

    Comer()
    Dormir()
}
```

Entonces:

```cpp
class Poodle {
    superclass Perrite();

    ladrar()
}
```

`Poodle` hereda todo lo que tiene `Perrite` y sigue siendo una clase.

Por ejemplo:

```cpp
Poodle copito;
```

Acá `Poodle` es la **clase** y `copito` es una **instancia** de esa clase.

Si `Perrite` sabe hacer algo, como ladrar, `Poodle` también puede hacerlo porque heredó esas características.



### Clase vs. instancia

**Clase:** es como el modelo o definición.

**Instancia:** es un objeto creado a partir de esa clase.

```cpp
Poodle copito;
```

`Poodle` → clase.

`copito` → instancia.



## `for` y objetos

También vimos que podemos recorrer un conjunto de objetos:

```cpp
for (perrite in perrites) {
    perrite.ladrar()
}
```

La idea es que el `for` recorra los perritos y ejecute la acción correspondiente para cada uno.



## Cómo describir un objeto

Hay que saber **qué cosas necesitamos detallar y cuáles no**, dependiendo de lo que queramos hacer con el objeto.

No necesitamos describir absolutamente todo: tenemos que elegir los datos y acciones que sean útiles para lo que estamos construyendo.



# Raspberry Pi y placas

Hablamos de **Raspberry Pi** y de cómo los profes están intentando hacer sus propias placas porque saldrían mucho más baratas.

Nos mostraron mini placas de Mateo que están hechas solamente con lo necesario para su proyecto.

También me acabo de enterar de que la **proto** es para **prototipos** lol, no sé por qué no sabía eso.



## MicroPython

**MicroPython está prohibido** porque es muy fácil de programar, pero es más difícil para que el chip lo entienda.

Tiene mucha memoria y la memoria es cara.

Nosotros vamos a trabajar con placas que tienen menos memoria, por lo que necesitamos algo más cercano a lo que el chip puede procesar directamente.


## Pico SDK

Vamos a usar la infraestructura de **Pico SDK examples** para ir probando.


## `int main()`

Vamos a tener un:

```cpp
int main()
```

que maneja todo.

La lógica sería algo como:

```text
¿El usuario presionó el botón?
        ↓
       sí
        ↓
   Haz este sonido
```

La idea es que `main` controle lo que ocurre y que las acciones se ejecuten según lo que haga el usuario.


## encargos

legir un objeto. Puede ser cualquier cosa: una mano, un perro, una mascota, una propiedad de, etc.

Buscar a **Aristóteles** y sus categorías.

Analizar el objeto utilizando esas categorías.

aparte, para el martes 07a

Bajar cómo **Instagram nos describe**, pensando en el algoritmo.


## lectura
