//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_BOLADEFUEGO_H
#define PROYECTOPARCIAL3_BOLADEFUEGO_H

#include "Habilidad.h"
class BolaDeFuego :public Habilidad{
public:
    BolaDeFuego();
    BolaDeFuego(int costo,int danohab);
    ~BolaDeFuego() override;


    void setDanoHab(int danohab);
    int getDanoHab();

    void usarHabilidad() override;
private:
    int danohab;

};


#endif //PROYECTOPARCIAL3_BOLADEFUEGO_H
