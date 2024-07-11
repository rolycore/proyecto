#include "utilidades.h"
#include <sstream> // Incluye este encabezado para utilizar std::istringstream

namespace Utilidades {

    std::vector<std::string> split(const std::string& str, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(str); // std::istringstream está definido aquí
        while (std::getline(tokenStream, token, delimiter)) { // Usa std::getline de <sstream>
            tokens.push_back(token);
        }
        return tokens;
    }

    void imprimirVector(const std::vector<std::string>& vec) {
        for (const auto& elem : vec) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    // Implementa otros métodos útiles según sea necesario

} // namespace Utilidades
