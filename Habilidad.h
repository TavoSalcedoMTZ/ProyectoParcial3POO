//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_HABILIDAD_H
#define PROYECTOPARCIAL3_HABILIDAD_H

#include <iostream>
#include <string>
class Habilidad {
public:
    Habilidad();
    Habilidad(std::string nombrehab,int costo,int distancia);
    virtual ~Habilidad();

    void setCosto(int costo);
    int getCosto();

    virtual void usarHabilidad();
private:
    std::string nombrehab;
    int costo;
    int distancia;
};


#endif //PROYECTOPARCIAL3_HABILIDAD_H
