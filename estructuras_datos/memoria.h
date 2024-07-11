#ifndef MEMORIA_H
#define MEMORIA_H

class Memoria {
public:
    Memoria();

    void asignarMemoria(int cantidad);
    bool liberarMemoria(int cantidad);
    bool verificarEspacio(int cantidad) const;

private:
    int espacio_disponible;
};

#endif // MEMORIA_H
