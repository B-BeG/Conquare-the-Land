#include <iostream>
#include <ctime>
#include <cstdlib>
#include "deck.h"
#include "player.h"
#include "the_land.h"
using namespace std;

the_land::the_land()
{
// Zerowanie pola bitwy
	for(int i = 0; i < 3; i++)
		for(int j = 0 ; j < 6; j++)
			rows1[i][j] = rows2[i][j] = 0;
}

character::character()
{
	name = "";
}

player::player()
{
	points = 0;
}

deck::deck()
{
	// Losowanie kart
	int x[13], i = 0;
	
	srand(time(NULL));
	
	for(int j = 0; j < 13; j++)
		x[j] = 0;
	
	while(i < 16)
	{
		cards[i] = rand() % 13 + 2;
		if(x[cards[i] - 2] <= 4)
		{
			x[cards[i] - 2]++;
			i++;
		}
	}
}

deck deck::new_deck()
{
	deck army;
	return army;
}
