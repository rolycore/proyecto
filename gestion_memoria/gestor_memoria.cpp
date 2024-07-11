#include "gestor_memoria.h"

GestorMemoria::GestorMemoria() 
    : memoria_disponible(1024) {  // Inicializa con una cantidad de memoria ficticia
}

void GestorMemoria::asignarMemoria(int cantidad) {
    // Implementar la lógica para asignar memoria
    if (cantidad <= memoria_disponible) {
        memoria_disponible -= cantidad;
        // Asignar la memoria a algún proceso
    } else {
        // Manejar el caso en que no haya suficiente memoria
    }
}
