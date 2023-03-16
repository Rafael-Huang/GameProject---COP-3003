/*
Rafael Huang
GAME PROJECT
COP 3003
This program consists of a menu that displays 3 different games, user will be able to choose one of them and play them.
 */

// Using Big Money-ne ACIII ART


#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include "GameMenuDisplay.h"
#include "HangMan_Functions.h"
#include "TicTacToeFunctions.h"

int main()
{
    
    int playerChoice; // variable that hold player's game of choice
    
    welcome();

    std::cout << "Enter the number that corresponds to the game of your choice: \n\n\n";
    
    displayTicTacToe();
    std::cout<<" \n\n\n";
    
    displayHangMan();
    std::cout<<" \n\n\n";
    
    displayBlackJack();
    std::cout<<"\n\n\n";
    
    displayQuit();
    std::cout<<"\n\n\n";
    
    std::cout<<"Enter the number of yout choice: ";
    std::cin>>playerChoice;
    std::cout<<"\n";
    
    //condtion which will take player to tic-tac-toe game.
    if(playerChoice == 1)
    {
        
        std::cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
        
        std::cout<<"Player 1, Enter your name: ";
        std::cin>>player1;
        std::cout<<"Player 2, Enter your name: ";
        std::cin>>player2;
        
        std::cout<<"\n\n";
        
        std::cout<<player1<<" is Player 1, who will make the first move. \n";
        std::cout<<player2<<" is Player 2, who goes after Player 1. \n\n";
        
        while(!ConditionTTT())
        {
            GameTTT();
            InputTTT();
            ConditionTTT();
        }
        
        if(symbol == 'x' && ::tie == false)
        {
            std::cout<<player2<<" WON!!!"<<std::endl;
        }
        
        else if(symbol == '0' && ::tie == false)
        {
            std::cout<<player1<<" WON!!!"<<std::endl;
        }
        else
        {
            std::cout<<"Draw!!"<<std::endl;
        }
    }
    
    if(playerChoice == 2)
    {
        displayHangMan();
        
        std::string codeword = "codingisfun";
        std::string userAnswer = "___________";
        int missedLetters = 0;
        std::vector<char> incorrect;
        bool userGuess = false;
        char letter;
        
        while(userAnswer != codeword && missedLetters < 7)
        {
            DisplayUserMisses(missedLetters);
            DisplayStatus(incorrect, userAnswer);
            
            std::cout << "\n\nPlease enter yout guess: ";
            std::cin >> letter;
            
            for(int k = 0; k < codeword.length(); k++)
            {
                if(letter == codeword[k])
                {
                    userAnswer[k] = letter;
                    userGuess = true;
                }
            }
            if(userGuess)
            {
                std::cout << "\nCORRECT!\n";
            }
            else
            {
                std::cout << "\n INCORRECT! Another part of the person's body has been drawn. ";
                incorrect.push_back(letter);
                missedLetters++;
            }
            
            userGuess = false;
        }
        
        EndGame(userAnswer, codeword);
    }
    
    
    //condition in which will display "to be done."
    if(playerChoice == 3)
    {
        std::cout<< "To be done..." << std::endl;
    }

    
    //condition which end the program if player want.
    else if(playerChoice == 4 )
    {
        std::cout << "Sorry you had to leave so early. Thank you for testing our program! \n\n";
            exit(4);
        
        return 4;
    }
}


