#include "Mastermind.h"
#include "Sequence.h"


void Mastermind::printColors() {		//prints the possible colors for players to input
	cout << "The colors are: 1,2,3,4,5,6,7,8,9" << endl;
}

void Mastermind::makeSequence() {			//asks user to input a sequence
	char c;
	
	cout << "Player 1: please input first color" << endl;
	cin >> c;
	code.insertAtStart(c);
	cout << "Player 1: please input second color" << endl;
	cin >> c;
	code.insertAtEnd(c);
	cout << "Player 1: please input third color" << endl;
	cin >> c;
	code.insertAtEnd(c);
	cout << "Player 1: please input fourth color" << endl;
	cin >> c;
	code.insertAtEnd(c);

	code.print();
	system("pause");
}