#include "gestor_recursos.h"

GestorRecursos::GestorRecursos() {
    // Inicializa algunos recursos ficticios
    recursos["CPU"] = 4;
    recursos["Impresora"] = 2;
}

void GestorRecursos::utilizarRecurso(const std::string& recurso) {
    // Implementar la lógica para utilizar un recurso
    if (recursos.find(recurso) != recursos.end() && recursos[recurso] > 0) {
        recursos[recurso]--;
        // Lógica adicional para utilizar el recurso
    } else {
        // Manejar el caso en que el recurso no esté disponible
    }
}
