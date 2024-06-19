#include "Person.h"
#include <iostream>

Person::Person(const std::string name) : name(name) {}

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
    std::cout << name << " orders flowers to " << recipient->name << " from Florist " << florist->getName() << ": ";
    for (const auto& flower : flowers) {
        std::cout << flower << " ";
    }
    std::cout << std::endl;
    florist->acceptOrder(this, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " accepts the flowers: ";
    for (const auto& flower : bouquet->getbouquet()) {
        std::cout << flower << " ";
    }
    std::cout << std::endl;
    delete bouquet;  // Free the allocated memory for the bouquet
}
