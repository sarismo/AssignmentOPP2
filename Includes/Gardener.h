#ifndef GARDENER_H
#define GARDENER_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person {
public:
    Gardener(const std::string& name);
    FlowersBouquet* prepareBouquet(const std::vector<std::string>& flowers);


};  

#endif // GARDENER_H
