#pragma once
#include<string>
#include<vector>

class FlowerBouquet {
private:
    std::vector<std::string> bouquet;

public:
    bool is_arranged;

    FlowerBouquet(std::vector<std::string>);
    void arrange();
    std::string toString();
};