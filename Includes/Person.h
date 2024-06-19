#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Florist.h"
#include "FlowersBouquet.h"
 using namespace std ;

class Person {
public:
   
    Person(string name);
    void orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers);
    void acceptFlowers(FlowersBouquet* bouquet);
    string getname();


    private:
     string name;
};

#endif // PERSON_H
