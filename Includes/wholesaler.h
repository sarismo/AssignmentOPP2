#ifndef WHOLESALER_H
#define WHOLESALER_H

#include <string>
#include <vector>
#include "Grower.h"
#include "FlowersBouquet.h"
#include "Person.h"


class Wholesaler : public Person {
public:
    Wholesaler(const std::string& name, Grower* grower);
    FlowersBouquet* acceptOrder(const std::vector<std::string>& flowers);

private:
    Grower* grower;
};

#endif 
