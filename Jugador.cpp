
#include "Jugador.h"
Jugador::Jugador():Personaje(),BolaDeFuego(),Curar(){}

Jugador::Jugador(std::string name, int salud, int dano, int mana):Personaje(name,salud,dano,mana){}

Jugador::~Jugador() noexcept {
    std::cout<<"Jugador detruido"<<std::endl;
}

void Jugador::mostrarInfo() {}


void Jugador::agregarHabilidad(std::string habilidad){
    ObjHabilidad.push_back(habilidad);
}

void Jugador::usarHabilidad(std::string habilidad) {
    auto it=std::find(ObjHabilidad.begin(),ObjHabilidad.end(),habilidad);

}






