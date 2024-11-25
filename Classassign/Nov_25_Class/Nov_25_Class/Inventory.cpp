#include "Inventory.h"
#include  <iostream>

Inventory::Inventory()
{


}

Inventory::~Inventory()
{
}

void Inventory::ShowInvenotry() const
{

	if (Items.empty())std::cout << "Invenotry is Empty" << std::endl;
	else
	{
		std::cout << " ===================== Inventory ====================" << std::endl;
		for (int i = 0; i < Items.size(); ++i)
		{
			std::cout << i + 1 << " , " << Items[i].GetName() <<
				" -  " << Items[i].GetPrice() << "G \n";
		}
		std::cout << " ====================================================" << std::endl;
	}
}

void Inventory::AddItem(const Item& item)
{
	Items.push_back(item);
}

Item Inventory::SellItem(const int index, int& gold)
{
	if (Items.empty())
	{
		std::cout << " none " << std::endl;
		return Item();
	}
	Item& soldItem = Items.[index - 1];

	int price = soldItem.GetPrice();
	gold += price;

	Items.erase(Items.begin() + (index - 1));

	std::cout << soldItem.GetName() << " has been sold.  Price : "
		<< price << std::endl;

	return soldItem;
}

void Inventory::EquipItem(const int index)
{
	// SELECTG 
	Item& Item = Items[index - 1];
	if (Items.GetType()) == GameEnums::ItemType::ITEM_WEAPON)
	{
		equipWeapon = Items; 
		std::cout << Item.GetName() << " Equipe the Weapon" << std::endl; 
	}


}

Item Inventory::GetEquippedArmor() const
{
	return Item();
}

Item Inventory::GetEquippedWeapon() const
{
	return Item();
}

void SetEquippedArmor(const Item& armor)
{
}

void SetEquippedWeapon(const Item& weapon)
{
}
