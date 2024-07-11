#include <iostream>
#include "planificacion_procesos/planificador.h"
#include "gestion_memoria/gestor_memoria.h"
#include "gestion_recursos/gestor_recursos.h"
#include "estructuras_datos/proceso.h"

using namespace std;

int main() {
    // Ejemplo de creación de procesos
    Proceso p1(1, 0, 5); // ID: 1, Tiempo de llegada: 0, Tiempo de ráfaga: 5
    Proceso p2(2, 1, 3); // ID: 2, Tiempo de llegada: 1, Tiempo de ráfaga: 3
    Proceso p3(3, 2, 4); // ID: 3, Tiempo de llegada: 2, Tiempo de ráfaga: 4

    // Crear una cola de procesos para la simulación
    queue<Proceso> cola_procesos;
    cola_procesos.push(p1);
    cola_procesos.push(p2);
    cola_procesos.push(p3);

    // Ejemplo de planificación de procesos
    Planificador planificador;
    planificador.planificarRoundRobin(cola_procesos, 2); // Ejemplo de quantum: 2 unidades de tiempo

    // Ejemplo de gestión de memoria
    GestorMemoria gestor_memoria;
    gestor_memoria.asignarMemoria(100); // Ejemplo de asignar 100 unidades de memoria

    // Ejemplo de gestión de recursos
    GestorRecursos gestor_recursos;
    gestor_recursos.utilizarRecurso("Impresora"); // Ejemplo de uso de recurso

    // Más lógica de simulación según tu implementación

    return 0;
}
