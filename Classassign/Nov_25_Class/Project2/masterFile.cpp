#include<iostream>
#include"player.h"
#include "weapon.h"

int main()
{
	weapon* sword = new weapon("Į "); 

	player* player = new player("���Ϸ�", sword); 

	player->attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr; 



}