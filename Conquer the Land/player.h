#include <iostream>
using namespace std;
// Klasa okre�laj�ca obiekt b�d�cy graczem

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
