//
// Created by sdedf on 21/06/2024.
//

#ifndef PROYECTOPARCIAL3_ITEM_H
#define PROYECTOPARCIAL3_ITEM_H

#include <iostream>
#include<string>
class item {
public:
    item();
    item(std::string nombreitem, std::string tipoitem);
    ~item();

    void setNameItem(std::string nombreitem);
    std::string  getItemName();

    void setTipoItem(std::string tipoitem);
    std::string getTipodeItem();
    void usar();

private:
    std::string nombreitem;
    std::string tipoitem;
};


#endif //PROYECTOPARCIAL3_ITEM_H
