#pragma once
#include "Item.h"

using namespace std;
class Inventory
{
private: 
	Item* item();
	vector<Item>inven;

public: 
	Inventory();
	~Inventory();

	int maxInven();
	int currentInven();
	void listInven();
	
	int masterUIinven();




};



