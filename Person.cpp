#include <iostream>
#include "Person.h"

Person::Person(std::string name) : name(name)
{
}

std::string Person::getName() {
    return name;
}

void Person::orderFlowers(Florist * florist, Person * person, std::vector<std::string> flowers) {
    std::string flowers_str = "";
    for (auto flower: flowers)
        flowers_str.append(", " + flower);
    flowers_str.substr(2);
    std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << ": " << flowers_str << ". " << std::endl;
    florist->acceptOrder(person, flowers);
}

void Person::acceptFlower(FlowerBouquet * bouquet) {
    std::cout << getName() << " accepts the flowers: " << bouquet->toString() << std::endl;
}