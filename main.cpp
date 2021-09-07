//made by xela with love <3
//seed is made up by 20 random characters
#include <iostream>
#include <ctime>
#include <windows.h>
#include "header.h"
using namespace std;

int main()
{
	//we define some variables

	int randomCharacters = 0,confirmation = 0;

	cout << "Welcome to the seed / random number generator!" << endl;

	Sleep(3000);

	cout << "made by Xela with love <3" << endl;

	Sleep(3000);

	//we check if teh user is sure of how long the number should be
	do
	{
		cout << "how long should the random number be?: ";
		cin >> randomCharacters;

		//we check if he confirms his choice

		cout << "confirm you number is gonna be " << randomCharacters << " long? (0 for no 1 for yes): ";
		cin >> confirmation;

		if (confirmation == 0)
		{
			cout << "ok lets change it" << endl;
		}
	} while (confirmation == 0);


	//we pick up the time from the clock of teh computer to truly randomize the result of the function

	srand(time(0));

	//we output before the loop

	cout << "your seed will be: ";

	for (int y = 0; y < randomCharacters; y++)
	{
		cout << 1 + (rand() %9);
	}
	cout << " here is your random nuber / seed happy playing!" << endl;

	//wait 10 seconds then shut down the program

	cout << "closing in 10 seconds!";

	Sleep(10000);
}