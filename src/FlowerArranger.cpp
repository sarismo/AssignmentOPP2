#include "FlowerArranger.h"
#include <iostream>
using namespace std ;
FlowerArranger::FlowerArranger(const string& name) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
    std::cout << "Flower Arranger " << getname() << " arranges flowers." << std::endl;
    bouquet->arrange();
}
