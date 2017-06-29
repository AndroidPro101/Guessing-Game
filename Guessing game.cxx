#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
	int answer = (rand() % 100) + 1;

	bool guessed = false;
	
	int tries = 9;
	int go = 1;
	
	while (!guessed && tries > -1 && go == 1)
	{
	
		int guess;
		cout<< "Please input a number from 0 to 100: ";
		cin>> guess;
		
		if(guess == answer)
		{
			cout<< "you got it right! \n";
			guessed = true;
		}
	else if(guess > answer)
		{
			cout<< "You guessed too high! \n";
			cout<< "You have this many tries left: " << tries << '\n';
		}
	else if(guess < answer)
		{
			cout<< "You guessed too low! \n";
			cout<< "You have this many tries left: " << tries << '\n';
		}
		tries --;
		if(tries == -1 || guess == answer)
		{
		cout<< "Would you like to try another number? Press 1 \n";
		cout<< "If you want to stop, press 2 \n";
		cin>> go;
		tries = 9;
		guessed = false;
		srand((int)time(0));
		answer = (rand() % 100) + 1;
		}
	}
		
	
	
	return 0;
}

