#pragma once
#include"Die.h"
#include "Game.h"
class DiceGame :public Game
{
private:
	int betAmount;
	Die dices[2];            //2 dices

public:
	DiceGame();
	virtual ~DiceGame();
	void bet(int amount);
	void roll();
	int result();
};

