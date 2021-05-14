#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person(name){}

std::string DeliveryPerson::getName() {
    return "Delivery Person " + Person::getName();
}

void DeliveryPerson::deliver(Person* addressee, FlowerBouquet* bouquet) {
    std::cout<< getName() + " delivers flowers " + addressee->getName() + "." << std::endl;
    addressee->acceptFlowers(bouquet);
}
