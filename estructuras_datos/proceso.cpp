#include "proceso.h"

Proceso::Proceso(int id, int tiempo_llegada, int tiempo_rafaga)
    : id(id), tiempo_llegada(tiempo_llegada), tiempo_rafaga(tiempo_rafaga) {}

int Proceso::getID() const {
    return id;
}

int Proceso::getTiempoLlegada() const {
    return tiempo_llegada;
}

int Proceso::getTiempoRafaga() const {
    return tiempo_rafaga;
}

void Proceso::reducirTiempoRafaga(int tiempo) {
    tiempo_rafaga -= tiempo;
}

void Proceso::finalizar() {
    // Implementar la lógica para finalizar el proceso
    tiempo_rafaga = 0;
}
