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
	node* Node = new node(num);

	node* temp = pHead;
	if (num == 1)
	{
		pHead = temp-> pNext; 

		// dump the temp. 
		delete temp;
		return; 
	}
	for (int i = 0; i < num - 2; i++)
	{
		temp = temp->pNext; 
	}
	node* temp2 = temp->pNext; 

	temp->pNext = temp2->pNext; 

	delete temp2; 



}

void sll::Print()
{
	node* temp = pHead; 
	std::cout << " ======= PRINT  ======= " << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->value << " "; 
		temp = temp->pNext; 
		
	}
	std::cout << std::endl; 

}
