#include "Wholesaler.h"
#include <iostream>
using namespace std;

Wholesaler::Wholesaler(const string &name, Grower* grower) : Person(name), grower(grower) {}

FlowersBouquet* Wholesaler::acceptOrder(const vector<string> &flowers) {
    std::cout << "Wholesaler " << getname() << " forwards the request to Grower " << grower->getname() << "." << std::endl;
    return grower->prepareOrder(flowers);
}
