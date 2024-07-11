#include "semaforos.h"

Semaforo::Semaforo() {
    // Constructor, inicialización de atributos si es necesario
}

void Semaforo::inicializar(const std::string& nombre, int valor_inicial) {
    semaforos[nombre] = valor_inicial;
}

void Semaforo::wait(const std::string& nombre) {
    // Implementación del operador wait de semáforo
    while (semaforos[nombre] <= 0) {
        // Espera activa o bloqueo según la implementación específica
    }
    semaforos[nombre]--;
}

void Semaforo::signal(const std::string& nombre) {
    // Implementación del operador signal de semáforo
    semaforos[nombre]++;
}
