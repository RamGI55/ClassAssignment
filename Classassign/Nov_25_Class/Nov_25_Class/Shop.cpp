#include "Shop.h"
#include <iostream>
Shop::Shop()
{
}

Shop::~Shop()
{
}

void Shop::SetItems()
{
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "Leather Amror", "Made with cow leather", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "Steel Amror", "Made with Steel", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "Steel Sword", "Made with Steel", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "Wooden Sword", "For beginners", 5, 100, 1));
}

void Shop::DisplayItems(GameEnums::ItemType type) const
{
	std::cout << "Here is the list of the item we got. : " << (type == GameEnums::ItemType::ITEM_WEAPON ?
		"Weapon" : "Armor") << " ): " << std::endl; 

	for (int i = 0; i < Items.size(); ++i)
	{
		const Item& Item = Items[i]; 
		if (Item.GetType() == type)
		{
			std::cout << item[i] << std::endl;
		}

	}
}

Item* Shop::BuyItem(GameEnums::ItemType type, const int index, int& gold)
{
	Item& item = Items[index];

	if (gold >= item.GetPrice())
	{
		gold -= item.GetPrice(); 
		std::cout << item.GetName() << " has been purchased. " << endl; 
		return&item; 
	}
	else
	{ 
		return nullptr;
	}
}

void Shop::AddItem(const Item& item)
{
	Items.push_back(item);
	 
}
