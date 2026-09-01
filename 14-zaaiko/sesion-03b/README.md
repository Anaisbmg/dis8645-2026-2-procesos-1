# sesion-03b

## apuntes sesión

### primer bloque 0830-1030:
- la sesión se inicia con una conversación acerca de las licencias y copyright, a modo de advertencia para evitar demandas en nuestras vidas.
- posteriormente empezamos a hablar sobre el código que lleva cada grupo en la solemne, para ahora hacer una explicación sobre que son los Strings.
- luego, Aarón nos recomendó empezar a programar con cpp agnóstico, sin depender netamente de arduino, lo cual entiendo que nos ayudara a futuro para poder usar las placas de raspberry.

### segundo bloque 1100-1250:
- al momento de usar claude para programar la introducción al poema, tuve una confusión con una sección en especifica:

```cpp
  for (int i = 0; i < cantidadLineasIntro; i++) {
    escribirLetraPorLetra(intro[i], 0, 0, 100);
    delay(700);
  }
}

void loop() {
  // vacio por ahora
}

void escribirLetraPorLetra(char *texto, int x, int y, int velocidad) {
  display.clearDisplay();
  display.setCursor(x, y);
```
específicamente con la relación entre los (0, 0, 100) y los (x, y, velocidad), por lo que posteriormente averiguando, entendí que estaban directamente relacionados entre si para programar la ubicación en la que aparece algo en el display.


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

