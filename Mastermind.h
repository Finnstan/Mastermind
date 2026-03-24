#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include "Sequence.h"
#include "Solver.h"

using namespace std;
class Mastermind
{
public:
	void gameChoice();					//used to see if user wants to use solver or game
	void gamePlay();					//basic gameplay process
	void printColors();					//prints the valid colors
	bool choiceValidation(char c);		//checks to see if the choice in gameChoice is valid
	bool validateColor(char c);			//checks to see if the char for a color is valid
	void makeSequence();				//makes a sequence given the colors in user input
	void printSecretCode();				//prints the sequence that is the correct guess
	void getPlayerGuess();				//gets the guessed sequence from user
	bool compareSequences();			//compares
private:
	Sequence code;
	Sequence guess;
};

#endif