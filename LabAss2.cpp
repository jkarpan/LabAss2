#include <iostream> //Basic I/O
#include <cstdlib> 
#include <ctime> //Implements time functionality

int main( ) {
	char ans;
	bool done = false;
	
	while ( ! done ) {
		playGame();   // YOU MUST WRITE THIS FUNCTION
		cout << " Play again (y/n) ? ";
		cin >> ans;
		if ( ans == 'y' || ans == 'Y') done = true;
			else done = false;
		}
		return 0;
}

int playGame()
{

}

int die()
{
	int value = 0;
	value = rand() % 6 + 1;
	return value;
}

int roll()
{

}
