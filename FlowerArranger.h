#pragma once
#include "Person.h"
#include "FlowerBouquet.h"
#include <iostream>


class FlowerArranger : public Person{
public:
    FlowerArranger(std::string);
    void arrangeFlowers(FlowerBouquet*);
    std::string getName();
};
