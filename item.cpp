//
// Created by sdedf on 21/06/2024.
//

#include "item.h"

item::item() {
    nombreitem="";
    tipoitem="";
}

item::item(std::string nombreitem, std::string tipoitem) {

    this->nombreitem=nombreitem;
    this->tipoitem=tipoitem;

}
item::~item() {
    std::cout<<"Item Destruido"<<std::endl;
}

void item::setNameItem(std::string nombreitem) {}

std::string item::getItemName() {
    return nombreitem;
}

void item::setTipoItem(std::string tipoitem) {}
std::string item::getTipodeItem() {
    return tipoitem;
}

void item::usar() {
std::cout<<"El item de tipo"<<getTipodeItem()<<" con nombre "<<getItemName()<<" ha sido utilizado"<<std::endl;
}
