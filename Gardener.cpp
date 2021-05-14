#include <iostream>
#include "Gardener.h"

Gardener::Gardener(std::string name) : Person(name){}

std::string Gardener::getName() {
    return "Gardener " + Person::getName();
}

FlowerBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
    std::cout << getName() << " prepares flowers. " << std::endl;
    return new FlowerBouquet(flowers);
}
