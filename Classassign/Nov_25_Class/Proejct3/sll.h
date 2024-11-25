#pragma once
#include <iostream> 

struct node
{
	int value; 
	node* pNext; // pointer to point the node 

	node (int n):value(n), pNext(nullptr) {}

};

class sll
{
private:
	node* pHead; // pointer to point the header (the first node)

public: 
	sll();
	~sll(); 

	void Insert(int num); 

	void Delete(int num);
	
	void Print(); 


};

