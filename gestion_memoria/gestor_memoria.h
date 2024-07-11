#ifndef GESTOR_MEMORIA_H
#define GESTOR_MEMORIA_H

class GestorMemoria {
public:
    GestorMemoria();
    void asignarMemoria(int cantidad);

private:
    int memoria_disponible;  // Ajustar según sea necesario
};

#endif // GESTOR_MEMORIA_H
