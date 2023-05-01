#ifndef HangMan_Functions_h
#define HangMan_Functions_h

#include <iostream>
#include <vector>

class HangMan {
public:
    std::string codeword;
    std::string userAnswer;
    std::vector<char> incorrectGuesses;
    int missedLetters;
    
    //Below are all the functions declared.
    
    // Function will explain how the Hang Man game works.
    void DisplayInstructions();
    
    // Function does many conditions if the user misses, which means everytime the user misses a letter, the image will change.
    void DisplayUserMisses(int);
    
    // Function will display user status, like what words did he used and were incorrect.
    void DisplayStatus(std::vector<char>, std::string);
    
    // Function will display final message if the user get the correct or incorrect.
    void EndGame(std::string, std::string);
    
};
#endif // HangMan_Functions_h

