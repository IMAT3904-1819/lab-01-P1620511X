// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h> 
using namespace std;

int irandNum, iplayerChoice, inumberOfGuesses = 4;

int main()
{
	cout << "The program will select a number at random between 1 and 100. You have five tries to guess this number." << endl;
	cout << "" << endl;

	srand((int)time(0));
	irandNum = (rand() % 100) + 1;  // picks a number between 1 and 100. 
	

	cout << irandNum << endl;

	cout << "Please pick a number" << endl; 
	cin >> iplayerChoice; 

		while (inumberOfGuesses != 0)
		{
			
			if (iplayerChoice == irandNum)
			{
				cout << "You have guessed the number correctly." << endl;
				system("pause");
				return 0;
			}
			else
			{
				cout << "You have guessed incorrectly. Try Again you have " << inumberOfGuesses << " attempts remaining." << endl;
				cin >> iplayerChoice;
				inumberOfGuesses--;
			}
		}
}

