#include "vector"
#include "item.h"
#include "gift.h"

using namespace std;

class Character : Item {
public:
    /**
     * default ctor
     */
    Character();

    /**
     * 1-param Constructor
     */
    Character(char* name);

    Character(char* name, vector<Gift> loves, vector<Gift> likes);

    /**
     * Destructor
     */
    ~Character();

    /**
     * accessor for loves
     */
    vector<Gift> getLoves() const;

    /**
     * accessor for likes
     */
    vector<Gift> getLikes() const;

    /**
     * setter for loves
     */
    void addLoves(Gift g);

    /**
     * setter for loves
     */
    void addLikes(Gift g);


private:
    vector<Gift> loves_; // loved gifts
    vector<Gift> likes_; // liked gifts
};