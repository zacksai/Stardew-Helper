#include "character.h"

Character::Character()= default;

Character::Character(char* name) : Item(name){

}

Character::Character(char* name, vector<Gift> loves, vector<Gift> likes) : Item(name){
    loves_ = loves;
    likes_ = likes;
}


vector<Gift> Character::getLikes() const {
    return vector<Gift>();
}

vector<Gift> Character::getLoves() const {
    return vector<Gift>();
}

Character::~Character() {
    while (!loves_.empty()){
        loves_.pop_back();
    }

    while (!likes_.empty()){
        likes_.pop_back();
    }

}

void Character::addLoves(Gift g) {
    loves_.push_back(g);
}

void Character::addLikes(Gift g) {
    likes_.push_back(g);
}
