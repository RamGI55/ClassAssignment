#include<iostream>
#include"player.h"
#include "weapon.h"

int main()
{
	weapon* sword = new weapon("Ä® "); 

	player* player = new player("ÄÚÇÏ·ç", sword); 

	player->attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr; 



}