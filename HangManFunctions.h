#ifndef HangMan_Functions_h
#define HangMan_Functions_h

#include <iostream>
#include <vector>

//Here are all the functions declared.
void DisplayUserMisses(int missedLetters);

void DisplayStatus(std::vector<char> incorrect, std::string userAnswer);

void EndGame(std::string userAnswer, std::string codeword);

#endif // HangMan_Functions_h
