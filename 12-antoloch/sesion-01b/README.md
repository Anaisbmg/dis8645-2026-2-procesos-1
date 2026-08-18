# sesion-01b

## apuntes sesión

## encargos

encargo01b:

1. tratar de correr un código en el microcontrolador asignado a cada dupla, incluir referentes, citas, comentarios, imágenes, descripciones textuales, y en caso de éxito o fracaso incluir aciertos, preguntas, dramas, atados. recordatorio que estos apuntes son personales, cada persona sube su versión.


3. proponer una función con nombre, tipo, argumentos y uso, que modele algún área de su interés, por ejemplo subirCerro(enBicicleta), tomarMetro(conPaseEscolar), etc. escribir en pseudocódigo los pasos que necesita esa función internamente para que literalmente funcione.

   **Nombre:** `trotar5kmEn45min`
**Tipo:** `boolean`
**Argumentos:** `ritmoObjetivo`, `actividadStrava`
**Uso:** decidir en tiempo real si el trote va al ritmo necesario...

```cpp
bool trotar5KmEn45Minutos(double ritmoObjetivo, Actividad actividadStrava) {
    double distanciaMeta = 5;   // km
    double tiempoMeta = 45;     // minutos

    iniciarActividad(actividadStrava, "Trote");

    while (actividadStrava.distancia < distanciaMeta && actividadStrava.tiempo < tiempoMeta) {

        actividadStrava = obtenerDatosStrava(actividadStrava.id);
        double distanciaRecorrida = actividadStrava.distancia;
        double tiempoTranscurrido = actividadStrava.tiempo;

        double ritmoActual;
        if (distanciaRecorrida > 0) {
            ritmoActual = tiempoTranscurrido / distanciaRecorrida;
        } else {
            ritmoActual = 0;
        }

        if (ritmoActual > ritmoObjetivo) {
            reproducirAlertaVoz("Vas atrasado! Acelera el paso");
        } else {
            reproducirAlertaVoz("Vas bien, manten el ritmo");
        }

        esperar(10);
    }

    finalizarActividad(actividadStrava);
    guardarEnStrava(actividadStrava);

    if (actividadStrava.distancia >= distanciaMeta && actividadStrava.tiempo <= tiempoMeta) {
        reproducirAlertaVoz("Meta cumplida!");
        return true;
    } else {
        reproducirAlertaVoz("No se logro la meta");
        return false;
    }
}
```



## lectura
