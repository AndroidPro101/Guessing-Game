/************************************

  *********************************
  ****** Tic Tac Toe Project ******
  *********************************
		
 Your challange is to make a c++ that
 runs the 2 player game, Tic Tac Toe.
 
 A outline of the code has been made
 for you, by me, Nathan! You will
 be writing the main() function as well
 as the checkwin() function.
 
 There is no need to change the code
 that is provided. Simply write the
 code where it says "CODE GOES HERE".
 
 Feel free to add your own flair and
 and ask questions if you have them!
 * 
************************************/

#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();
int choice;

int main()
{
	int player = 1,i,choice;

	char mark;
	do
	{
		board();
		player=(player%2)?1:2;

		//CODE GOES HERE
		cout<< "Player 1 choose your number: ";
		cin>> choice;
		//Store their move as "choice"
		cout<< "Player 2 choose your number: ";

		mark=(player == 1) ? 'X' : 'O'; // This chooses the correct symbol
										// based on the player number

		//  CODE GOES HERE
		//  Set the value of the square to "mark"
		//  This will mark the square they chose
		//  What if the square is occupied?
		//  What if they entered a number that is not 1-9? Or a word?
		
		i = checkwin(); // This calls the function that you will have to write
						// then assigns what the function returns to variable i

		++player;		// This increments to the next player
	}
	
	// This will check if the game is over and restart the turns if it isn't
	
	
	while(i==-1); // Game in progress
	board();
	if(i==1) // Game is won
	{
		cout<< "YOU HAVE WON THE 2017 TTT CHAMPIONSHIPS";
	}
	else if (i==0) //Game ends in draw
	{
		cout<< "THE 2017 TTT CHAMPIONSHIPS ARE A TIE!!!"; 
	}

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS

**********************************************/

int checkwin()
{
	// CODE GOES HERE
	// 	"return 1" IF GAME IS WON
	//  "return -1" FOR GAME IS IN PROGRESS
	//	(this will loop the code back to the start)
	//  "return 0" FOR DRAW
	//	(all squares filled with no winner)
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
     DO NOT MODIFY
********************************************************************/


void board()
{
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

/*******************************************************************
				END OF PROJECT
********************************************************************/

