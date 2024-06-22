
#include "Curar.h"

Curar::Curar():Habilidad() {
    aumentovida=0;
}

Curar::Curar(std::string nombrehab, int costo, int distancia, int aumentovida):Habilidad(nombrehab,costo,distancia) {
    this->aumentovida=aumentovida;
}
Curar::~Curar() noexcept{
    std::cout<<"Curacion Destruida"<<std::endl;
}

void Curar::setAumentoVida(int aumentovida) {}

int Curar::getAumentoVida() {
    return aumentovida;
}

void Curar::usarHabilidad() {
    std::cout<<"La curacion ha sido utilizada y nos ha curado "<<getAumentoVida()<<" puntos de vida"<<std::endl;
}