#ifndef OOP_PRINCIPLES_2_FLORIST_H
#define OOP_PRINCIPLES_2_FLORIST_H

#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"


class Florist : public Person{
private:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

public:
    Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
    void acceptOrder(Person*, std::vector <std::string>);
    std::string getName();
};

#endif //OOP_PRINCIPLES_2_FLORIST_H
