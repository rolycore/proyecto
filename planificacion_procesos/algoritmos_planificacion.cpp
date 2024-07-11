#include "algoritmos_planificacion.h"

int algoritmoRoundRobin(Proceso& proceso, int quantum) {
    // Implementación del algoritmo Round Robin
    // Aquí simulas la ejecución del proceso con el quantum dado
    if (proceso.getTiempoRafaga() <= quantum) {
        // El proceso termina dentro del quantum
        int tiempo_ejecucion = proceso.getTiempoRafaga();
        proceso.finalizar(); // Método ficticio para marcar el proceso como terminado
        return tiempo_ejecucion;
    } else {
        // El proceso aún tiene tiempo de ráfaga restante
        proceso.reducirTiempoRafaga(quantum); // Método ficticio para reducir el tiempo restante de ráfaga
        return quantum;
    }
}
