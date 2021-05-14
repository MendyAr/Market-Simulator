#ifndef OOP_PRINCIPLES_2_GARDENER_H
#define OOP_PRINCIPLES_2_GARDENER_H


#include "Person.h"

class Gardener : public Person{
public:
    Gardener(std::string);
    std::string getName();
    FlowerBouquet* prepareBouquet(std::vector<std::string>);
};


#endif //OOP_PRINCIPLES_2_GARDENER_H
