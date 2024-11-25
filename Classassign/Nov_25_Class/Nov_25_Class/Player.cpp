#include "Player.h"
#include <iostream>

Player::Player()
{
}

Player::~Player()
{
}

void Player::InitPlayer()
{
}

void Player::showStatus()
{
	Item equippedWeapon = mInventory.GetEquippedWeapon();
	Item equippedArmor = mInventory.GetEquippedArmor();

	int addAtk = equippedWeapon.GetAttribute();
	int addDef = equippedArmor.GetAttribute();

	std::cout << "================ Player Stas ============ " << std::endl; 

}

void Player::SellItem(const int itemNum, int& gold)
{
	mInventory.SellItem(itemNum, gold);
}


void Player::EquipItem(const int num)
{
	mInventory.EquipItem(num);
}

void Player::showInven() const
{
	mInventory.ShowInvenotry();
}

void Player::AddItemInven(const int item)
{
	mInventory.AddItemInven(item); 
}

void Player::DeleteItemInven(const int item)
{
}
