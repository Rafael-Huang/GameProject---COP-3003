#ifndef TicTacToeFunctions_h
#define TicTacToeFunctions_h

#include <iostream>

class TicTacToe{
public: 
    // TTT GLOBAL VARIABLES.
    char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int row;
    int column;
    char symbol = 'x';
    std::string player1="";
    std::string player2="";
    int digit;
    bool tie = false;
    
    //TTT function display.
    void GameTTT();
    
    //Second TTT function, used for conditions.
    bool conditionTTT();
    
    //Third function, will go through the conditions to see who won the game.
    void inputTTT();
    
};
#endif /* TicTacToeFunctions_h */
