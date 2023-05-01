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
    
    
    Display obj0;    // Class object for Displaying asc art option.
    TicTacToe obj1;  // Class object for Tic Tac Toe game.
    HangMan obj2;    // Class object for Hnag Man game.
     
    int playerChoice; // variable that hold player's game of choice
    char playAgainTTT, playAgainHangman;
    
    obj0.welcome();

    obj0.displayTicTacToe();
    std::cout<<" \n\n\n";
    
    obj0.displayHangMan();
    std::cout<<" \n\n\n";
    
    obj0.displayQuit();
    std::cout<<"\n\n\n";
    
    
    //While loop to make sure, user input a valid number to play the game of he/she choice, otherwise, invalid input, try again.
    while(true){
        std::cout << "Enter the number that corresponds to the game of your choice: ";
        std::cin>>playerChoice;
        std::cout<<"\n";
    
        //condtion which will take player to tic-tac-toe game.
        if(playerChoice == 1)
        {
            while(true){
                std::cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
                
                //Ask for both players name, due to this game being a two player game.
                std::cout<<"Player 1, Enter your name: ";
                std::cin>>obj1.player1;
                std::cout<<"Player 2, Enter your name: ";
                std::cin>>obj1.player2;
                
                std::cout<<"\n\n";
                
                std::cout<<obj1.player1<<" is Player 1, who will make the first move. \n";
                std::cout<<obj1.player2<<" is Player 2, who goes after Player 1. \n\n";
                
                while(!obj1.conditionTTT())
                {
                    obj1.GameTTT();
                    obj1.inputTTT();
                    obj1.conditionTTT();
                }
                
           
                // Condition fo if and else to check if player1 or player2 won the game, or if it was a draw.
                if(obj1.symbol == 'x' && obj1.tie == false)
                {
                    std::cout<<obj1.player2<<" WON!!!"<<std::endl;
                }
                
                else if(obj1.symbol == 'o' && obj1.tie == false)
                {
                    std::cout<<obj1.player1<<" WON!!!"<<std::endl;
                }
                else
                {
                    std::cout<<"Draw!!"<<std::endl;
                }
                
                //Condition to see if player wants to play the game again.
                std::cout<<"Do you wanna use the tic tac toe again? Y for yes, N for no: ";
                std::cin>>playAgainTTT;
                
                if(playAgainTTT == 'y' || playAgainTTT == 'Y'){
                    continue;
                }
                else
                    break;
            }
        }
            
        //Condition which will happen if user choose option 2, where he/she will e playing HangMan.
        else if(playerChoice == 2)
        {
            std::cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
            
            std::string codeword = "codingisfun";
            std::string userAnswer = "___________";
            int missedLetters = 0;
            std::vector<char> incorrect;
            bool userGuess = false;
            char letter;
            
            obj2.DisplayInstructions();
            std::cout<<"\n\n\n";
            
            while(userAnswer != codeword && missedLetters < 7)
            {
                obj2.DisplayUserMisses(missedLetters);
                obj2.DisplayStatus(incorrect, userAnswer);
                
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
                    std::cout << "\n INCORRECT! Another part of the person's body has been drawn. \n";
                    incorrect.push_back(letter);
                    missedLetters++;
                }
                
                userGuess = false;
            }
            
            obj2.EndGame(userAnswer, codeword);
            
            //Ask for player if he/she wants to play again.
            std::cout<<"Do you wanna use the tic tac toe again? Y for yes, N for no: ";
            std::cin>>playAgainHangman;
            
            if(playAgainHangman == 'y' || playAgainHangman == 'Y'){
                continue;
            }
            else
                break;
        }
        
        
        //condition which end the program if player want.
        else if(playerChoice == 3 )
        {
            std::cout << "Sorry you had to leave so early. Thank you for testing our program! \n\n";
            exit(3);
            
            return 3;
        }
        
        else{
            std::cout<<"Invalid input, try again. \n\n";
            continue;
        }
    }
    return 0;
}



