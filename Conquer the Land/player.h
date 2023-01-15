#include <iostream>
using namespace std;
// Klasa okreœlaj¹ca obiekt bêd¹cy graczem

class character
{
	public:
	string name;
	
	character();
};

class player :public character
{
	public:
		int hand[5];
		int points;
		
		player();
};
