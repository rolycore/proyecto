#include "algoritmos_asignacion.h"

void algoritmoAsignacionPrimerAjuste(Memoria& memoria, int cantidad) {
    // Implementación del algoritmo de asignación Primer Ajuste
    if (memoria.verificarEspacio(cantidad)) {
        memoria.asignarMemoria(cantidad);
    } else {
        // Manejo de caso cuando no hay suficiente espacio disponible
        std::cout<< "No hay suficiente espacio disponible en la memoria." <<std::endl;
    }
}
