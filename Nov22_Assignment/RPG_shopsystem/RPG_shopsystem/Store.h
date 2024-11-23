#pragma once
#include "Item.h"
#include "header.h"
class Store
{
private:

	vector<Item>items;
	
	void exchangeMech();

public: 
	Store();
	~Store();
	
	bool pullItem();
	bool pushItem(); 

	int masterUIshop();
	void itemListshop();

};

