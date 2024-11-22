#include "Item.h"

//=========================== CLASS ======================== // 



class Player
{
private: 
	bool rhHold;
	bool lhHold;
	bool topHold;
	bool bottomHold;
	bool shoeHold;
	bool gloveHold; 

public: 
	string pName; 
	int pATK; 
	int pDEF;
	int pFund; 
	
	Player(const string& playerName, int playerATK, int playerDEF, int playerFund) 
		: pName(playerName), pATK(playerATK), pDEF(playerDEF), pFund(playerFund)
	{

	}

	
	// ======== UI ============ // 
	void printUI()const
	{

		cout << "Name	: " << pName << endl; 
		cout << "ATK	: " << pATK << endl;
		cout << "DEF	: " << pDEF << endl;
		cout << "FUND	: " << pFund << " G" << endl; 

	}
	// ======== UI ============ // 

}; 

int main()
{

	// ==================  UI SECTION ================== // 
	
	Player* p = new Player("Hanako", 25, 5, 5000);
	p->printUI(); 
	Item* i = new Item((int)1, (std::string)"Strange Long Sword", (int)2, (int)1, (int)1, (int)2500);
	i->print();
	
	return 0; 
	delete p; 


}