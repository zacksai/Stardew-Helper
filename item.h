using namespace std;

/**
 * abstract class to represent all in-game items
 */
class Item{
public:
    /**
     * default constructor
     */
    Item();

    /**
     * full constructor
     */
     explicit Item(char* name);

    /*
     * destructor
     */
    ~Item();

    /*
     * accessor for name
     */
    virtual char* getName();
private:
    char* name_;
};
