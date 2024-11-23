#include "Item.h"

 
// =========== Constructor & Deconstructor =========================// 
Item::Item(int id, string name, int type, int quantity, int parts, int itemPrice, string description)
	: id(id), name(name), type(type), quantity(quantity), parts(parts), itemPrice(itemPrice), description(description)
{
	


}
Item::~Item()
{
}


// ======== UI ============ // 
int Item::getId()
{
	return id; 
}
string Item::getName()
{
	return name;
}

int Item::getType()
{
	return type;
	
}

int Item::getQuan()
{
	return quantity;
	 
}

int Item::getParts()
{
	return parts;
	
}

int Item::getPrice()
{
	return itemPrice;
	 

}
string Item::getDescription()
{
	return description;
	 
}

int Item::printData() // deburg 
{
	cout << name << " - " << itemPrice << "G  :" << description << endl;
}
 

// ======== UI ============ // 
void Item::addOne()
{

}
void Item::removeOne()
{

}
