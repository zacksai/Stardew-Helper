#include "item.h"
#include "vector"

using namespace std;

class Crop : Item {
public:
    /**
     * 1-param ctor
     * @param name crop's name
     */
    Crop(char* name);

    /**
     * full constructor
     * @param name
     * @param seedCost
     * @param ROI
     * @param yield
     * @param salesPrice
     */
    Crop(char* name, double seedCost, double ROI, int yield, vector<double> salesPrice);

    /**
     * destructor
     */
    ~Crop();

    /**
     * accessor for seed cost
     */
    double getSeedCost() const;

    /**
     * accessor for roi
     */
    double getRoi() const;

    /**
     * accessor for yield
     */
    int getYield() const;

    /**
     * accessor for salesprice
     */
    const vector<double> &getSalesPrice() const;

private:
    double seedCost_;
    double ROI_;
    int yield_;
    vector<double> salesPrice_; // price of each quality

};