//
// Created by sdedf on 21/06/2024.
//

#ifndef PROYECTOPARCIAL3_INVENTARIO_H
#define PROYECTOPARCIAL3_INVENTARIO_H

#include "item.h"
#include <iostream>
#include <vector>
class Inventario {
public:
    Inventario();
    ~Inventario();
void agregarItem(item* items);
void mostrar() ;
void borraritem(item* items);

private:

std::vector<item*> Obj;
};


#endif //PROYECTOPARCIAL3_INVENTARIO_H
