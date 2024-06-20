//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_HABILIDAD_H
#define PROYECTOPARCIAL3_HABILIDAD_H

#include <iostream>
class Habilidad {
public:
    Habilidad();
    Habilidad(int costo);
    virtual ~Habilidad();

    void setCosto(int costo);
    int getCosto();

    virtual void usarHabilidad();
private:
    int costo;
};


#endif //PROYECTOPARCIAL3_HABILIDAD_H
