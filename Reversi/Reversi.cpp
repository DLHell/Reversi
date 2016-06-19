#include "Reversi.h"

/****************************************************************************
Purpose: Default Constructor.

Entry: Nothing.

Exit: A constructor that can be called without any parameters.
*****************************************************************************/
Reversi::Reversi() : mPlaya()//, mDeala(), mDeck()
{	}

/****************************************************************************
Purpose: Dtor.

Entry: Nothing.

Exit: Invoked when an object is destoryed to free up allocated space.
*****************************************************************************/
Reversi::~Reversi()
{	}

void Reversi::Play()
{
	//Create two player objects here?
	Player playa1;
	Player playa2;
	//Since there's only one mPlaya, would there be a conflict when the players make their moves and count?

	//Display board here
	//Would it be wise to create a Board class and have the array there?
	char board[8][8];	//2D array for the board

	/*
	while (Board != Filled &&/|| Player has no more of their pieces on board)
	{
		game is played.

		board is shown.
		player options are shown:
		Player 1: ( , )			Player 2: ( , )
		//Do I have to use setw for above?
	}
	
	*/


	/*
	Make sure that the players cannot choose filled spots.
	Also think about the display function of the board.

	the system call to clear the window is in Discord so think about it
	//May need to be in Player class instead
	int PlayerChoiceX;
	int PlayerChoiceY;

	cout << "Player 1: (";
	cin >> PlayerChoiceX;
	cout << ",";
	cin >> PlayerChoiceY;
	cout << ")";l

	Game conditions go here
	*/
}