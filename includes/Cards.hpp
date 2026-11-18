#ifndef CARDS_HPP
#define CARDS_HPP
#include "Suit.hpp"

class Cards {
    private:
        int rank;
        Suit suit;

    public:
        Cards(int r, Suit s) : rank(r), suit(s) {};
        int getRank();
        Suit getSuit();


};
#endif