#include "Gardener.h"
#include <iostream>
using namespace std;

Gardener::Gardener(const string& name) : Person(name) {}

FlowersBouquet* Gardener::prepareBouquet(const vector<string> &flowers)
{
 std::cout << "Gardener " << getname() << " prepares flowers." << std::endl;
    FlowersBouquet* bouquet = new FlowersBouquet(flowers);
    return bouquet;
}