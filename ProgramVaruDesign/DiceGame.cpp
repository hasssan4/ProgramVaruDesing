#include "DiceGame.h"
#include <ctime>
#include<iostream>
DiceGame::DiceGame() :Game()
{
	srand(unsigned (time(0)));
	this->betAmount = 0;
}

void DiceGame::bet(int amount)
{
	this->betAmount = amount;
}

void DiceGame::roll()                   //Behöver vi verkligen denna ?
{
	int die1 = dices[1].rollDie();
	int die2 = dices[2].rollDie();
	//for (int i = 0; i < 2; i++)
	//{
	//	this->dices[i].rollDie();
	//}
}

int DiceGame::result()            
{
	Die die1;
	Die die2;
	int value1 = die1.rollDie();
	int value2 = die2.rollDie();
	cout << die1.getFace() << endl;
	cout << die2.getFace() << endl;
	if (value1 == value2)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

DiceGame::~DiceGame()
{
	//delete []dices;
}
