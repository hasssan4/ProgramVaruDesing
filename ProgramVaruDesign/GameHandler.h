#pragma once
#include "Game.h"
class GameHandler
{
private:
	Game **games;
	int volume;
	string backgroundColor;
	int nrOfGames;
	int capacity;
public:
	GameHandler(int capacity = 2);
	virtual ~GameHandler();
	bool addGame();
	bool removeGame();
	void playGame();
	bool setVolume(int change);
	bool mute();
	bool setBackgroundColor(string color);
	void modifyGame();
	int getNrOfGames()const;

};

