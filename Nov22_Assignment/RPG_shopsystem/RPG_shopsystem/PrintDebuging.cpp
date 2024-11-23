#include <iostream>
#include "Item.h"
#include "Store.h"
// Debuging purpose only 

using namespace std; 
int main()
{
	//Item* i = new Item(1, "Strange Long Sword", 1, 1, 1, 3000, "Strange form of the Sword, look like koharu doesn't like it.");
	//i->printData();

	//return 0;
	//delete i;
	//i = nullptr;

	Store* s = new Store;
	s->masterUIshop();

	delete s;
	

	
	
}