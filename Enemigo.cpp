//
// Created by Alumnos on 20/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo():Entidad() {
    dano=0;
    armadura=0;
}

Enemigo::Enemigo(std::string name, int salud, int dano, int armadura):Entidad(name,salud) {
    this->dano=dano;
    this->armadura=armadura;
}
Enemigo::~Enemigo() noexcept {
    std::cout<<"Enemigo Destruido"<<std::endl;
}

void Enemigo::setDano(int dano) {}

int Enemigo::getDano() {
    return dano;
}

void Enemigo::setArmor(int armadura) {}

int Enemigo::getArmor() {
    return armadura;
}
void Enemigo::mostrarInfo() {
    std::cout << "Nombre= " << getName() << std::endl << "Salud= " << getSalud() << std::endl << "Dano=" <<
              getDano() << std::endl << "Armadura=" << getArmor() << std::endl;
}