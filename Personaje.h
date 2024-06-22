//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_PERSONAJE_H
#define PROYECTOPARCIAL3_PERSONAJE_H

#include "Entidad.h"

class Personaje: public Entidad {
public:
    Personaje();
    Personaje(std::string name, int salud,int dano,int mana);
    ~Personaje() override;

    void setDano(int dano);
    int getDano();

    void setMana(int mana);
    int getMana();

    void mostrarInfo() override;

private:
    int dano;
    int mana;


};


#endif //PROYECTOPARCIAL3_PERSONAJE_H
