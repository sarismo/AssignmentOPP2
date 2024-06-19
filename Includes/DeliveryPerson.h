#ifndef DELIVERY_PERSON_H
#define DELIVERY_PERSON_H

#include <string>
#include "Person.h"
#include "FlowersBouquet.h"
using namespace std ;

class DeliveryPerson : public Person {
public:
    DeliveryPerson(const string& name);
    void deliver(Person* recipient, FlowersBouquet* bouquet);


};

#endif // DELIVERY_PERSON_H
