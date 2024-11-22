#pragma once
#include "item.h"

using namespace std;
class Inventory
{
private: 

public: 
	Inventory();
	~Inventory();

	int maxInven();
	int currentInven();
	Item* Item(); 
	int printInven();




};



