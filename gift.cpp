#include "gift.h"

Gift::Gift(){
    h8rs_ = false;
}

Gift::Gift(char* name, bool h8rs) : Item(name){
    h8rs_ = h8rs;
}
