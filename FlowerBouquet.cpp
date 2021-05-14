#include "FlowerBouquet.h"

//constructor
FlowerBouquet::FlowerBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), is_arranged(false)
{}


//methods
void FlowerBouquet::arrange() {
    is_arranged = true;
}

std::string FlowerBouquet::toString() {
    std::string fb;
    for (std::string flower : bouquet) {
        fb.append(flower + ", ");
    }
    if(!fb.empty())
        fb.erase(fb.length()-2, fb.length()-1);
    return fb;
}
