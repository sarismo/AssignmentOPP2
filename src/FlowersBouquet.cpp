#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(const std::vector<std::string> &flowers) : bouquet(flowers), arranged(false) {}

void FlowersBouquet::arrange() {
    arranged = true;
}


FlowersBouquet::~FlowersBouquet() {
    
}
