#include <LiquidCrystal.h>

// versos del poema

char *versosPoema[] = {
  "Cuando estan nuestras almas frente a frente,", 
  "mudas, erguidas, fuertes, ya muy proximas,",
  "y sus alas se encienden al tocarse,",
  "en cada punta curva ¿qué mal amargo" ,
  "puede hacernos la tierra, que no debiéramos",
  "quedarnos aquí, contentos? Piénsalo. Al subir más alto,",
  "los ángeles nos oprimirían y aspirarían",
  "a dejar caer algún áureo orbe de canto perfecto",
  "en nuestro hondo, querido silencio. Quedémonos",
  "mejor en la tierra, Amado mío, donde los ánimos",
  "contrarios e injustos de los hombres retroceden",
  "y aíslan a los espíritus puros, y permiten",
  "un lugar donde estar y amar por un día,",
  "con la oscuridad y la hora de la muerte rodeándolo.",
};

// estado del boton A: true si esta presionado ahora mismo
bool botonA = false;
// estado del boton B: true si esta presionado ahora mismo
bool botonB = false;
// pin fisico donde esta conectado el boton A
const int botonAPin = 2;
// pin fisico donde esta conectado el boton B
const int botonBPin = 3;
// bandera: true cuando el texto esta congelado y no debe avanzar
bool versoDetenido = false;
// bandera: true cuando la palabra clave esta visible en pantalla
bool palabraVisible = false;

// arreglo con las palabras clave, una por seccion del poema
// se ordenan de manera correlatiava
// 1er verso corresponde a palabra clave #1
char *palabrasClave[] = {
  "PLACEHOLDER1",
  "PLACEHOLDER2",
  "PLACEHOLDER3"
  "PLACEHOLDER4",
  "PLACEHOLDER5",
  "PLACEHOLDER6",
  "PLACEHOLDER7",
  "PLACEHOLDER8",
  "PLACEHOLDER9",
  "PLACEHOLDER10",
  "PLACEHOLDER11",
  "PLACEHOLDER12",
  "PLACEHOLDER13",
  "PLACEHOLDER14",
  "PLACEHOLDER15",
};

// corresponde a los pines que utiliza la pantalla 
// pantalla lcd verde 16 x 02 con controlador SPLC780D1 o HD44780
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// texto que se muestra al inciar el dispositivo
const char textoInicialCC[] = "[PLACEHOLDER] - CC BY-SA 4.0"; // licencia de uso, Creative Commons BY-SA 4.0
const char textoInicialTitulo[] = "Cuando nuestras dos almas se eleven"; // titulo del poema
const char textoInicialAutora[] = "Elizabeth Barret Brown"; // autora del poema

void setup() {
  lcd.begin(16, 2); //define el tamaño de la pantalla

  // --- PANTALLA 1: textoInicialCC / Creative Commons BY - SA --- 

  lcd.setCursor(0, 0); //define la seccion superior de la pantalla
  for(int i = 0; i < 16 && textoInicialCC[i] != '\0'; i++) {
    lcd.print(textoInicialCC[i]);
  }
  lcd.setCursor(0, 1); //define la seccion inferior de la pantalla
  lcd.print(textoInicialCC + 16); 
  
  delay(4000); 
  lcd.clear();


  // --- PANTALLA 2: Carrusel de textoInicialB en la fila inferior (0, 1) ---
  int largoB = strlen(textoInicialTitulo); // Calculamos el largo (35 letras)
  
  // Calculamos cuántos pasos debe avanzar para mostrarlo todo.
  // Si el texto es más corto de 16, no se mueve (0 pasos).
  int pasosTotales = (largoB > 16) ? (largoB - 16 + 3) : 0; // +3 para dejar unos espacios al final
  
  for(int pos = 0; pos <= pasosTotales; pos++) {
    lcd.setCursor(0, 1);
    
    // Imprimimos la "ventana" de 16 caracteres
    for(int i = 0; i < 16; i++) {
      if (pos + i < largoB) {
        lcd.print(textoInicialTitulo[pos + i]);
      } else {
        lcd.print(' '); // Rellena con espacios en blanco cuando se acaba el texto
      }
    }
    
    // Si estamos en el primer cuadro (pos = 0), hacemos una pausa más larga
    // para que el usuario pueda empezar a leer antes de que se mueva.
    if (pos == 0) {
      delay(2000); 
    } else {
      delay(350); // Velocidad del carrusel (350ms por letra)
    }
  }
  
  lcd.clear();


  // --- PANTALLA 3: textoInicialC ---
  lcd.setCursor(0, 0);
  for(int i = 0; i < 16 && textoInicialAutora[i] != '\0'; i++) {
    lcd.print(textoInicialAutora[i]);
  }
  lcd.setCursor(0, 1);
  lcd.print(textoInicialC + 16); 
  
  delay(4000); 
  lcd.clear();
}

//ocurre de manera repetida despues de setup
void loop(){

//botón es 1 o 0
//si un botón es 1 y el otro 0 ocurre el punto 4
//si ambos botones son 1 y 1 ocurre el 5, 6 y 7

// leerBotones (botón a, botón b) {
// if (bóton a + botón b)
// return true: // devolver true si ambos botones son 1
// return false: // devolver false si un botón es 1 y el otro 0
} 

// contarVersos() 

//leerVerso() 
//avanzarVerso()
//detenerVerso()
//reiniciarVerso()
//mostrarPalabra()
//deshacerPalabra()

