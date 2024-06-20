//
// Created by Alumnos on 20/06/2024.
//

#ifndef PROYECTOPARCIAL3_ENTIDAD_H
#define PROYECTOPARCIAL3_ENTIDAD_H

#include <iostream>
#include <string>
class Entidad {
public:
    Entidad();
    Entidad(std::string name, int salud);
    virtual  ~Entidad();

    void setName(std::string name);
    std::string getName();

    void setSalud(int salud);
    int getSalud();

    void virtual mostrarInfo();

private:
    std::string name;
    int salud;

};


#endif //PROYECTOPARCIAL3_ENTIDAD_H
