#ifndef UTILIDADES_H
#define UTILIDADES_H

#include <iostream>
#include <vector>
#include <string>

namespace Utilidades {

    // Función para dividir una cadena por un delimitador y guardar los tokens en un vector
    std::vector<std::string> split(const std::string& str, char delimiter);

    // Función para imprimir un vector de cadenas
    void imprimirVector(const std::vector<std::string>& vec);
    
    // Otros métodos útiles según sea necesario
}

#endif // UTILIDADES_H
