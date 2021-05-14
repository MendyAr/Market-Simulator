#include "DeliveryPerson.h"


void DeliveryPerson::deliver(Person* addressee, FlowersBouquet* bouquet) {
    delivers flowers Robin.
    std::cout<< getName() + " delivers flowers " + addressee.getName() + "." << std::endl;
    Person->acceptFlowers(bouquet);
}

std::string getName(){
    return std::string("Delivery Person ").append(Person.getName());
}
