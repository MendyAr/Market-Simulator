#include <iostream>
#include "Grower.h"

Grower::Grower(std::string name, Gardener* gardener) : Person(name), gardener(gardener){}

std::string Grower::getName() {
    return "Grower " + Person::getName();
}

FlowerBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << getName() << " forwards the request to " << gardener.getName() << ". " << std::endl;
    FlowerBouquet* bouquet = gardener.prepareBouquet(flowers);
    std::cout << gardener.getName() << " returns flowers to " << getName() << ". " << std::endl;
    return bouquet;
}