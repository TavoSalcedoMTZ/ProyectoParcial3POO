//
// Created by sdedf on 21/06/2024.
//

#include "Inventario.h"

Inventario::Inventario() {}

Inventario::~Inventario() {
    std::cout<<"Inventario Destruido"<<std::endl;
}

void Inventario::agregarItem(item *items) {
    Obj.push_back(items);
}

void Inventario::mostrar()  {
    for(item* items:Obj){
        std::cout<<items<<""<<std::endl<<std::endl;
    }
}

void Inventario::borraritem(item* items){
    auto it=std::find(Obj.begin(),Obj.end(), items);
    Obj.erase(it);
std::cout<<"Item Borrado"<<std::endl;
}