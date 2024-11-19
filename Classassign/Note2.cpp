#include <iostream>

using namespace std;
// ====== class area ========== // 

class CPlayer
{
public: 
	string name; 
	int mATK; 
	int mDef;
public: 
	CPlayer()
	{
		name = "Nonomi";
		mATK = 10;
		mDef = 200; 
	}
	void PrintInfo()const;
};

void CPlayer::PrintInfo() const
{


	cout << "name: " << name << endl; 
	cout << "ATK: " << mATK << endl;
	cout << "DEF: " << mDef << endl;
}
//=========== PERSON CLASS ============//
class person
{
public: 
	string name;
	int age; 
	string Dateofbirth; // MMDDYY
	string pnumber; // int 
public:
	person()
	{
		name = "Nonomi";
		age = 20;
		Dateofbirth = "SEP-01-04";
		pnumber = "+82 - 883 - 2343 - 8932";
	}
	void Printpinfo()const;

};

void person::Printpinfo() const
{
	cout << "name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "DOB(MMM-DD-YY): " << Dateofbirth << endl;
	cout << "Phone Number: " << pnumber << endl;

}

int main()
{
	CPlayer* player = new CPlayer();
	player->PrintInfo();

	// generate the Nonomi object.

	delete player;
	player = nullptr;
	cout << endl; 


	person* personlist = new person();
	personlist->Printpinfo();

	// generate the Nonomi object.

	delete personlist;
	personlist = nullptr;

}


