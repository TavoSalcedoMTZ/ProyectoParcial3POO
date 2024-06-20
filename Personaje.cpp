//
// Created by Alumnos on 20/06/2024.
//

#include "Personaje.h"

Personaje::Personaje() {
    dano=0;
    mana=0;
}

Personaje::Personaje(std::string name, int salud, int dano, int mana) {
    this->dano=dano;
    this->mana=mana;
}
Personaje::~Personaje() noexcept {
    std::cout<<"El personaje ha sido destruido"<<std::endl;
}

void Personaje::setDano(int dano) {}

int Personaje::getDano() {
    return dano;
}

void Personaje::setMana(int mana) {}

int Personaje::getMana() {
    return mana;
}

void Personaje::mostrarInfo() {
    std::cout<<"Nombre= "<<getName()<<std::endl<<"Salud= "<<getSalud()<<std::endl<<"Dano"<<std::endl<<getDano()<<std::endl<<"Mana"<<getMana()<<std::endl;
}