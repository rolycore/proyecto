#ifndef PROCESO_H
#define PROCESO_H

class Proceso {
public:
    Proceso(int id, int tiempo_llegada, int tiempo_rafaga);

    int getID() const;
    int getTiempoLlegada() const;
    int getTiempoRafaga() const;
    void reducirTiempoRafaga(int tiempo);
    void finalizar();

private:
    int id;
    int tiempo_llegada;
    int tiempo_rafaga;
};

#endif // PROCESO_H
