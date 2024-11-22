#ifndef ITEM_H_
#define ITEM_H_ 
#include "header.h"
class Item
{	 
private: 
	int id; 
	string name;
	int type; 
	bool stackable; 
	int stacksize;
	int quantity;
	int maxquantity;
	int parts; 
	int itemPrice; 
	string description; 


public: 
	Item(int id, string name, int type, int quantity, int parts, int itemPrice, string description);
	~Item();

	int getId();
	string getName();
	int getType();
	int getQuan();
	int getParts();
	int getPrice();
	string getDescription();
	int printData();

	
	
 
};

#endif
