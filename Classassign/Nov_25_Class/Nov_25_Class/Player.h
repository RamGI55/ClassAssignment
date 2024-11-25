#pragma once
#include "Unit.h"
#include "Inventory.h"
class Player
{
private: 
	Inventory mInventory; 

public: 
	Player();
	virtual ~Player(); 

	void InitPlayer();
	void showStatus(); 


	// Refer the function from inventory below  
	void SellItem(const int itemNum, int& gold); 
	void EquipItem(const int num);
	/*void AddItemtoInven(const Item);*/
	void showInven()const; 
	void AddItemInven(const int item);
	void DeleteItemInven(const int item); 
	// 



};

