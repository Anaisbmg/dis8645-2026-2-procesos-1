# sesion-04b

## apuntes sesión

* Hoy dia empezamos la clase con la llegada de misaa, en donde explico su viaje y ademas presentacion de el y tambien trajo dulces
* Tema trabajo del poema, seguimos experimentando los limites, santi nos ayudo ya que al querer usar dos pantallas queriamos ver los limites de la multimedia, lo que llegamos fue que videos es complicado hacerlo funcionar por tema de limitacion de hardware, la pico 2 W seria una solucion a esto pero santi nos dijo que por temas de tiempo quizas no alcanzaremos, asi que lo mejor po ahora sera realizar un storyboard sin tomar en cuenta el uso de videos y usaremos imagenes.

### Storyboard + explicacion de porque

**1.Este poema nada puede resolver**
// esto le quita el sentido y al peso al poemas en general, se podria interpretar un manifiesto del autor sobre el estigma de la sociedad sobre el arte y su "utilidad" en la vida diaria. concepto: cotidiano, poner imagen o imagenes del dia a dia mucha gente, representar a la sociedad a los individuos. otra opcion podria ser poner fotos cosas importantes para nosotros.

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

para el codigo de arduino usaremos uno en donde podamos controlar el motor por una consola, que tenga una mini pulsacion, boton para detener y boton a toda potecnia, seleccion de potencia de 0 a 255.

adjunto codigo + conversacion con gemini el cual hizo el codigo: https://share.gemini.google/PuVXHlj1Jx1S

```cpp
// Control de motor vibratorio JQ24-35E360 vía HW-517
// Entrada de comandos por Monitor Serie

const uint8_t MOTOR_PIN = 9;
int currentDuty = 0;

void printHelp() {
  Serial.println(F("\n--- CONTROL DE MOTOR VIBRATORIO ---"));
  Serial.println(F("Comandos:"));
  Serial.println(F("  0 a 255 : Ajusta el valor PWM directamente"));
  Serial.println(F("  s       : Detiene el motor (PWM = 0)"));
  Serial.println(F("  m       : Potencia máxima (PWM = 255)"));
  Serial.println(F("  p       : Ejecuta una secuencia de pulsos (alerta)"));
  Serial.println(F("  ?       : Muestra este menú"));
  Serial.println(F("-----------------------------------\n"));
}

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  analogWrite(MOTOR_PIN, 0);

  Serial.begin(115200);
  // Espera a que el puerto USB nativo del R4 se enlace (máximo 3 s)
  while (!Serial && millis() < 3000);

  printHelp();
  Serial.print(F("Estado: Apagado (0/255)\n> "));
}

void loop() {
  if (Serial.available() > 0) {
    char firstChar = Serial.peek();

    // 1. Si el primer carácter es un número, leemos el entero completo
    if (isDigit(firstChar)) {
      int value = Serial.parseInt();
      currentDuty = constrain(value, 0, 255);
      analogWrite(MOTOR_PIN, currentDuty);

      Serial.print(F("PWM fijado en: "));
      Serial.print(currentDuty);
      Serial.print(F(" ("));
      Serial.print((currentDuty * 100) / 255);
      Serial.println(F("%)"));
    } 
    // 2. Si es una letra o carácter de comando
    else {
      char cmd = Serial.read();
      
      // Descartar retornos de carro o espacios en blanco
      if (cmd == '\n' || cmd == '\r' || cmd == ' ') return;

      switch (cmd) {
        case 's':
        case 'S':
          currentDuty = 0;
          analogWrite(MOTOR_PIN, 0);
          Serial.println(F("Motor detenido (0%)"));
          break;

        case 'm':
        case 'M':
          currentDuty = 255;
          analogWrite(MOTOR_PIN, 255);
          Serial.println(F("Potencia máxima (100%)"));
          break;

        case 'p':
        case 'P':
          Serial.println(F("Disparando patrón de alerta..."));
          for (int i = 0; i < 3; i++) {
            analogWrite(MOTOR_PIN, 220);
            delay(120);
            analogWrite(MOTOR_PIN, 0);
            delay(80);
          }
          analogWrite(MOTOR_PIN, currentDuty); // Vuelve al estado previo
          Serial.println(F("Patrón finalizado"));
          break;

        case '?':
        case 'h':
        case 'H':
          printHelp();
          break;

        default:
          Serial.print(F("Comando no reconocido: '"));
          Serial.print(cmd);
          Serial.println(F("'. Escribe '?' para ver las opciones."));
          break;
      }
    }

    // Limpia caracteres de fin de línea remanentes
    while (Serial.available() > 0 && (Serial.peek() == '\n' || Serial.peek() == '\r')) {
      Serial.read();
    }
    Serial.print(F("> "));
  }
}
```
estamos en la duda si usar botones o potenciometro, ya que sentimos que los botones podria ser una forma ordenada y ayudaria al tema de repetir el poema donde termina.
Tal vez usar 4 motores, por lo que quedaria los materiales como:
* 4 motores, junto a su modulo
* bateria externa
* Arduino o pico 2 W (depende si nos da la potencia)
* 2 botones o 1 potenciometros.

## encargos

## lectura
