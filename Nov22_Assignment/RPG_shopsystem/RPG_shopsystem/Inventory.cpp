#include "Inventory.h"
#include <vector>
#include <iostream>

void Inventory::initialise()
{
	//Inventory.capacity; 
	this->numbofItems = 0; 
	this->itemarray = new Item * [this->capacity(n)];
	for (size_t i = 0; i < this->capacity(n); i++)
	{
		this->itemarray = nullptr; 
	}

}	
void Inventory::clearinventory()
{


}
void Inventory::deletememory()
{
	for (size_t i = 0; i < this->numbofItems; i++)
	{
		delete this->itemarray[i];
	}

	delete[] this->itemarray;
}
void Inventory::capacity(int n)
{
	std::vector<int>invt(n); 

}

void Inventory::showinvetory()
{
	std::cout << iName << 
}

Inventory::Inventory()
{

}
Inventory::~Inventory()
{


}