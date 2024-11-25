#include "sll.h"

sll::sll():pHead(nullptr) // headless node  

{

}

sll::~sll()
{
	//pop and dump the node
	while (pHead != nullptr)
	{
		// current node -> temp node 
		node* temp = pHead; 
		// set up the next node -> current node 
		pHead = pHead->pNext; 

		// dump the temp. 
		delete temp; 
	}
}

void sll::Insert(int num)
{
	//create the node 
	node* newNode = new node(num); 

	//Headless node 
	if (pHead == nullptr)
	{
		// Set up the new head node as the first node 
		pHead = newNode; 
		return; 

	}
	else {
		node* temp = pHead; 
		//Until the pointer isn't nullptr 
		while (temp -> pNext != nullptr)
		{
			temp = temp->pNext; //connected to the next header 

		}

		temp->pNext = newNode; 
	}
}

void sll::Delete(int num)
{
	// current node pointer 
	if (node* temp = pHead) {

		pHead = pHead->pNext; 
		delete temp; 

	}
	else if (!pHead->pNext)
	{
		pHead = temp;

		delete temp; 
	}
	
	
	// next node -> next of next onode 

	// if next node = null ; end the loopwe 

	//middle 
	

	// connect privious noded and move next node 

	// didn't find -> end 


}

void sll::Print()
{
	node* temp = pHead; 
	std::cout << " ======= PRINT  ======= " << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << ""; 
		temp = temp->pNext; 
		
	}
	std::cout << std::endl; 

}
