#include "Grower.h"
#include <iostream>
using namespace std;

Grower::Grower(const string &name, Gardener* gardener) : Person(name), gardener(gardener) {}

FlowersBouquet* Grower::prepareOrder(const vector<string> &flowers) {
    std::cout << "Grower " << getname() << " forwards the request to Gardener " << gardener->getname() << "." << std::endl;
    return gardener->prepareBouquet(flowers);
}
