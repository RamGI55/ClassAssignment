#include "Item.h"

 
// =========== Constructor & Deconstructor =========================// 

Item::Item(int id, const char* name, int type, int quantity, int parts, int itemPrice)
	:id(id), name(name), type(type), quantity(quantity), parts(parts), itemPrice(itemPrice)
{

};


// ======== UI ============ // 

const char* Item::getName()
{
	cout << name << endl; 
	
}
 
int Item::getID()
{

	return id; 
	
}

int Item::getType()
{
	cout << type << endl; 
	
}

int Item::getquantity()
{
	return quantity; 
	
}
int Item:: getitemPrice()
{
	return itemPrice; 
	
}

int Item::getparts()
{
	return parts;
	
}


int Item::print()
{
	cout << id << name << type << quantity << parts << itemPrice << endl; 
	return 7;
}
 

// ======== UI ============ // 