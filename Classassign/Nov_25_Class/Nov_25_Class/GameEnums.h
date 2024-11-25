#pragma once
class GameEnums
{
public: 

	enum class ItemType
	{
		ITEM_EMPTY,
		ITEM_ARMOR,
		ITEM_WEAPON,
		ITEM_RING,
		ITEM_POTION,
		ITEM_SOLDOUT,

	};

	enum class Location
	{
		LOC_SHOP = 1,
		LOC_SELL_INVENTORY, 
		LOC_INVENTORY,
		LOC_STATUS,


	};

};

