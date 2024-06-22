//
// Created by sdedf on 21/06/2024.
//

#ifndef PROYECTOPARCIAL3_JUGADOR_H
#define PROYECTOPARCIAL3_JUGADOR_H

#include "Personaje.h"
#include "BolaDeFuego.h"
#include "Curar.h"
#include <vector>
#include <algorithm>
#include "Inventario.h"
class Jugador: public Personaje, public BolaDeFuego, public Curar, public Inventario {
public:
    Jugador();
    Jugador(std::string name,int salud,int dano, int mana);
    ~Jugador() override;

    void mostrarInfo() ;

    void usarHabilidad(std::string habilidad) ;

    void agregarHabilidad(std::string habilidad);
    void mostrar() const;
private:
std::vector<std::string> ObjHabilidad;

};


#endif //PROYECTOPARCIAL3_JUGADOR_H
