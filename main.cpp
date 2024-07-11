#include <iostream>
#include <queue>
#include "estructuras_datos/proceso.h"
#include "planificacion_procesos/planificador.h"
#include "gestion_memoria/gestor_memoria.h"
#include "gestion_recursos/gestor_recursos.h"

int main() {
    std::queue<Proceso> procesos;
    procesos.push(Proceso(1, 0, 5));
    procesos.push(Proceso(2, 1, 3));
    procesos.push(Proceso(3, 2, 7));

    Planificador planificador;
    planificador.planificarRoundRobin(procesos, 2);

    GestorMemoria gestorMemoria;
    gestorMemoria.asignarMemoria(256);

    GestorRecursos gestorRecursos;
    gestorRecursos.utilizarRecurso("CPU");

    return 0;
}
