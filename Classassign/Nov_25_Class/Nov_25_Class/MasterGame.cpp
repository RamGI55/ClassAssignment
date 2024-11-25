#include "MasterGame.h"
#include <iostream>

MasterGame::MasterGame()
{
	//INITIATORS// 
	mShop = new Shop();
	mPlayer = new Player(); 
	mGold = 1000; 
	mLocation = GameEnums::Location::LOC_SHOP;
}

MasterGame::~MasterGame()
{
	
}

void MasterGame::SetLocation(GameEnums::Location location)
{
	mLocation = location;
}

void MasterGame::StartGame()
{
	bool isStart = true;
	while (isStart)
	{
		switch (mLocation)
		{
		case GameEnums::Location::LOC_SHOP:
			SetShopPage();
			break; 

		case GameEnums::Location::LOC_INVENTORY:
			SetInventoryPage();
			break;

		default:
				break;
			
		}

	}
}

void MasterGame::SetShopPage()
{
	int select; 
	std::cout << " This is the shop " << std::endl; 
	std::cout << " Select the item type you are looking for " << std::endl; 
	std::cin >> select; 

	if (select == 1)
	{
		ItemType;
	}
}

void MasterGame::SetInventoryPage()
{
	std::cout << "See the invenotry " << std::endl; 
	DisplayPlayerStatus();
	mPlayer->showInven();

	std::cout << "Store 1, Equip 2, Sell 3 : "; 
	int choice; 
	std::cin >> choice; 
	if (choice == 1)
	{
		SetLocation(GameEnums::Location::LOC_SHOP); 
	}
	else if (choice == 2)
	{
		std::cout << " Please select the item you'd equip"; 
		int itemNum;
		std::cin >> itemNum; 

		EquipItemToPlayer(itemNum);

	}
	else
	{
		SetLocation(GameEnums::Location::LOC_SELL_INVENTORY);
	}
}

void MasterGame::SetSellInventoryPage()
{
std:: cout << "Please select the item you'd sell" << std::endl; 
int itemNum; 
std::cin >> itemNum; 

SetSellInventoryPage(itemNum);
}

void MasterGame::DisplayShopItems(GameEnums::ItemType itemkind)
{
	mShop->DisplayItems(itemkind); 

}

void MasterGame::BuyItemFromShop(GameEnums::ItemType itemkind, int num)
{
	Item* broughtItem = mShop->BuyItem(itemkind, num - 1, mGold); 
	if (broughtItem != nullptr)
	{
		std::cout << " Purches sucess " << std::endl; 
		mPlayer->AddItemInven(*broughtItem);
		std::cout << "Brought Item : " << broughtItem->GetName() << std::endl;

		mGold -= broughtItem->GetPrice();


	}
	else {
		std::cout << "Cannot purchase the item" << std::endl; 
	}
}

void MasterGame::EquipItemToPlayer(const int num)
{
}

void MasterGame::DisplayPlayerStatus()
{
}
