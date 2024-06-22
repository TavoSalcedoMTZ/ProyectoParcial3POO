#include "Habilidad.h"
Habilidad::Habilidad() {
    nombrehab="";
    costo=0;
    distancia=0;
}

Habilidad::Habilidad(std::string nombrehab, int costo, int distancia) {
    this->nombrehab=nombrehab;
    this->costo=costo;
    this->distancia=distancia;
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