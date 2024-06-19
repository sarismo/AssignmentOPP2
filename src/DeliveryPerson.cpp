
#include "DeliveryPerson.h"
#include <iostream>
using namespace std;

DeliveryPerson::DeliveryPerson(const string &name) : Person(name) {}

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
    std::cout << "Delivery Person " << getname() << " delivers flowers to " << recipient->getname() << "." << std::endl;
    recipient->acceptFlowers(bouquet);
}

