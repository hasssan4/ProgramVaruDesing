#include "Die.h"
#include<ctime>
#include <stdlib.h>

Die::Die()
{
	//srand(unsigned(time(0)));    // ska finnas i mainWindow.cpp kanske istället
	this->face = -1;
	this->nrOfFaces = 6;
}

int Die::getFace()const
{
	return this->face;
}

int Die::rollDie()
{
	this->face = rand() % 6 + 1;
	return this->face;
}
Die::~Die()
{
}
