#ifndef FLORIST_H
#define FLORIST_H

#include <string>
#include <vector>
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
using namespace std ;


class FlowersBouquet;

class Florist : public Person {
public:
    Florist(const std::string& name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
    void acceptOrder(Person* sender, const std::vector<std::string>& flowers);
    std :: string getName();
    Wholesaler& getWholeSaler();
    FlowerArranger getArranger();
    DeliveryPerson getDeliveryperson();



private :    
     std::string name;
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

   
};

#endif // FLORIST_H
