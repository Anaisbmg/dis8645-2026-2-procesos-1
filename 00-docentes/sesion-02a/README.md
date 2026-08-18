# sesion-02a

## apuntes sesión

![rasberry pi pico 2 pinout](./imagenes/pico-2-r4-pinout.svg)

<https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#layout_non-wireless>

ojo con agregar a mano hardware_adc para que quede así en Cmakelists.txt

```txt
# Add the standard library to the build
target_link_libraries(ej_pico_pote
        pico_stdlib
        hardware_adc)
```

### grupos

haremos grupos de la siguiente manera:

8 grupos de 3 personas
2 grupos de 4 personas

## encargos

encargo02a:

1. en tu fork, ir a actions, y aceptar que corran github worfklows. subir pantallazo con demostración de que han corrido actions exitosas en tu repo. esto es crucial, si no lo haces, no agregaremos tus apuntes al repo, y las tareas se tomarán como no entregadas. si en tu fork las actions no son exitosas, no serán tampoco agregadas al repo común ni evaluadas.
2. conformar grupos de 3 a 4 personas para la realización del proyecto-1. compartir 2 placas de desarrollo por grupo, documentar estudio conjunto de C++, microcontroladores, botones, potenciómetros.

## lectura
