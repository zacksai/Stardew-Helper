#include "item.h"

using namespace std;

class Gift : Item{
public:
    /*
     * default constructor
     */
    Gift();

    /*
     * full constructor
     */
    Gift(char* name, bool h8rs);
private:
    bool h8rs_; // universally hated item?
};