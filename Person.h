#ifndef OOP_PRINCIPLES_2_PERSON_H
#define OOP_PRINCIPLES_2_PERSON_H


#include <string>
#include <vector>

class Florist;

class Person {
protected:
    std::string name;
public:
    Person(std::string);
    virtual std::string getName();
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlower(FlowerBouquet*);
};


#endif //OOP_PRINCIPLES_2_PERSON_H
