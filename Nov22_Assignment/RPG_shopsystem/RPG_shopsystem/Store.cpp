#include "Item.h"
#include "Store.h"
#include <string>
#include <vector>


// ======= CONSTRUCTOR ============== // 
Store::Store()
{
	cout << "Welcome to the Store!" << endl; 
	
}
Store::~Store()
{

}
// ======== FUNCTION ================//
void Store::exchangeMech()
{
	// switching a to dummy 
	// switching a to b 
	
}

bool Store::pullItem()
{
	// Mechanism to an item pull from the inventory or shop
	return 0; 
}

bool Store::pushItem()
{
	// Mechanism to an item push to the inventory or shop 
	return 0;
}


int Store::masterUIshop()
{
	cout << "Please choose the stations. " << endl;
	cout << "1. Buying Station" << endl; 
	cout << "2. Selling Station" << endl; 
	cout << "3. Exit" << endl;

		int number;
		cin >> number;

		switch(number)
		{
		case 1: 
			
			
			itemListshop();
			cout << "Please select the item number to buy :"; 
			cin >> number; 
			if (number > items.size()) // BUG :: How to compare with input number and vector size. 
				{
					cout << "Please Enter the right number";
				}
			else
				{
					cout << "Thanks for buying " << endl;
				}
			return 1; 

			break;
		case 2: 
			
			// Inventory shows up here 
			cout << "This is Selling station" << endl; 
			// Print Inventory Interface 
			// 
			cout << "Please select the stuff you'd like to sell. 'E to exit' " << endl; 
			// Selling UI here 
			cin >> number; 
			// Selling mechanism here 
			break; 

		case 3: 
			
			cout << "Have a great day! " << endl; 
			
			// Out command 
			break; 

		default:
			cout << "Please Enter the vaild number" << endl; 
			// loop again 
			
		}

}

void Store::itemListshop()
{
	// have to list the item to sell	
	vector<Item>items;
	
		items.push_back(Item(1, "Strange Long Sword", 1, 1,
			1, 3000, "Strange form of the Sword, look like koharu doesn't like it."));
		items.push_back(Item(2, "Haniwa Magic Wand", 1, 1,
			1, 2400, "Interesting shape of the Magic Wand, Koharu confiscated it from someone."));
		items.push_back(Item(3, "Electronic Whip", 1, 1,
			1, 2600, "Has electronic effects and gives extra damages."));
		items.push_back(Item(4, "M1911", 1, 1,
			1, 5540, "Normal people's magic wand, it could be useful when you are in a troble in daily life."));
		items.push_back(Item(5, "Potion", 2, 5, 1, 220, "Recover your or your friends health."));

		cout << "Available Items in the Store:" << endl;
		cout << "----------------------------------------" << endl;

		for (const auto& item : items) {
			cout << item << endl; 
		}
	
}

	

