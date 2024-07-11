#ifndef PLANIFICADOR_H
#define PLANIFICADOR_H

#include <queue>
#include "../estructuras_datos/proceso.h"

class Planificador {
public:
    Planificador();
    void planificarRoundRobin(std::queue<Proceso>& procesos, int quantum);
};

#endif // PLANIFICADOR_H
