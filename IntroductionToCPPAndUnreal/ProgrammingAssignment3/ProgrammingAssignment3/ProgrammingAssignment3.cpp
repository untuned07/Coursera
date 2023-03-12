// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed

        // declare a deck variable
        // DON'T SHUFFLE THE DECK
        Deck deck;

        // deal 2 cards each to 4 players (deal properly, dealing
        // the first card to each player before dealing the
        // second card to each player)
        Card Player1Card1 = deck.TakeTopCard();
        Card Player2Card1 = deck.TakeTopCard();
        Card Player3Card1 = deck.TakeTopCard();
        Card Player4Card1 = deck.TakeTopCard();
        Card Player1Card2 = deck.TakeTopCard();
        Card Player2Card2 = deck.TakeTopCard();
        Card Player3Card2 = deck.TakeTopCard();
        Card Player4Card2 = deck.TakeTopCard();

        // deal 1 more card to players 2 and 3
        Card Player2Card3 = deck.TakeTopCard();
        Card Player3Card3 = deck.TakeTopCard();

        // flip all the cards over
        Player1Card1.FlipOver();
        Player1Card2.FlipOver();
        Player2Card1.FlipOver();
        Player2Card2.FlipOver();
        Player2Card3.FlipOver();
        Player3Card1.FlipOver();
        Player3Card2.FlipOver();
        Player3Card3.FlipOver();
        Player4Card1.FlipOver();
        Player4Card2.FlipOver();

        // print the cards for player 1
        Player1Card1.Print();
        Player1Card2.Print();

        // print the cards for player 2
        Player2Card1.Print();
        Player2Card2.Print();
        Player2Card3.Print();

        // print the cards for player 3
        Player3Card1.Print();
        Player3Card2.Print();
        Player3Card3.Print();

        // print the cards for player 4
        Player4Card1.Print();
        Player4Card2.Print();

        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}