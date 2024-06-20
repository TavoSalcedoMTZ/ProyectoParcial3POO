//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_ENEMIGO_H
#define PROYECTOPARCIAL3_ENEMIGO_H

#include "Entidad.h"
class Enemigo:public Entidad {
public:
    Enemigo();
    Enemigo(std::string name, int salud,int dano,int armadura);
    ~Enemigo() override;

    void setDano(int dano);
    int getDano();

    void setArmor(int armadura);
    int getArmor();

    void mostrarInfo() override;

private:
    int dano;
    int armadura;

};


#endif //PROYECTOPARCIAL3_ENEMIGO_H
