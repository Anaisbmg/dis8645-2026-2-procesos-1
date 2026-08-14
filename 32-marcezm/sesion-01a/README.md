# sesion-01a
Martes 11 de Agosto

En esta clase vimos el funcionamiento de GitHub, también escogimos una lectura y hablamos en grupo de nuestro encargo de el ascensor para que llegáramos a conclusiones que luego se conversaron con el curso.

## apuntes sesión

### Conversación en grupo
El funcionamiento de un ascensor parte desde la experiencia fuera de él, estando frente a sus puertas, donde se suele encontrar al costado botones para subir o bajar, dependiendo en qué piso uno se encuentre, por ejemplo, al estar en el último piso sólo hay botón para bajar. Al llamar al ascensor, se debe presionar el botón con la flecha de la dirección a la que uno se dirigirá. Al entrar, podemos ver distintas variables de botones, divididas en pisos, funcionamiento de las puertas y botones para casos de emergencia. Los botones de los pisos al ser apretados, hay una programación detrás que genera el movimiento del mecanismo para ser llevado a tal piso, al cerrarse las puertas, ya sea de manera automática luego de un tiempo determinado, o al apretar el botón para realizar esta acción.

---

## ¿Qué se necesita para un ascensor?

### Datos
- Puertas
- Botones de pisos: números enteros positivos y negativos, no hay 0
- Botones auxiliares: abrir y cerrar puertas
- Botón de emergencia
- Movimiento en eje Z
- Espejos opcionales
- Poleas
- Motores
- Contrapeso
- Carril
- Electricidad

## Funciones básicas
Las funciones corresponden a las acciones que puede realizar el ascensor:

- Subir
- Bajar
- Mantenerse
- Hacer sonar una alarma
- Mecanismo de falla

## Condiciones

Para definir algunos comportamientos del ascensor se pueden utilizar condiciones:

```javascript
if(estoyEnUnPiso){
    abrirPuerta();
}

if(esSeguro){
    abrirPuerta();
}
```
Las acciones se escriben con paréntesis `()`. Si no tienen paréntesis, corresponden a datos o variables.

*Apuntes compartidos en clase con Catalina Oyanedel*

## encargos

## lectura
