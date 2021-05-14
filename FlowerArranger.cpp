#include "FlowerArranger.h"

//constructor
FlowerArranger::FlowerArranger(std::string name) : Person(name)
{}

//method
void FlowerArranger::arrangeFlowers(FlowerBouquet* bouquet)
{
    bouquet->arrange();
    std::cout<< getName() + " arranges flowers." << std::endl;
}

std::string FlowerArranger::getName() {
    return std::string("Flower Arranger ").append(Person::getName());
}