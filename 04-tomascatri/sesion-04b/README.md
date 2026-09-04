# sesion-04b

## apuntes sesión

* Hoy dia empezamos la clase con la llegada de misaa, en donde explico su viaje y ademas presentacion de el y tambien trajo dulces
* Tema trabajo del poema, seguimos experimentando los limites, santi nos ayudo ya que al querer usar dos pantallas queriamos ver los limites de la multimedia, lo que llegamos fue que videos es complicado hacerlo funcionar por tema de limitacion de hardware, la pico 2 W seria una solucion a esto pero santi nos dijo que por temas de tiempo quizas no alcanzaremos, asi que lo mejor po ahora sera realizar un storyboard sin tomar en cuenta el uso de videos y usaremos imagenes.

### Storyboard + explicacion de porque

**1.Este poema nada puede resolver**
// esto le quita el sentido y al peso al poemas en general, se podria interpretar un manifiesto del autor sobre el estigma de la sociedad sobre el arte y su "utilidad" en la vida diaria. concepto: cotidiano, poner imagen o imagenes del dia a dia mucha gente, representar a la sociedad a los individuos

**2.Adentro del poema, la muerte se consume.**
// las imagenes se desintegran y entra las palabras

**3. Ya, dilo de nuevo, el porcentaje de pureza
mezclado con un poco de sol.
Con un poco de hambre**
// Al hablar de la pureza, el sol y el hambre lo interpreto con la naturaleza, lo casero, lo convencional. idea: kriss hace letras a mano de esta parte de poema y lo vamos poniendo tipo gif.

**4. Todo acaba aquí**
// primeros segundos no hay nada. despues aparece en la pantalla de arriba todo acaba aqui

**5. y de pronto no.**
// aparece esto en grande en la pantalla de abajo

**6. Un nuevo servidor, un poema electrónico, un mesías.**
// letras van pasando arrriba mientras aparecen las imagenes abajo. luego aparece en grande en la pantalla de abajo UN MESIAS. las imagenes deben ser relacionados con la tecnologida encargada de entregar mensajes o informacion, la idea es muchas imagenes y que vayan pasando rapido. EN CASO DE SER MUY BRIJIDO PONERR ALERTA DE EPILEPSIA EN CASO DE ESO PONER UN BOTON DE INICIO DEL POEMA
Adentro del poema, la muerte se consume.

**7. Poema bajando desde el cielo**
// nos vamos por lo literal? lo interpreto medio biblico, como cuando dicen que los angeles bajaran del cielo y mataran a los pecadores o una vola asi brijida, tenemos que mostrar algo suave, como los angeles para despues...

**8. Solo los elegidos contemplan su propia destrucción.**
// ...mostrar caos como el que ocasionran cuando baje. propuesta: usar motores vibratorios dentro de la caja, esto imitara eso, aunque al inicio queriamos explotar un condensador polarizado pero pensmos que seria mucho, luego fundir un led pero nos dio pena, asi que la vibracion es un punto de medio de caos tolerable.

**9. No, en serio**
// poner no en serio en la pantalla grande con 3 puntos suspensivos que aparecen y desparecen uno por uno

**10. No, en serio, este poema nada puede resolver.**
// se repite y es un bucle

Bien ya storyboard hecho queremos usar la vibracion, hay que investigar, con la ayuda de santi descubrimos que el motor necesita un mosfet para regular su velocidad especicamente el que encontramos es el HW 517 V0.0.1, ahora lo probaremos.

La combinacion de estas dos cosas necesita una fuente de poder externa ademas para el arduino, se compone de 6 conexiones. out + y out -, ahi iria el motor. en GN y trig/pwm van al arduino y vin+, vin- a la bateria externa.
## encargos

## lectura
