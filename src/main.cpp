#include <iostream>
#include <fstream>
#include <vector>
#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"

int main() {
    Person chris("Chris");
    Person robin("Robin");

    Gardener gardener("Garett");
    Grower grower("Gray", &gardener);
    Wholesaler wholesaler("Watson", &grower);
    FlowerArranger flowerArranger("Flora");
    DeliveryPerson deliveryPerson("Dylan");
    Florist florist("Fred", &wholesaler, &flowerArranger, &deliveryPerson);

    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
    chris.orderFlowers(&florist, &robin, flowers);

    return 0;
}
