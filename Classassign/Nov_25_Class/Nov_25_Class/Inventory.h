#pragma once
#include<vector>
#include"Item.h"
class Inventory
{

private: 
	std::vector<Item>Items; 
	Item equipArmor; 
	Item equipWeapon;
public: 
	Inventory();
	virtual ~Inventory();

	void ShowInvenotry()const;
	void AddItem(const Item& item);
	Item SellItem(const int index, int& gold);
	void EquipItem(const int index);

	Item GetEquippedArmor()const;
	void SetEquippedArmor(const Item& armor); 
	Item GetEquippedWeapon()const;
	void SetEquippedWeapon(const Item& weapon);


};

