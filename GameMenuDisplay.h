#ifndef GameMenuDisplay_h
#define GameMenuDisplay_h

#include <iostream>
#include <string>

class Display{
public:
    int playerCHoice;
    
    //Welcome AC ART.
    void welcome();
    
    //Tic-Tac-Toe ASC ART.
    void displayTicTacToe();
    
    // Hang Man ASC ART.
    void displayHangMan();
    
    //Quit ASC ART.
    void displayQuit();
    
    //Validate input function to play game.
    bool validateInput();
};
#endif // GameMenuDisplay_h
