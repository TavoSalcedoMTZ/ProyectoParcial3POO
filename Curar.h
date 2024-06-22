//
// Created by sdedf on 21/06/2024.
//

#ifndef PROYECTOPARCIAL3_CURAR_H
#define PROYECTOPARCIAL3_CURAR_H

#include "Habilidad.h"
class Curar :public Habilidad {
public:
    Curar();
    Curar(std::string nombrehab, int costo, int distancia, int aumentovida);
    ~Curar() override;

    void setAumentoVida(int aumentovida);
    int getAumentoVida();

    void usarHabilidad() override;
private:
    int aumentovida;

};


#endif //PROYECTOPARCIAL3_CURAR_H
