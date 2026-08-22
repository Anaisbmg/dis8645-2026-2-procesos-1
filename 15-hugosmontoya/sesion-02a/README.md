# sesion-02a

## apuntes sesión
La poesía no hace falta entenderla, y hay muchas cosas que no hacen falta entenderlas demasiado, hasta que punto has entendido algo suficientemente?

Los botones (push buttons), son dos contactos que entran en contacto cuando tu los mantienes presionados.
Los potenciómetros nos permiten controlar la potencia porque te permiten variar la resistencia.
Los que funcionan con audio (Tipo A) funcionan de manera logarítmica, como los oídos, en cambio los de tipo B funcionan de manera lineal.
Una resistencia le quita energía a los electrones.
Los encoders o codificadores son perillas con infinito recorrido.

En vez de decir botones es mejor decir pulsadores o en inglés pushbutton, estos son temporales, no se guardan en la memoria.
Existen normalmente abiertos o normalmente cerrados.

Depende de donde vaya el boton, el resistor va a ser pullup o pulldown.

Una protoboard tiene cables cortitos dentro en cada fila o columna, eléctricamente esos cables son el mismo punto.

Arduino: 
Vin no lo vamos a usar porque es más probable quemarlo.
La parte análoga nos permite leer, ahí es donde vamos a leer nuestro potenciómetro. 
En el potenciómetro en los lados no importa la polaridad, lo importante es el pin del medio que se conecta a la parte análoga para leer.

Programación defensiva: programar teniendo en cuenta que cosas malas pueden pasar y programando para que no pasen.

El arduino lo tenemos que tratar como una muralla, el programa que tu corres, se queda ahí hasta que lo cambies, el IDE es solo para planificar y pasar el código a el arduino.

La importancia del arduino es que te permite interactuar con el mundo real.
```cpp

const int patitaLectura = A0;
// Creamos una variable de un número entero y le doy un valor que nunca va a poder ser en la vida real para 
//Este valor lo vamos a remplazar según lo que nos diga el pin del medio (nariz) del potenciómetro
int valorLectura = -1;
//void setup corre solo una vez
void setup() {

//esto dice puerto serial enciéndete, serial significa uno a la vez en orden, muy rápido por ejemplo: E,N,C,I,E,N,D,E,T, pero en baudios. Este puerto solo es capaz de enviar cosas serialmente
//pero también hay otros puertos que lo hacen paralelamente, el 9600 son 9600 baudios por segundo, un número moderado. Configura la comunicación entre la placa y el ordenador.
Serial.begin(9600);
}

void loop() {

  // una palabra seguida de paréntesis es una función, esta es una ya creada que alguien ha hecho y que nosotros vamos a usar.
  //patitaLectura ponemos en vez de poner A0 porque A0 que es algo del arduino y puede cambiar, si escribimos A0 y está mal luego lo tenemos que cambiar 1000 veces
  //en cambio si está mal y ponemos patitaLectura porque así solo en caso de error lo podemos cambiar una vez arriba.
valorLectura = analogRead(patitaLectura);
  //Dice imprime me esta línea.
 Serial.println(valorLectura)

}


```

Cuando corremos el código podemos variar la resistencia, este código lo que hace es que nos lee la información que llega al ordenador cuando variamos la resistencia con el potenciometro, primero le damos un valor de lectura y le ponemos -1 para no darle un valor a la constante que pueda ser posible que muestre el monitor.
En el void setup comenzamos la comunicación entre arduino y ordenador a 9600 baudios por segundo que es una velocidad moderada.
En void loop que es lo que va a hacer repetidamente es que nos lea el puerto A0 del arduino. Y finalmente imprimimos los valores que llegan desde el puerto A0 poniendo Serial.printLn.

El valor máximo que sale es 1032 y el mínimo es 0.

En programación "!" significa contrario de.
por ejemplo while (!Serial) significa mientras serial no exista o no este listo entonces no avanzar.

Serial.print.ln significa imprime la linea y luego pasa a la siguiente, eso es lo que hace si ponemos ln, pero si no ponemos ln entonces solo va a imprimir lo que hayas escrito. Println es imprime esto y pasa a lo siguiente.
## encargos

## lectura
