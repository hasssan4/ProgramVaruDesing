#include "GameHandler.h"


GameHandler::GameHandler(int capacity)
{
	this->volume = 0;
	this->backgroundColor = "?";
	this->nrOfGames = 0;
	this->capacity = capacity;
	this->games = new Game *[this->capacity];
	for (int i = 0; i < this->capacity; i++)
	{
		this->games[i] = nullptr;
	}
}


GameHandler::~GameHandler()
{
	for (int i = 0; i < this->nrOfGames; i++)
	{
		delete games[i];
	}
	delete[]games;
}
