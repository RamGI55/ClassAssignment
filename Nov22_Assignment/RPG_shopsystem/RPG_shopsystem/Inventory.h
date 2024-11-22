#pragma once
#include "item.h"

class Inventory
{
private: 
	Item* itemarray;
	unsigned int numbofItems;
	

	void initialise();
	void clearinventory();
	void deletememory(); 
	void capacity(int n); 

public: 
	void showinvetory();
	Inventory(); 

	virtual ~Inventory(); 




};

