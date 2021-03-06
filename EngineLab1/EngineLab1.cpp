// EngineLab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int randomNumber = rand() % 100 + 1;
	int guess;
	
	cout << "A random number (1-100) has been generated, you have 5 guesses left to find the correct value.\n\n\n";
	system("pause");
	system("CLS");
	for (int n = 0; n < 8; n++) {
		cout << "Please input your guess below:\n\n";
		cin >> guess;
		system("CLS");
		if (guess == randomNumber) {
			cout << "You have guessed correctly!\n\n";
			system("pause");
			return 0;
		}
		else {
			if (guess < randomNumber) {
				cout << "Your guess was lower than the generated number.\n\n";
			}
			else {
				cout << "Your guess was higher than the generated number.\n\n";
			}
		}
	}
	system("CLS");
	cout << "You did not guess the number in 8 attempts.\n\nThe number was " << randomNumber << "\n\n\n";
	system("pause");
    return 0;
}