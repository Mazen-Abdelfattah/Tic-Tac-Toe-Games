// Class definition for XO_RandomPlayer class
// Which is a computer player playing randomly
// Author:  Mohammad El-Ramly
#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>
#include "Board_Games.hpp"
using namespace std;

// Set player symbol and name as Random Computer Player
RandomPlayer::RandomPlayer (char symbol, int dimension,Board *brd):Player(symbol),brdptr(brd)         //newwwwwwwwwwwwwwwwwwwwwwwww
{
    this->dimension = dimension;
    this->name = "Random Computer Player";
    cout << "My names is " << name << endl;
}

// Generate a random move
void RandomPlayer::get_move (int& x, int& y)  {
    pair<int,int> Bestmove=brdptr->A_I_move();         //newwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
    x=Bestmove.first;
    y=Bestmove.second;
}
