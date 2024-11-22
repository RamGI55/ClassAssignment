#ifndef ITEM_H_
#define ITEM_H_ 
#include "header.h"
class Item
{	 
private: 
	int id; 
	string name;
	string type; 
	bool stackable; 
	int stacksize;
	int quantity;
	int maxquantity;
	int parts; 
	int itemPrice; 
	string discription; 


public: 
	int getID(); 
	const char* getName();
	int getType();
	int getquantity();
	int getmaxquantity();
	int getparts();
	int getitemPrice();
	string getDiscription();
	int print();
	 
	Item(int id, const char* Name, int type,
		int quantity, int parts, int itemPrice);

	virtual~Item(); 
 
};

#endif
