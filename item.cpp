#include "item.h"

Item::Item() {
    name_ = nullptr;
}

Item::Item(char* name) {
    name_ = name;
}

Item::~Item(){

    // free up memory
    delete [] name_;
}

char *Item::getName() {
    return name_;
}
