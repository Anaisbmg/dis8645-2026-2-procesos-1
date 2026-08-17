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

## encargos

## lectura
