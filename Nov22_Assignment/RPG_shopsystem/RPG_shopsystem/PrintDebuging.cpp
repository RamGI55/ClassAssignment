#include <iostream>
#include "Item.h"
// Debuging purpose only 

using namespace std; 
int main()
{

	Item* i = new Item( 1, "Strange Long Sword", 1, 1, 1, 2500);
	i->print();

	delete i;
	return 0;
	


}