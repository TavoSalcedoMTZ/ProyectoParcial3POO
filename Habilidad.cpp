#include "Habilidad.h"
Habilidad::Habilidad() {
    costo=costo;
}

Habilidad::Habilidad(int costo) {
    this->costo=costo;
}

Habilidad::~Habilidad() {
    std::cout<<"La habilidad fue destruida"<<std::endl;
}

void Habilidad::setCosto(int costo) {}

int Habilidad::getCosto() {
    return costo;
}

void Habilidad::usarHabilidad() {
    std::cout<<"Habilidad usada"<<std::endl;
}