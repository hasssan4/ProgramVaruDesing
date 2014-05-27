#include "Die.h"
//#include <process.h>
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	//Die d = Die();
	//srand(time(0));
	Die *d1 = nullptr;
	d1 = new Die();
	d1->rollDie();
	cout << d1->getFace() << endl;	

	delete d1;
	system("pause");
	return 0;
}