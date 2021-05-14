#include <iostream>
#include <vector>
#include "Person.h"
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Florist.h"

int main() {
    //preparation
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    Gardener* garett = new Gardener("Garret");
    Grower* gray = new Grower("Gray", garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    FlowerArranger* flora = new FlowerArranger("Flora");
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Florist* fred = new Florist("Fred", watson, flora, dylan);
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };

    //orderation
    chris->orderFlowers(fred, robin, order);

    //free memorization
    delete fred;
    delete dylan;
    delete flora;
    delete watson;
    delete gray;
    delete garett;
    delete chris;
    delete robin;
}
