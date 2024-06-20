
#include "BolaDeFuego.h"

BolaDeFuego::BolaDeFuego() {}

BolaDeFuego::BolaDeFuego(int costo, int danohab) {
    this->danohab=danohab;
}

BolaDeFuego::~BolaDeFuego() noexcept {
    std::cout<<"Bola de fuego destruida"<<std::endl;
}

void BolaDeFuego::setDanoHab(int danohab) {}

int BolaDeFuego::getDanoHab() {
    return danohab;
}

void BolaDeFuego::usarHabilidad() {
    std::cout<<"Bola de fuego lanzada hizo un damage de "<<getDanoHab()<<std::endl;
}
