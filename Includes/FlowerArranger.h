#ifndef FLOWER_ARRANGER_H
#define FLOWER_ARRANGER_H

#include <string>
#include "FlowersBouquet.h"
#include "Person.h"

class FlowerArranger : public Person {
public:
    FlowerArranger(const std::string& name);
    void arrangeFlowers(FlowersBouquet* bouquet);

};

#endif // FLOWER_ARRANGER_H
