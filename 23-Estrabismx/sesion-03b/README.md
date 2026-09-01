# sesion-03b

## apuntes sesión

### Licencias

Iniciamos hablando sobre la importancia de preservar las ideas, por lo que vamos a desglosar que es una licencia y sus variaciones.

**Licencia:** Es un contrato mediante el cual una persona recibe de otra el derecho de uso, de copia, de distribución, de estudio y de modificación (en el caso del Software Libre) de varios de sus bienes, normalmente de carácter no tangible o intelectual, pudiendo darse a cambio del pago de un monto determinado por el uso de los mismos. 

> Licencia. (2026, 11 de julio). En Wikipedia. <https://es.wikipedia.org/w/index.php?title=Licencia&oldid=>

<br>

Una vez entendida la defincioón de licencia, pasamos a los tipos de:

1. Copyright: Le otorga al dueño el derecho exclusivo de copiar, distribuir, adaptar, exhibir, y producir obras creativas, generalmente por un tiempo limitado. Este tiempo es aproximadamente de 70 años 

> [!NOTE]
> De ahora en adelante se mencionan licencias más enfocadas al código

2. MIT: Permite usar, modificar, distribuir e incluso vender el software, con la única condición de mantener el aviso de derechos de autor original

3. GPL (General Public License): Permite cualquier modificación, pero exige que cualquier proyecto derivado que se publique deba distribuirse obligatoriamente bajo esta misma licencia GPL, garantizando que el código se mantenga siempre libre. 

4. Creative Commons: Se enfoca en textos, documentación, fotografías y arte visual. Existen diversos módulos

      - CC0 (Dominio Público): El autor renuncia a todos los derechos de autor. Cualquier persona puede usar la obra para cualquier fin sin necesidad de dar crédito
  
      - CC BY (Atribución): Permite distribuir, mezclar y usar la obra con fines comerciales, siempre y cuando se mencione explícitamente al creador original
  
      - CC BY-SA (Compartir Igual): Permite el uso comercial y las modificaciones, pero exige que las obras derivadas se publiquen bajo esta misma licencia
  
      - CC BY-NC (No Comercial): Permite modificar y distribuir la obra, pero prohíbe estrictamente generar ganancias económicas directas con ella o con los proyectos que deriven de esta
  
   Luego de este mareo legal, procedo a mostrar la 2da parte de la clase

<br>

---

En esta clase vimos que es importante diferenciar entre: 

- String(): Es una clase, que nos permite crear un objeto dinamico, es decir que puede crecer, encogerse y mutar xd

- string: Es una variable, similar a _char_. La diferencia radica en que _char_ solo aloja un _char_acter, en cambio _string_ es un conjunto de caracteres.

 En base a lo anterior, existe una manera más eficiente de combinar un conjunto de caracteres. Además, esto nos sirve para exportar parte del código fuera de Arduino IDE, ya que utiliza principios propios de C++. Para esto se utiliza un array, que es un conjunto de variables y en este caso un conjunto de variables del tipo _char_

 ### Ejemplo

```cpp

// bah que raro
// con 5 no funciono
char nombre[6] = "aaron";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(nombre[0]);
  Serial.print(nombre[1]);
  Serial.print(nombre[2]);
  Serial.print(nombre[3]);
  Serial.println(nombre[4]);
}

```

Acá podemos ver como existe un conjunto de 5 caracteres que forman la palabra "_aaron_". Pero ¿Si quiero un conjunto de arrays del tipo _char_?

Bueno, podemos hacer un array de punteros. Esto busca optimizar memoria y ordenar de mejor manera las variables. Ejemplo


```cpp

// un poemario
// es un arreglo de paginas
// una pagina es un arreglo de lineas
// una linea es un arreglo de caracteres

char *misVersos[] = {
  "Mami, no te haga' de rogar",
  "No me gustaría perder el tiempo",
  "Que tenemo' pa' poderte tocar",
  "Y estás con otro, esa mierda no lo entiendo, yeah",
  "Que te lo juro, no eres nada pa' mí, te lo juro, ah",};

```

Acá podemos ver como poder guardar conjunto de caracteres, que forman palabras y que a su vez forman frases

## encargos

encargo-03b:

1. apuntes personales de String, string, array, con bibliografia y con pantallazos de resultados, y dudas textuales.
2. subir código a su bitácora ordenado con el formato de backticks a continuación, del proyecto hasta ahora.
3. definir y escribir el corpus a usar: autora, poemas, licencias, poblarlo en la carpeta 00-proyecto-1


```cpp
// codigo aqui
// por ejemplo
```

## lectura

