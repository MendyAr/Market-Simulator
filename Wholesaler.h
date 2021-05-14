//
// Created by ikak on 14/05/2021.
//

#ifndef OOP_PRINCIPLES_2_WHOLESALER_H
#define OOP_PRINCIPLES_2_WHOLESALER_H


#include "Person.h"

class Wholesaler : public Person{
private:
    Grower* grower;
public:
    Wholesaler(std::string, Grower*);
    FlowerBouquet* acceptOrder(std::vector<std::string>);
    std::string getName();
};


#endif //OOP_PRINCIPLES_2_WHOLESALER_H
