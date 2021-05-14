#ifndef OOP_PRINCIPLES_2_WHOLESALER_H
#define OOP_PRINCIPLES_2_WHOLESALER_H


#include "Person.h"
#include "Grower.h"

class Wholesaler : public Person{
private:
    Grower* grower;
public:
    Wholesaler(std::string, Grower*);
    FlowerBouquet* acceptOrder(std::vector<std::string>);
    std::string getName();
};


#endif //OOP_PRINCIPLES_2_WHOLESALER_H
