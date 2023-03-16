#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include "HangMan_Functions.h"

//Here are all the function definitions.

void HangManDisplay()
{
    std::cout<<"============ \n";
    std::cout<<"Welcome to HnagMan! \n";
    std::cout<<"============ \n";
    std::cout<<"How to play: Guess the word by typing letters before the the sitck person is hanged. \n";
}

void DisplayUserMisses(int missedLetters)
{
    
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
        std::rcout<<"  O   | \n";
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
        std::cout<<"  |   | \n";
        std::cout<<"  O   | \n";
        std::cout<<" /|\\  | \n";
        std::cout<<" / \\  | \n";
        std::cout<<"      | \n";
        std::cout<<" ========= \n";
    }

}

void DisplayStatus(std::vector<char> incorrect, std::string userAnswer)
{
    std::cout<<"Incorrect Guesses: \n";
    
    for(int k = 0; k<incorrect.size(); k++)
    {
        std::cout<<incorrect[k] << " ";
    }
    
    std::cout<<"\nCoder Word: \n";
    
    for(int k = 0; k<userAnswer.length(); k++)
    {
        std::cout << userAnswer[k] << " ";
    }
}

void EndGame(std::string userAnswer, std::string codeword)
{
    if(userAnswer == codeword)
    {
        std::cout<<"CONGRAULATIONS!!! You saved the person that was being hanged!!!";
    }

    else{
        std::cout<<"OH NO!!! The person is hanged!";
        
    }
        

    
}
