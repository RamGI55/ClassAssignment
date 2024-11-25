#pragma once
#include "Shop.h"
#include "Player.h"
#include "GameEnums.h"

class MasterGame
{
private:
	Shop* mShop; 
	Player* mPlayer;
	GameEnums::Location mLocation; 

	int mGold; 
	int mSelect; 

public: 
	MasterGame();
	virtual ~MasterGame();

	void SetLocation(GameEnums::Location location);
	void StartGame();
	void SetShopPage();
	void SetInventoryPage();
	void SetSellInventoryPage();

	void DisplayShopItems(GameEnums::ItemType itemkind); 
	void BuyItemFromShop(GameEnums::ItemType itemkind, int num);
	void EquipItemToPlayer(const int num); 
	void DisplayPlayerStatus(); 


};

