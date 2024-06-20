
#include "Entidad.h"
Entidad::Entidad() {
    name="";
    salud=0;
}
Entidad::Entidad(std::string name, int salud) {
    this->name=name;
    this->salud=salud;
}

Entidad::~Entidad() {
    std::cout<<"La entidad ha sido destruida"<<std::endl;
}

void Entidad::setName(std::string name) {}

std::string Entidad::getName() {
    return name;
}

void Entidad::setSalud(int salud) {}

int Entidad::getSalud() {
    return salud;
}

void Entidad::mostrarInfo() {
    std::cout<<"Nombre= "<<getName()<<std::endl<<"Salud= "<<getSalud()<<std::endl;
}