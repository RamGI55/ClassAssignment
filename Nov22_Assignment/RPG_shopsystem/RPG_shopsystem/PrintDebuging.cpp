#include <iostream>
#include "Item.h"
#include "Store.h"
#include "Inventory.h"
#include <vector> 
#include <string> 

// Debuging purpose only 

using namespace std; 
int main()
{
	//Item* i = new Item(1, "Strange Long Sword", 1, 1, 1, 3000, "Strange form of the Sword, look like koharu doesn't like it.");
	//i->printData();

	//return 0;
	//delete i;
	//i = nullptr;
	//

	// Main master UI // 
	cout << "What do you want to do?, Please enter the number." << endl; 
	cout << " =============================================== " << endl; 
	cout << " 1. Store. " << endl;
	cout << " 2. Inventory." << endl; 
	cout << " 3. Player Status." << endl; 
	cout << " 4. Go to Dungeon. " << endl; 
	cout << endl; 
	int number; 
	cin >> number;
	
	// Main Menu// 
	switch (number)
	{
	case 1:
		{
		cout << "Going to Store...." << endl;
		cout << endl; 
		Store* s = new Store;
		s->masterUIshop();

		delete s;
		break;
		}
	case 2:
		{
			cout << "Looking the bagpack...." << endl;
			cout << endl;
			Inventory* i = new Inventory;
			i->masterUIinven();

			delete i;
			break;
		}
	case 3:
		{
			cout << "Check your status.." << endl;
			cout << endl;
			break;
			
		}
	case 4: 
		{ 
			cout << "Going out to the dungeon..." << endl;
			cout << endl;
			break;
		}

	default:
		{
			cout << "Please enter the right number. " << endl;
			cout << endl;
			break;
		}



	}

	
	
	

	
	
}