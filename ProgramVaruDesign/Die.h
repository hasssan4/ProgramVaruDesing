#pragma once
class Die
{
public:
	Die();
	virtual ~Die();
	int getFace()const;
	int rollDie();

private:
	int face;
	int nrOfFaces;
};

