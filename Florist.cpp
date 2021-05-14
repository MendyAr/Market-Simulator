#include "Florist.h"

//constructor
Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp) : Person(name)
{
    wholesaler = ws;
    flowerArranger = fa;
    deliveryPerson = dp;
}

//methods
void Florist::acceptOrder(Person* addressee, std::vector<std::string> flowers) {
    std::cout<< getName() + " forwards request to " + wholesaler->getName() + "." << std::endl;
    FlowerBouquet* bouquet = wholesaler->acceptOrder(flowers);
    std::cout<< wholesaler->getName() + " returns flowers to " + getName() + "." << std::endl;
    std::cout<< getName() + " request flowers arrangement from " + flowerArranger->getName() + "." << std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    std::cout<< flowerArranger->getName() + " returns arranged flowers to Florist " + Person::getName() + "." << std::endl;
    std::cout<< getName() + " forwards flowers to " + deliveryPerson->getName() + "." << std::endl;
    deliveryPerson->deliver(addressee, bouquet);
}

std::string Florist::getName(){
    return std::string("Florist ").append(Person::getName());
}
