Game Menu Project

This project is a game menu written in C++ that uses ASCII art to display the menu options. The menu includes three different games: Hangman, Tic Tac Toe, and Blackjack. The project includes separate header files and function files for each game, as well as a main function file that displays the menu and allows the player to select a game to play.

Getting Started
To get started with this project, you will need to have a C++ compiler installed on your computer. You can download and install a compiler such as CLion for Windows or Xcode for macOS.

Once you have a compiler installed, you can download the project files from this repository. The project includes the following files:

main.cpp: This file contains the main function for the game menu, which displays the menu options and allows the player to select a game to play.
GameMenuDisplay.h and GameMenuDisplay.cpp: These files contain ASC ART options for each game, and a quit the game option.
HangMan_Functions.h and HangMan_Functions.cpp: These files contain the header and function files for the Hangman game.
TicTacToeFunctions.h and TicTacToeFunctions.cpp: These files contain the header and function files for the Tic Tac Toe game.
BlackJackFunctions.h and BlackJackFunctions.cpp: These files contain the header and function files for the Blackjack game.

Building and Running the Project
To build and run the project, navigate to the directory where the project files are located in a terminal or command prompt. Then, run the following commands:

g++ main.cpp hangman.cpp tictactoe.cpp blackjack.cpp -o game_menu
./game_menu
These commands will compile the project and create an executable file called game_menu. The second command will run the executable, which will display the game menu and allow the player to select a game to play.

Contributing
If you would like to contribute to this project, feel free to fork this repository and submit a pull request with your changes.

License
This project is licensed under the MIT License.
