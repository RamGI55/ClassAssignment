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
	
	// Getters 
	int getId() const;
	string getName() const;
	int getType() const;
	int getQuan() const;
	int getParts() const;
	int getPrice() const;
	string getDescription() const;
	int printData();

	//Setters 
	void setCount(int count);

	void addOne();
	void removeOne(); 
	
	friend ostream& operator<<(ostream& os, const Item& item);
 
};

#endif
