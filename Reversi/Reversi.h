#ifndef REVERSI_H
#define REVERSI_H

#include "Player.h"

class Reversi
{
public:
	Reversi();	//Default Ctor
	~Reversi();	//Default Dtor
	//Copy Ctor
	//Op =
	void Play();	//Play function of game

private:
	Player mPlaya;
};

#endif