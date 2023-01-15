// Conquer the land 1.1
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "the_land.h"
#include "player.h"
#include "deck.h"
#include "MMSystem.h"
using namespace std;

void choose_name(player * p1, player * p2)
{
	system("cls");
	cout << "Max 10 characters!!!\n";
	do
	{
		cout << "Player 1 name: ";
		cin >> p1 -> name;
	} while((p1 -> name).length() > 9);
	
	do
	{
		cout << "\n\nPlayer 2 name: ";
		cin >> p2 -> name;
	} while((p2 -> name).length() > 9);
	
	return;
}

// Chyba jasne
void rules()
{
	system("cls");
	
	cout << "Conqer the land is a counting game played with one deck of fifty-two cards." << endl;
	cout << "Players each create three armies trying to beat their rival army's value." << endl << endl;
	cout << "Each player is dealt a hand of five cards." << endl << "Next, three cards from the deck are placed ";
	cout << "faceup in front of each side. These are soldiers in your three armies." << endl << "Each army fights ";
	cout << "the one that's facing it. That's how the game begins. Players then take turns playing cards" << endl;
	cout << "by putting them face-down behind one of their armies. An army's strength is the total value" << endl;
	cout << "of the cards in a row. The more cards in a row the more powerful the army becomes." << endl;
	cout << "You can't tell the value of the facedown cards, of course so you have to guess your enemy's total power." << endl << endl;
	cout << "Once an army reaches three or more cards they're all flipped over except the one farthest back." << endl;
	cout << "So you can add more cards to power up an army but you end up giving your enemy hints in the process." << endl;
	cout << "Once you use all your cards to create three armies it's time for battle! All cards are flipped over." << endl;
	cout << "On all three rows, the highest point total wins. The side that wins at least two showdowns wins the battle." << endl << endl;
	cout << "Each card scores its numerical value except aces. In a duel, they count as one but they can also cancel" << endl;
	cout << "out an opposing army's strongest face card. Use your aces right and you can totally turn the game around." << endl;
	cout << endl << endl << "\t\t That's all. Press any button to go back to the menu :)";
	
	getch();
	
	return;
}
// Wyœwietla menu
void menu(bool * w_bot, player * p1, player * p2)
{
	bool x = true;
	
	while(x)
	{
		// 9. Wypisywanie tytu³u
		cout << "\t\t\t\t";
		for(int i = 0; i < 57; i++)
			cout << (char)207;
		cout << endl << "\t\t\t\t  ";
		
		for(int q = 0; q < 5; q++)
		{
			for(int i = 0; i < 7; i++)
			{
				switch(q)
				{
					case 0:
						if(i == 2 or i == 4)
							cout << (char)178 << "   " << (char)178;
						
						else
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						break;
					case 1:
						if(i == 0 or i == 5)
							cout << (char)178 << "    ";
					
						else if(i == 2)
							cout << (char)178 << (char)178 << "  " << (char)178;
						
						else
							cout << (char)178 << "   " << (char)178;
						break;
					case 2:
						if(i == 0)
							cout << (char)178 << "    ";
						else if(i == 2)
							cout << (char)178 << " " << (char)178 << " " << (char)178;
						else if(i == 5 or i == 6)
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						else
							cout << (char)178 << "   " << (char)178;
						break;
					case 3:
						if(i == 0 or i == 5)
							cout << (char)178 << "    ";
						else if(i == 2 or i == 3)
							cout << (char)178 << "  " << (char)178 << (char)178;
						else if(i == 6)
							cout << (char)178 << "  " << (char)178;
						else
							cout << (char)178 << "   " << (char)178;
						break;
					case 4:
						if(i == 2 or i == 6)
							cout << (char)178 << "   " << (char)178;
						else
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						break;
				}
				cout << "   ";
			}
			
			cout << endl << "\t\t\t\t  ";
		}
		
		cout << "\t\t\t       " << (char)178 << endl << endl << "\t\t\t\t      ";
		
		for(int q = 0; q < 5; q++)
		{
			for(int i = 0; i < 8; i++)
			{
				if(i == 3)
				{
					cout << "    ";
					continue;
				}
					
				switch(q)
				{
					case 0:
						if(i == 1 or i == 6)
							cout << (char)178 << "   " << (char)178;
						else if(i == 4)
							cout << (char)178 << "    ";
						else if(i == 7)
							for(int j = 0; j < 4; j++)
								cout << (char)178;
						else
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						break;
					case 1:
						if(i == 0)
							cout << "  " << (char)178 << "  ";
						else if(i == 2 or i == 4)
							cout << (char)178 << "    ";
						else if(i == 6)
							cout << (char)178 << (char)178 << "  " << (char)178;
						else
							cout << (char)178 << "   " << (char)178;
						break;
					case 2:
						if(i == 0)
							cout << "  " << (char)178 << "  ";
						else if(i == 4)
							cout << (char)178 << "    ";
						else if(i == 6)
							cout << (char)178 << " " << (char)178 << " " << (char)178;
						else if(i == 7)
							cout << (char)178 << "   " << (char)178;
						else
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						break;
					case 3:
						if(i == 0)
							cout << "  " << (char)178 << "  ";
						else if(i == 2 or i == 4)
							cout << (char)178 << "    ";
						else if(i == 6)
							cout << (char)178 << "  " << (char)178 << (char)178;
						else
							cout << (char)178 << "   " << (char)178;
						break;
					case 4:
						if(i == 0)
							cout << "  " << (char)178 << "  ";
						else if(i == 2 or i == 4)
							for(int j = 0; j < 5; j++)
								cout << (char)178;
						else if(i == 7)
							for(int j = 0; j < 4; j++)
								cout << (char)178;
						else
							cout << (char)178 << "   " << (char)178;
						break;
				}
				
				cout << " ";
			}
			
			if(q < 4)
				cout << endl << "\t\t\t\t      ";
		}
		
		cout << endl << "\t\t\t\t";
		for(int i = 0; i < 57; i++)
			cout << (char)207;
		// 9. Dot¹d
		cout << "\n\n\t\t\t\t\t\t\t1. Play!\n\t\t\t\t\t\t\t2. Play against computer!\n\t\t\t\t\t\t\t3. Rules\n\t\t\t\t\t\t\t4. Choose name\n\t\t\t\t\t\t\t5. Quit";
		
		switch(getch())
		{
			case '1':
				x = false;
				break;
			case '2':
				x = false;
				*w_bot = true;
				break;
			case '3':
				rules();
				break;
			case '4':
				choose_name(p1, p2);
				break;
			case '5':
				system("cls");
				cout << "\n\n\n\n\t\t\t\t\t\tBye bye :)";
				getch();
				exit(0);
		}
		
		system("cls");
	}
	
	return;
}
// Wyœwietla pole bitwy oraz rêkê gracza
void turns(the_land battlefield, player Player, int index, player player1, player player2)
{
	system("cls");
	
	cout << "\n\n\n\n\t\t\t\t\t\t Player " << index << " turn!\n\t\t\t\t\t\tPress any button.";
	getch();
	
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t       Player " << index << " turn" << endl;
	cout << "\t\t\t\t\t\t  " << player1.points << " : " << player2.points << endl << endl;
	cout << "\t\t\t\t" << player1.name;
	
	for(int i = 0; i < 43 - (player1.name).length() - (player2.name).length(); i++)
		cout << " ";
	cout << player2.name << endl;
	
	cout << "\t\t\t\t" << (char)201;
	for(int i = 0; i < 41; i++)
		cout << (char)205;
	cout << (char)187 << endl;
	// 7. Wyœwietlanie armii
	for(int i = 0; i < 3; i++)
	{
		cout << "\t\t\t\t" << (char)186 << " ";
		for(int j = 5; j >= 0; j--)
		{
			if(battlefield.rows1[i][j] == 0)
				cout << "   ";
			else
			{
				if(j != 0 and battlefield.rows1[i][j + 1] == 0 or j == 5)
					cout << " " << (char)254 << " ";
				else
				{
					switch(battlefield.rows1[i][j])
					{
						case 10:
							cout << battlefield.rows1[i][j] << " ";
							break;
						case 11:
							cout << " J ";
							break;
						case 12:
							cout << " Q ";
							break;
						case 13:
							cout << " K ";
							break;
						case 14:
							cout << " A ";
							break;
						default:
							cout << " " << battlefield.rows1[i][j] << " ";
					}
				}
			}
		}
		
		cout << " |  ";
		
		for(int j = 0; j < 6; j++)
		{
			if(battlefield.rows2[i][j] == 0)
				cout << "   ";
			else
			{
				if(j != 0 and battlefield.rows2[i][j + 1] == 0 or j == 5)
					cout << " " << (char)254 << " ";
				else
				{
					switch(battlefield.rows2[i][j])
					{
						case 10:
							cout << battlefield.rows2[i][j] << " ";
							break;
						case 11:
							cout << " J ";
							break;
						case 12:
							cout << " Q ";
							break;
						case 13:
							cout << " K ";
							break;
						case 14:
							cout << " A ";
							break;
						default:
							cout << " " << battlefield.rows2[i][j] << " ";
					}
				}	
			}
		}
		
		cout << (char)186 << endl;
	}
	// 7. Dot¹d
	cout << "\t\t\t\t" << (char)200;
	for(int i = 0; i < 41; i++)
		cout << (char)205;
	cout << (char)188 << endl << "\t\t\t\t\t  ";
	
	cout << "\t Your hand" << endl << "\t\t\t\t\t     " << (char)201;
	for(int i = 0; i < 15; i++)
		cout << (char)205;
	cout << (char)187 << endl << "\t\t\t\t\t     " << (char)186;
	// 10. Wyœwietlanie rêki gracza
	for(int i = 0; i < 5; i++)
	{
		switch(Player.hand[i])
		{
			case 0:
				cout << "   ";
				break;
			case 10:
				cout << Player.hand[i] << " ";
				break;
			case 11:
				cout << " J ";
				break;
			case 12:
				cout << " Q ";
				break;
			case 13:
				cout << " K ";
				break;
			case 14:
				cout << " A ";
				break;
			default:
				cout << " " << Player.hand[i] << " ";
		}
	}
	// 10. Dot¹d
	cout << (char)186 << endl << "\t\t\t\t\t     " << (char)200;
	for(int i = 0; i < 15; i++)
		cout << (char)205;
	cout << (char)188 << endl;
	
	return;
}
// Liczy wartoœci armii oraz okreœla zwyciêzcê
int winner(the_land battlefield, player player1, player player2)
{
	bool ace1[3], ace2[3];
	int general, army1[3], army2[3], max1[3], max2[3],w_front1 = 0, w_front2 = 0;
	
	for(int i = 0; i < 3; i++)
	{
		army1[i] = army2[i] = max1[i] = max2[i] = 0;
		ace1[i] = ace2[i] = false;
	}
	// 5. Zliczanie si³y frontu
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 6; j++)
		{
			if(battlefield.rows1[i][j] == 14)
			{
				army1[i]++;
				army2[i] += battlefield.rows2[i][j];
				ace1[i] = true;
			}
			
			else if(battlefield.rows2[i][j] == 14)
			{
				army1[i] += battlefield.rows1[i][j];
				army2[i]++;
				ace2[i] = true;
			}
			
			else
			{
				army1[i] += battlefield.rows1[i][j];
				army2[i] += battlefield.rows2[i][j];
			}
			
			if(battlefield.rows1[i][j] > max1[i] and battlefield.rows1[i][j] != 14)
				max1[i] = battlefield.rows1[i][j];
			if(battlefield.rows2[i][j] > max2[i] and battlefield.rows2[i][j] != 14)
				max2[i] = battlefield.rows2[i][j];
		}
	// 5. Dot¹d
	// 6. Zasada asów
	for(int i = 0; i < 3; i++)
	{
		if(max1[i] >= 11 and ace2[i])
		{
			army1[i] = army1[i] - max1[i];
			army2[i]--;
		}
		
		if(max2[i] >= 11 and ace1[i])
		{
			army2[i] = army2[i] - max2[i];
			army1[i]--;
		}
	}
	// 6. Dot¹d
	// 4. Liczenie iloœci wygranych frontów
	for(int i = 0 ; i < 3; i++)
	{
		if(army1[i] > army2[i])
			w_front1++;
		if(army1[i] < army2[i])
			w_front2++;
	}
	// 4. Dot¹d
	if(w_front1 >= 2)
		general = 1;

	else if(w_front2 >= 2)
		general = 2;
		
	else
		general = 3;
		
	return general;
}
// Wyœwietla koñcowe pole bitwy oraz zwyciêzcê
int winners_card(int winning_party, the_land battlefield, bool bot)
{
	system("cls");
	
	cout << "\n\n\t\t\t\t" << (char)201;
	for(int i = 0; i < 41; i++)
		cout << (char)205;
	cout << (char)187 << endl;
	// 13. Wyœwietlanie ostatecznego pola bitwy
	for(int i = 0; i < 3; i++)
	{
		cout << "\t\t\t\t" << (char)186 << " ";
		for(int j = 5; j >= 0; j--)
		{
			if(battlefield.rows1[i][j] == 0)
				cout << "   ";
			else
			{
				switch(battlefield.rows1[i][j])
				{
					case 10:
						cout << battlefield.rows1[i][j] << " ";
						break;
					case 11:
						cout << " J ";
						break;
					case 12:
						cout << " Q ";
						break;
					case 13:
						cout << " K ";
						break;
					case 14:
						cout << " A ";
						break;
					default:
						cout << " " << battlefield.rows1[i][j] << " ";
				}
			}
		}
		
		cout << " |  ";
		
		for(int j = 0; j < 6; j++)
		{
			if(battlefield.rows2[i][j] == 0)
				cout << "   ";
			else
			{
				switch(battlefield.rows2[i][j])
				{
					case 10:
						cout << battlefield.rows2[i][j] << " ";
						break;
					case 11:
						cout << " J ";
						break;
					case 12:
						cout << " Q ";
						break;
					case 13:
						cout << " K ";
						break;
					case 14:
						cout << " A ";
						break;
					default:
						cout << " " << battlefield.rows2[i][j] << " ";
				}
			}
		}
		
		cout << (char)186 << endl;
	}
	// 13. Dot¹d
	cout << "\t\t\t\t" << (char)200;
	for(int i = 0; i < 41; i++)
		cout << (char)205;
	cout << (char)188 << endl << endl << "\t\t\t\t\t  ";
	
	if(winning_party == 3)
		cout << "  It's a tie :(";
	else
	{
		if(bot and winning_party == 2)
			cout << "  The computer wins. :(";
		else if(bot and winning_party == 1)
			cout << "  You win!!! :)";
		else
			cout << "  Player " << winning_party << " wins!!! :)";
	}
	
	getch();
	getch();
	
	return winning_party;
}
// Odpowiada za grê z komputerem
void computer(the_land * w_battlefield, player * w_bot)
{
	bool if_ace[3];
	int min = 15, place, tab_c[3], bot_r = 3;
	
	for(int i = 0; i < 3; i++)
	{
		tab_c[i] = 0;
		if_ace[i] = false;
	}
	
	for(int i = 0; i < 5; i++)
		if(w_bot -> hand[i] < min and w_bot -> hand[i] != 0)
		{
			min = w_bot -> hand[i];
			place = i;
		}
		
	w_bot -> hand[place] = 0;
	
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 6; j++)
			if(w_battlefield -> rows1[i][j] == 0)
				tab_c[i]++;
	// Zliczanie iloœci widocznych kart		
	for(int i = 0; i < 3; i++)
	{
		if(tab_c[i] == 5)
			tab_c[i] = 1;
		else
			tab_c[i] = 6 - (tab_c[i] + 1);
	}
	
	if(min > 10)
	{
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < tab_c[i]; j++)
			{
				if(w_battlefield -> rows1[i][j] == 14)
				{
					if_ace[i] = true;
					break;
				}
				
				else if(min == 14 and w_battlefield -> rows1[i][j] > 10)
					bot_r = i;
			}
			
		for(int i = 0; i < 3; i++)
			if(!if_ace[i])
			{
				bot_r = i;
				break;
			}
	}
	
	if(bot_r == 3)
		bot_r = rand() % 3;
	
	for(int i = 0; i < 6; i++)
		if(w_battlefield -> rows2[bot_r][i] == 0)
		{
			w_battlefield -> rows2[bot_r][i] = min;
			break;
		}
	
	return;
}

// Odpowiada za przypo¿¹dkowanie kart, pobranie odowiedzi, zabezpieczenie przed b³êdnymi danymi, usuwanie kart z rêki i ustawianie ich na pozycji
// Jest te¿ miejscem wywo³ania wiêkszoœci innych funkcji
int conquering(the_land battlefield, player player1, player player2, deck army, bool bot)
{
	string c_card, c_row;
	bool turn = true;
	int card, row, index, assembling = 0;
	// 1. przypo¿¹dkowanie kart do r¹k graczy i na stó³
	for(int i = 0; i < 3; i++)
	{
		battlefield.rows1[i][0] = army.cards[i];
		battlefield.rows2[i][0] = army.cards[i + 3];
	}
	
	for(int i = 0; i < 5; i++)
	{
		player1.hand[i] = army.cards[i + 6];
		player2.hand[i] = army.cards[i + 11];
	}
	// 1. Dot¹d
	while(assembling < 10)
	{
		if(turn)
		{
			index = 1;
			turns(battlefield, player1, index, player1, player2);
			turn = false;
		}
		
		else
		{
			if(bot)
			{
				the_land * w_battlefield = &battlefield;
				player * w_bot = &player2;
				computer(w_battlefield, w_bot);
			}
			
			else
			{
				index = 2;
				turns(battlefield, player2, index, player1, player2);
			}
			
			turn = true;
		}
		
		if(bot == false or assembling % 2 == 0)
		{
			cout << endl << "\t\t\t\t    Pick a card and a row ('card' 'row'): ";
			cin >> c_card >> c_row;
			// 8.1. Zabezpieczenie b³êdnych danych
			bool card_not_on_hand = true;
			
			while(card_not_on_hand)
			{
				row = (int)c_row[0] - 48;
				
				while(row < 1 or row > 3)
				{
					cout << endl << "\t\t\t\t\tNo such row, try again!\n\t\t\t\t    Pick a card and a row ('card' 'row'): ";
					cin >> c_card >> c_row;
					row = (int)c_row[0] - 48;
				}
				// 8.1. Dot¹d
				row--;
				
				switch(c_card[0])
				{
					case 'A':
					case 'a':
						card = 14;
						break;
					case 'K':
					case 'k':
						card = 13;
						break;
					case 'Q':
					case 'q':
						card = 12;
						break;
					case 'J':
					case 'j':
						card = 11;
						break;
					default:
						if((int)c_card[0] >= 50 and (int)c_card[0] <= 57)
							card = (int)c_card[0] - 48;
						else
							card = -1;
				}
				
				if(c_card == "10")
					card = 10;
				// 8.2. Zabezpieczenie b³êdnych danych
				if(turn)
				{
					for(int i = 0; i < 5; i++)
					{
						if(card == player2.hand[i])
						{
							card_not_on_hand = false;
							break;
						}
	
						if(i == 4)
						{
							cout << endl << "\t\t\t\t\tNo such card, try again!\n\t\t\t\t    Pick a card and a row ('card' 'row'): ";
							cin >> c_card >> c_row;
						}
					}
				}
				
				else
				{
					for(int i = 0; i < 5; i++)
					{
						if(card == player1.hand[i])
						{
							card_not_on_hand = false;
							break;
						}
	
						if(i == 4)
						{
							cout << endl << "\t\t\t\t\tNo such card, try again!\n\t\t\t\t    Pick a card and a row ('card' 'row'): ";
							cin >> c_card >> c_row;
						}
					}
				}
				// 8.2. Dot¹d
			}
			// 2. Usuwanie wystawionej karty
			for(int i = 0; i < 5; i++)
			{
				if(index == 1)
					if(card == player1.hand[i])
					{
						player1.hand[i] = 0;
						break;
					}
					
				if(index == 2)
					if(card == player2.hand[i])
					{
						player2.hand[i] = 0;
						break;
					}
			}
			// 2. Dot¹d
			// 3. Ustawienie karty na pozycji
			if(index == 1)
			{
				for(int i = 0; i < 6; i++)
					if(battlefield.rows1[row][i] == 0)
					{
						battlefield.rows1[row][i] = card;
						break;
					}
			}
			
			else
			{
				for(int i = 0; i < 6; i++)
					if(battlefield.rows2[row][i] == 0)
					{
						battlefield.rows2[row][i] = card;
						break;
					}
			}
		}
		// 3. Dot¹d
		assembling++;
	}
	
	return winners_card(winner(battlefield, player1, player2), battlefield, bot);
}

int main()
{
	PlaySound("song.wav", NULL, SND_ASYNC | SND_LOOP);
	bool bot = false;
	bool * w_bot = &bot;
	player player1, player2;
	player * p1 = &player1;
	player * p2 = &player2;
	
	menu(w_bot, p1, p2);

	int dominator;
	the_land battlefield;
	deck army;
	bool again = true;
	
	while(again)
	{
		dominator = conquering(battlefield, player1, player2, army, bot);
		// Dodawanie punktów do graczy
		if(dominator == 1)
			player1.points++;
		if(dominator == 2)
			player2.points++;
		// Zapytanie o ponown¹ grê
		system("cls");
		cout << "\n\n\n\t\t\t\t\tDo you want to play again? (y = yes, n = no)";
		char choice;
		
		while(true)
		{
			choice = getch();
			
			if(choice == 'N' or choice == 'n')
			{
				again = false;
				system("cls");
				cout << "\n\n\n\t\t\t\t\tBye bye :)";
				getch();
				break;
			}
			
			if(choice == 'Y' or choice == 'y')
			{
				army = army.new_deck();
				break;
			}
		}
	}
	
	return 0;
}
