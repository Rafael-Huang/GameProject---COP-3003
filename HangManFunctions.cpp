#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "HangMan_Functions.h"

    std::string codeword;                 // word that the user need to guess.
    std::string userAnswer;               // user letter of choice will be stored in this variable.
    std::vector<char> incorrectGuesses;   // vector which will store the incorrect guesses from user.
    int missedLetters;                    // missed letters will be stored in this variable
    
    // Function will explain how the Hang Man game works.
    void HangMan::DisplayInstructions() {
        std::cout << "============" << std::endl;
        std::cout << "Welcome to HangMan!" << std::endl;
        std::cout << "============" << std::endl;
        std::cout << "How to play: Guess the word by typing letters before the the stick person is hanged." << std::endl;
    }
    
    // Function does many conditions if the user misses, which means everytime the user misses a letter, the image will change.
    void HangMan::DisplayUserMisses(int) {
        if(missedLetters == 0)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 1)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"  O   | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 2)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"  O   | \n";
            std::cout<<"  |   | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 3)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"  O   | \n";
            std::cout<<" /|   | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 4)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"  O   | \n";
            std::cout<<" /|\\  | \n";
            std::cout<<"      | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 5)
        {
            std::cout<<"  +---+ \n";
            std::cout<<"  |   | \n";
            std::cout<<"  O   | \n";
            std::cout<<" /|\\  | \n";
            std::cout<<" /    | \n";
            std::cout<<"      | \n";
            std::cout<<" ========= \n";
        }
        else if(missedLetters == 6)
        {
            std::cout<<"  +---+ \n";
        }
        
    }


    // Function will display user status, like what words did he used and were incorrect.
    void HangMan::DisplayStatus(std::vector<char> incorrect, std::string userAnswer)
    {
        std::cout<<"Incorrect Guesses: \n";
        
        for(int k = 0; k<incorrect.size(); k++)
        {
            std::cout<<incorrect[k] << " ";
        }
        
        std::cout<<"\nCode Word: \n";
        
        for(int k = 0; k<userAnswer.length(); k++)
        {
            std::cout << userAnswer[k] << " ";
        }
    }

    // Function will display final message if the user get the correct or incorrect.
    void HangMan::EndGame(std::string userAnswer, std::string codeword)
    {
        if(userAnswer == codeword)
        {
            std::cout<<"CONGRAULATIONS!!! You saved the person that was being hanged!!! \n\n";
        }

        else{
            std::cout<<"\n\n OH NO!!! The person is hanged!";
        }
};
