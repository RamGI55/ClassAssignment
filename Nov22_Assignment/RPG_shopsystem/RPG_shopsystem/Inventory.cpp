#include "Inventory.h"
#include "Item.h"
#include <vector>
#include <iostream>



Inventory::Inventory()
{

}
Inventory::~Inventory()
{

}

int Inventory::maxInven()
{
	vector<Inventory> inv;
	return inv.size();
	
}

int Inventory::currentInven()
{
	vector<Inventory> inv;
	return inv.size();
	
}

void Inventory::listInven()
{
	vector<Item>inven;
		
	// here is the storage of the item the player brought. 
	cout << "inventory test" << endl; 


}

int Inventory::masterUIinven()
{
	cout << "Please choose the items. " << endl; 
	cout << "Press 'E' to exit. " << endl; 

	// print the invenotry list. 
	listInven();

	return 0; 
}