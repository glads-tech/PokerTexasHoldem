#ifndef DECK_HPP
#define DECK_HPP
#include "Cards.hpp"
#include <vector>

class Deck {
    private:
        std::vector<Cards> deck;
    public:
        Deck();
        void Shuffle();
        Cards Draw();

};

#endif