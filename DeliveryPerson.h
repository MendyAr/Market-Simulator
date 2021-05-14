#pragma once
#include "Person.h"
#include <iostream>


class DeliveryPerson : public Person{
public:
    DeliveryPerson(std::string);
    void deliver(Person*, FlowerBouquet*);
    std::string getName();
};
