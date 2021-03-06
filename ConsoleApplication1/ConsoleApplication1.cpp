// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h> 
using namespace std;

int irandNum, iplayerChoice, inumberOfGuesses = 4;

int main()
{
	cout << "The program will select a number at random between 1 and 100. You have 5 tries to guess this number." << endl;
	cout << "" << endl;

	srand((int)time(0));
	irandNum = (rand() % 100) + 1;  // picks a number between 1 and 100. 

	cout << "Please pick a number" << endl; 
	cin >> iplayerChoice; 

		while (inumberOfGuesses != 0)
		{
			
			if (iplayerChoice == irandNum)
			{
				cout << "Yes" << endl;
				inumberOfGuesses = 0;
			}
			else if (iplayerChoice > irandNum)
			{
				cout << "Lower. " << "You have " << inumberOfGuesses << " guesses remaining" <<  endl;
				cin >> iplayerChoice;
				inumberOfGuesses--;
			}
			else if (iplayerChoice < irandNum)
			{
				cout << "Higher. " << "You have " << inumberOfGuesses << " guesses remaining" << endl;
				cin >> iplayerChoice;
				inumberOfGuesses--;
			}
		}


		if (iplayerChoice != irandNum)
		{
			cout << "You didn't get it. The number was " << irandNum << "." << endl;
		}

		system("pause");
		return 0;
}

