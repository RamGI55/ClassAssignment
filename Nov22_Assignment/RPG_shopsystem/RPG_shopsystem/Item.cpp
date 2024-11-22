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
	return 0;
}
string Item::getName()
{
	return name;
}

int Item::getType()
{
	return 0;
}

int Item::getQuan()
{
	return 0;
}

int Item::getParts()
{
	return 0;
}

int Item::getPrice()
{
	return 0;

}
string Item::getDescription()
{
	return description;
}

int Item::printData()
{
	cout << id << name << type << quantity << parts << itemPrice << description << endl;
	return 0;
}
 

// ======== UI ============ // 
