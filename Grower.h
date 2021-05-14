#ifndef OOP_PRINCIPLES_2_GROWER_H
#define OOP_PRINCIPLES_2_GROWER_H


#include "Person.h"
#include "Gardener.h"

class Grower : public Person{
private:
    Gardener* gardener;
public:
    Grower(std::string, Gardener*);
    std::string getName();
    FlowerBouquet* prepareOrder(std::vector<std::string>);
};


#endif //OOP_PRINCIPLES_2_GROWER_H
