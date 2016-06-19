/*************************************************************************
* Author:					Daniel Lee
* Date Created:				6/15/16
* Last Modification Date:	6/16/16
* Lab Number:				Summer Program
* Filename:					ReversiGame.cpp
*
* Overview: This program will play Reversi. and etc to be written here

* and display the game options
* and the game itself. The player will be offered to play a round and then
* dealt two cards to start. The player starts with $1000 and bets at the
* start of every round. If the player wins the round, they are paid back
* their wager and another amount equaling their wager, if they lose, the
* house keeps their bet. The player's goal is the beat the dealer who
* represents the house. There are multiple conditions in winning for the
* player: 1) The player achieves 21, or Blackjack, and the dealer cannot
* match the hand value. 2) Dealer busts, goes over 21. 3) Player has a
* higher hand value than the dealer when neither has busted. The player is
* able to enjoy playing the game until they wish to stop or their bankroll
* has hit 0 or the player has won too much from the house.
*
* Input: The players' choices.
*
* Output: The program will display the game of Reversi as it is played.
* Ex:	
*************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC

#include <iostream>
#include <crtdbg.h>
#include "Reversi.h"

using std::cout;
using std::endl;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Reversi game;

	game.Play();

	return 0;
}