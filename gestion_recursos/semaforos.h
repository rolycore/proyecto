#ifndef SEMAFOROS_H
#define SEMAFOROS_H

#include <iostream>
#include <string>
#include <unordered_map>

class Semaforo {
public:
    Semaforo();

    void inicializar(const std::string& nombre, int valor_inicial);
    void wait(const std::string& nombre);
    void signal(const std::string& nombre);

private:
    std::unordered_map<std::string, int> semaforos;
};

#endif // SEMAFOROS_H
