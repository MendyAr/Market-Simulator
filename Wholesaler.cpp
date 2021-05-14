#include <iostream>
#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower){}

std::string Wholesaler::getName() {
    return "Wholesaler " + Person::getName();
}

FlowerBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << getName() << " forwards the request to " << grower.getName() << ". " << std::endl;
    FlowerBouquet* bouquet = grower.prepareOrder(flowers);
    std::cout << grower.getName() << " returns flowers to " << getName() << ". " << std::endl;
    return bouquet;
}

