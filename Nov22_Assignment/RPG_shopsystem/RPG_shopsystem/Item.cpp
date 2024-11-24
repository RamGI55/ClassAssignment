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
int Item::getId() const
{
	return id; 
}
string Item::getName() const
{
	return name;
}

int Item::getType()const
{
	return type;
	
}

int Item::getQuan() const
{
	return quantity;
	 
}

int Item::getParts()const
{
	return parts;
	
}

int Item::getPrice()const
{
	return itemPrice;
	 

}
string Item::getDescription()const
{
	return description;
	 
}


 

// ======== UI ============ // 
void Item::addOne()
{

}
void Item::removeOne()
{

}

ostream& operator<<(ostream& os, const Item& item)
{
	os << "ID: " << item.getId() << "\n"
		<< "Name: " << item.getName() << "\n"
		<< "Price: " << item.getPrice() << " G\n"
		<< "Description: " << item.getDescription() << "\n"
		<< "----------------------------------------";
	return os;
}