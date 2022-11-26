
#include "crop.h"

Crop::Crop(char* name) : Item(name){
    seedCost_ = ROI_ = 0.0;
    yield_ = 0;
}

Crop::Crop(char* name, double seedCost, double ROI, int yield, vector<double> salesPrice) : Item(name){
    seedCost_ = seedCost;
    ROI_ = ROI;
    yield_ = yield;
    salesPrice_ = salesPrice;
}

Crop::~Crop(){
    while (!salesPrice_.empty()) {
        salesPrice_.pop_back();
    }
}

double Crop::getSeedCost() const {
    return seedCost_;
}

double Crop::getRoi() const {
    return ROI_;
}

int Crop::getYield() const {
    return yield_;
}

const std::__1::vector<double> &Crop::getSalesPrice() const {
    return salesPrice_;
}
