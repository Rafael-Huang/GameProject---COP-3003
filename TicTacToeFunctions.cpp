#include <iostream>
#include "TicTacToeFunctions.h"


    char space[3][3];               // array which consists of a 3x3 space to simulate the TIC TAC TOE game.
    char symbol;                    // char will store the symbol corresponding to each player.
    int digit, row, column;         // intigers which will store each of the 9 spaces from the tic tac toe game and the number that is referenced to.
    std::string player1, player2;   // variables that store each players name.

    // Function which build the Tic Tac Toe structure, using arrays.
    void TicTacToe::GameTTT()
    {
        
        std::cout<<"    |     |   \n";
        std::cout<<" "<<space[0][0]<<"  |  "<<space[0][1]<<"  |  "<<space[0][2]<<"  \n";
        std::cout<<"____|_____|____\n";
        std::cout<<"    |     |   \n";
        std::cout<<" "<<space[1][0]<<"  |  "<<space[1][1]<<"  |  "<<space[1][2]<<"  \n";
        std::cout<<"____|_____|____\n";
        std::cout<<"    |     |   \n";
        std::cout<<" "<<space[2][0]<<"  |  "<<space[2][1]<<"  |  "<<space[2][2]<<"  \n";
        std::cout<<"    |     |   \n";
        
    }
    
    
   // Functions that works to substitute the number that correspondes to the square of the player choice and putting in a 'x' or 'o' depending on the player.
    void TicTacToe::inputTTT()
    {
        
        if(symbol == 'x')
        {
            std::cout<<"\n\n";
            
            std::cout<<player1<<", Please Enter the corresponding number: ";
            std::cin>>digit;
            
            std::cout <<"\n\n";
            
        }
        
        if(symbol == 'o')
        {
            std::cout<< "\n\n";
            
            std::cout<<player2<<", Please Enter the corresponding number: ";
            std::cin>>digit;
            
            std::cout<<"\n\n";
            
        }
        
        if(digit == 1)
        {
            row = 0;
            column = 0;
        }
        
        if(digit == 2)
        {
            row = 0;
            column = 1;
        }
        
        if(digit == 3){
            
            row = 0;
            column = 2;
        }
        
        if(digit == 4)
        {
            row = 1;
            column = 0;
        }
        
        if(digit == 5)
        {
            row = 1;
            column = 1;
        }
        
        if(digit == 6)
        {
            row = 1;
            column = 2;
        }
        
        if(digit == 7)
        {
            row = 2;
            column = 0;
        }
        
        if(digit == 8)
        {
            row = 2;
            column = 1;
        }
        
        if(digit == 9)
        {
            row = 2;
            column = 2;
        }
        
        else if(digit<1 || digit>9)
        {
            std::cout<<"Invalid input. " << std::endl;
        }
        
        if(symbol == 'x' && space[row][column] != 'x' && space[row][column] != 'o')
        {
            
            space[row][column] = 'x';
            symbol = 'o';
        }
        
        else if(symbol == 'o' && space[row][column] != 'x' && space[row][column] != 'o')
        {
            
            space[row][column] = 'o';
            symbol = 'x';
        }
        
        else
        {
            std::cout<<"There is no empty space!" << std::endl;
            inputTTT();
        }
        
        GameTTT();
        
    }
    
    // Function which consists of the conditions to win the gome, using for loops and if and else.
    bool TicTacToe::conditionTTT()
    {
        
        for( int k = 0; k<3; k++)
        {
            if(space[k][0] == space[k][1] && space[k][0] == space [k][2] || space[0][k] == space[1][k] && space[0][k] == space[2][k])
                return true;
        }
        if(space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][2])
        {
            return true;
        }
        
        for(int k=0;k<3;k++)
        {
            for(int i=0;i<3;i++)
            {
                if(space[k][i] != 'x' && space[k][i] != '0')
                {
                    return false;
                }
            }
        }
        
        bool tie = true;
        return tie;
    }

