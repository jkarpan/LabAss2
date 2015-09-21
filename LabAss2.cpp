#include <iostream> //Basic I/O
#include <cstdlib> 
#include <ctime> //Implements time functionality

using namespace std;

//Define methods
void playGame();
int die();
int roll(int a, int b);

int main( ) {
	char ans;
	bool done = false;
	while ( ! done ) {
		playGame();   // YOU MUST WRITE THIS FUNCTION
		cout << "Play again (y/n) ? ";
		cin >> ans;
		if ( ans == 'n' || ans == 'N') done = true;
			else done = false;
		}
		return 0;
}

void playGame()//implements main functionality of game.
{
	cout << "\n";
	srand(time(NULL));
	int roll1 = die();
	int roll2 = die();
	int sum = roll(roll1, roll2);
	cout << "Player rolled " << roll1 << " + " << roll2 << " = " << sum << "\n";
	if (sum == 7 || sum == 11) //Player rolls a 7 or 11 - They win the game
	{
		cout << "You won! Rolled a " << sum << ". ";
		return;
	}
	else if (sum == 2 || sum == 3 || sum == 12)//Player rolls one of the craps - they lose the game
	{
		cout << "You lose! Rolled a " << sum << ". ";
		return;
	}
	else //otherwise we set a point and attempt to win the game.
	{
		cout << "\nRolled a " << sum << ", you must now roll until you get " << sum << " again, or lose if you roll 7!\n";
		int point = sum;
		bool win = false;
		while (!win)
		{
			int roll1 = die();
			int roll2 = die();
			int sum = roll(roll1, roll2);
			cout << "Player rolled " << roll1 << " + " << roll2 << " = " << sum << "\n";
			if (sum == 7)
			{
				cout << "You lose! ";
				return;
			}
			else if (sum == point)
			{
				cout << "You won! ";
				win = true;
			}
		}
	}
}

int die()//generates a value for the die.
{
	
	int value = rand() % 6 + 1;
	return value;
}

int roll(int a, int b)//returns the sum of two rolls.
{
	return a + b;
}
