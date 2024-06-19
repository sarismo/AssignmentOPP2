#ifndef GROWER_H
#define GROWER_H

#include <string>
#include <vector>
#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower : public Person {
public:
    Grower(const std::string& name, Gardener* gardener);
    FlowersBouquet* prepareOrder(const std::vector<std::string>& flowers);

private:
    Gardener* gardener;
};

#endif // GROWER_H
