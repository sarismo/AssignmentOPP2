#ifndef FLOWERS_BOUQUET_H
#define FLOWERS_BOUQUET_H

#include <vector>
#include <string>

class FlowersBouquet {
public:
    FlowersBouquet(const std::vector<std::string>& flowers);
    ~FlowersBouquet();
    void arrange();
    bool isArranged() const;
    std::string getDescription() const;
    std::vector<std::string>& getbouquet();
    

    

 private:
     std::vector<std::string> bouquet;
     bool arranged;
};

#endif // FLOWERS_BOUQUET_H
