#include "TicTacToeFunctions.h"
#include <iostream>
#include <stdio.h>

//TTT function display.
void GameTTT()
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


//Second TTT function, used for conditions.
void InputTTT()
{
    
    if(symbol == 'x')
    {
        std::cout<<"\n\n";
        
        std::cout<<player1<<", Please Enter the corresponding number: ";
        std::cin>>digit;
        
        std::cout <<"\n\n";
        
    }
    
    if(symbol == '0')
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
    
    if(symbol == 'x' && space[row][column] != 'x' && space[row][column] != '0')
    {
        
        space[row][column] = 'x';
        symbol = '0';
    }
    
    else if(symbol == '0' && space[row][column] != 'x' && space[row][column] != '0')
    {
        
        space[row][column] = '0';
        symbol = 'x';
    }
    
    else
    {
        std::cout<<"There is no empty space!" << std::endl;
        InputTTT();
    }
    
    GameTTT();
    
}

bool ConditionTTT()
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


