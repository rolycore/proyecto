#include "planificador.h"

Planificador::Planificador() {
    // Constructor vacío o inicializaciones necesarias
}

void Planificador::planificarRoundRobin(std::queue<Proceso>& procesos, int quantum) {
    while (!procesos.empty()) {
        Proceso& proceso = procesos.front();
        if (proceso.getTiempoRafaga() > quantum) {
            proceso.reducirTiempoRafaga(quantum);
            procesos.push(proceso);  // Reinsertar el proceso al final de la cola
        } else {
            proceso.finalizar();  // Finalizar el proceso
        }
        procesos.pop();  // Eliminar el proceso de la cola
    }
}
