#include "memoria.h"

Memoria::Memoria()
    : espacio_disponible(0) {
    // Constructor, inicialización de atributos
}

void Memoria::asignarMemoria(int cantidad) {
    espacio_disponible += cantidad;
}

bool Memoria::liberarMemoria(int cantidad) {
    if (espacio_disponible >= cantidad) {
        espacio_disponible -= cantidad;
        return true; // Memoria liberada correctamente
    } else {
        return false; // No hay suficiente memoria disponible
    }
}

bool Memoria::verificarEspacio(int cantidad) const {
    return espacio_disponible >= cantidad;
}
