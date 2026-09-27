# sesion-06b → 25/09/26

## apuntes sesión

## Ejemplo clase anterior

Estudiante Catalina Oyanedel

 1. **Sustancia:** Mi termo
 2. **Cantidad:** 800ml (también puede ser 1, dependiendo de cómo se considere)
 3. **Cualidad:** Blanco, metálico (acero inoxidable), térmico
 4. **Relación:** Contenedor de té Ceylan
 5. **Lugar:** Favorito, conmigo, a la izquierda de mi mano izquierda
 6. **Tiempo:** ~~Aquí~~ **Ahora**, siempre pronto
 7. **Posición:** Vertical
 8. **Posesión:** Es mío, pero también puede ser lo que posee, por ende, puede ser "liquido"
 9. **Acción:** Mantener el calor
 10. **Pasión:** Ser llenado para transportar líquido

## Ejemplo Wokwi

```c
 // tenemos que copiar y pegar este archivo
 // ojo que está entre "<>"
 // esto significa que este archivo está en un lugar lejano
 // y tiene que ver con C

#include <stdio.h>

 // 

#include "pico/stdlib.h"

 // podemos escribir nuestra propia funcion
 // tipo "void"
 // nombre
 // murcielagos
 // top-down
 // de lo macro a lo micro

 int prueba() {

  int x = 3;
  int y = 6;
  int resultado = x * y;
  return resultado;

 }
 

 // la funcion es main()
 // se identifica por los parentesis ()
 // es de tipo int
 // y cuando corren
 // retornan a un entero

int main() {

 // esta funcion inicializa la raspi
 // si no esta llamado en esta funcion
 // no va a ocurrir

  stdio_init_all();
  while (true) {

    // printf("Hello, Wokwi!\n");
    // convertir de int a chars

    // printf("resultado: %d\n, prueba()");

    printf("%d\n", prueba());
    prueba();
    sleep_ms(250);
  }
}
```

## Class

Es una variable más compleja de tipo clase.

Colección de enteros y variables.

Son moldes y sus resultados son objetos.

El desde es escribir el constructor, que es el mismo nombre de la clase.

**Cómo crear una clase:**

```c
class Termo {
  public:
   bool existencia;
   int posicion = 0;
   int cantidadML;
   float temperatura;

   void abrir();
   void cerrar();

  // constructor (Bob)
  Termo(int cuantosML){

     cantidadML = cuantosML

  }

 };
```

**Definición en el "int Main":**

```c
 Termo elDeCatalina;
 Termo elDeMatias;

 elDeCatalina(800);
 elDeMatias(500);

 elDeCatalina.existencia = true;
 elDeMatias.existencia = true;
```


## encargos

martes 29-09:

- bajar una red social e investigar que piensa esa red de mi, cuál es mi algoritmo
(listar 10 categorías que deciden qué y quién eres)

- algoritmo de instagram, pedirlo para saber quien soy segun la empresa en atributos (para vendernos cosas)
 
- categorías sobre la interpretación (10)

---

Las 10 categorías del ser de aristóteles:

1. sustancia → ¿Qué es?
2. cantidad → ¿Cuánto? ¿Cuántos?
3. calidad o cualidad → ¿Cómo es? ¿Qué características tiene?
4. relación → ¿Con qué se relaciona?
5. lugar → ¿Dónde está?
6. tiempo → ¿Cuándo?
7. posición → ¿Cómo está dispuesto o colocado?
8. estado → ¿Qué tiene puesto o de qué está provisto?
9. acción → ¿Qué hace?
10. pasión → ¿Qué recibe o qué le hacen?
    
---

## Mi perfil algorítmico de Instagram 


| Categoría aristotélica   | Pregunta guía                      | ¿Cómo se representa en mi Instagram?                                                                                                                                                                             |
| ------------------------ | ---------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **1. Sustancia**         | ¿Qué es?                           | Instagram podría representarme como una persona vinculada principalmente al **diseño gráfico, la moda, la belleza y la creatividad**.                                                                            |
| **2. Cantidad**          | ¿Cuánto?                           | En mi feed, el **diseño y la moda aparecen con mayor frecuencia**, seguidos por belleza y uñas. La tecnología aparece, pero en menor medida, y la comida casi no aparece.                                        |
| **3. Cualidad**          | ¿Cómo es?                          | Mi perfil se caracteriza por ser **visual, creativo, estético y orientado a las tendencias**. También se repiten colores como negro, rosado, burdeos, morado, azul marino y verde petróleo.                      |
| **4. Relación**          | ¿Con qué se relaciona?             | Estoy relacionada con **diseñadores, cuentas de diseño, freelancers, universidades, influencers de moda, cuentas de Fashion Week y perfiles de marketing y publicidad**.                                         |
| **5. Lugar**             | ¿Dónde está?                       | Mi actividad se desarrolla principalmente en **Instagram como espacio de inspiración, aprendizaje y observación profesional**, especialmente relacionado con diseño y tendencias.                                |
| **6. Tiempo**            | ¿Cuándo?                           | Esta representación corresponde principalmente a mi **uso actual y cotidiano de Instagram**, donde actualmente estoy consumiendo contenido de diseño, moda, belleza y marketing.                                 |
| **7. Posición**          | ¿Cómo está dispuesto?              | No consumo el contenido de manera completamente pasiva: **selecciono las cuentas que sigo y construyo intencionalmente mi feed** para que sea útil para mi trabajo y mis intereses.                              |
| **8. Estado / posesión** | ¿Qué tiene / de qué está provisto? | Mi perfil está provisto de una **identidad digital creativa y estética**, construida a través de las cuentas que sigo, los contenidos que consumo y las temáticas que mantengo presentes.                        |
| **9. Acción**            | ¿Qué hace?                         | **Busco inspiración, observo tendencias, sigo cuentas, doy algunos likes, analizo campañas y marcas y, en ocasiones, entro a productos que llaman mi atención.**                                                 |
| **10. Pasión**           | ¿Qué recibe / qué le hacen?        | Recibo **recomendaciones y publicidad** relacionada con belleza, cabello, uñas, moda, tecnología y telecomunicaciones. También he recibido publicidad de marcas como Shein y productos tecnológicos como iPhone. |


Aunque tengo varias opciones de personalización apagadas, igual me salen anuncios de belleza, cuidado para el pelo, uñas, telefonía y marcas como Shein. Entonces, parece que lo que me muestran no depende solo de lo que puedo configurar, sino también de lo que hice antes, como visitar productos o en lo que he hecho clic.

## lectura

Libro: A New Program for Graphic Design

Autor: David Reinfurt

El libro está dividido en 3 grandes capítulos.

I. T--Y-P-O-G-R-A-P-H-Y

II. G-E-S-T-A-L-T

III. I-N-T-E-R-F-A-C-E
