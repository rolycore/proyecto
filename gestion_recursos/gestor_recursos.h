#ifndef GESTOR_RECURSOS_H
#define GESTOR_RECURSOS_H

#include <string>
#include <unordered_map>

class GestorRecursos {
public:
    GestorRecursos();
    void utilizarRecurso(const std::string& recurso);

private:
    std::unordered_map<std::string, int> recursos;  // Ajustar según sea necesario
};

#endif // GESTOR_RECURSOS_H
