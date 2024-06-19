#include "Florist.h"
#include <iostream>
using namespace std ;

Florist::Florist(const std::string& name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name)
{
	this->wholesaler = wholesaler;
	this->flowerArranger = flowerArranger;
	this->deliveryPerson = deliveryPerson;
}

void Florist::acceptOrder(Person* sender, const vector<string>& flowers) {
    std::cout << "Florist " << name << " forwards request to Wholesaler " << wholesaler->getname() << "." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
    flowerArranger->arrangeFlowers(bouquet);
    deliveryPerson->deliver(sender, bouquet);
}
