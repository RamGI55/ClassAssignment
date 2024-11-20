
//  OOP-POO INHERTANCE  Assignment // 

//======================== HEADER ========================//
#include <iostream>


using namespace std;
//================= FUNCTION SECTION ====================//

/*
MOSTER, PLAYER  - DAMAGE DEALT - UI 

inheratnt - PROTECTED VS PRIVATE 

Master class members > protected / public/ private 
Inhe class > protected / public/ private 



*/

class characterBehavior // this master class is called out first, 
{
public:
	string name;
	int health;
	 
		
	characterBehavior(const string& n, const int h) : name(n), health(h)
	{
		cout << "Call the character class in the master class" << endl;
	}
	double TakeDamage(double a)
	{
		
		health = health - (a * (multiplier));
		cout << name << " , you got " << a << " damages total, Remain health : " << health << endl;
		return health;
	}
private:


protected:
	double multiplier = 1.01;
	

};
class DamageCal : public characterBehavior 
{
public: 
	health = health - (a * (multiplier));


 };

class MonsterSensei : private characterBehavior // then the inheriented class follow up next. 
{
public:		
	MonsterSensei(const string n, const int h) : characterBehavior(n, h)//master class's 생성자 call out. 
	{
		cout << "inherineted class call out" << endl;

	}
	void Attack(int atk)
	{

		cout << "Sensei Attaked!" << endl;
	}
	void Attack(int atk)
	{

		cout << "Sensei used his/her touge!" << endl;
	}



};

class Monster2 : private characterBehavior // then the inheriented class follow up next. 
{
public:
	Monster2(const string n, const int h) : characterBehavior(n, h)//master class's 생성자 call out. 
	{
		cout << "inherineted class call out" << endl;

	}
	void Attack()
	{

		cout << "Monster Attacked! " << endl;
	}
	void Attack2()
	{

		cout << "Monster Whipped! " << endl;
	}


};




class Breacher : public characterBehavior // then the inheriented class follow up next. 
{
public:
	Breacher(const string n, const int h) : characterBehavior(n, h)//master class's 생성자 call out. 
	{
		cout << "inherineted class call out" << endl;
	}
	void Attack(double atk)
	{
		cout << "Shout fired" << endl;
		cout << atk << endl; 
	}
	void altAttack(double atk)
	{
		cout << "Slammed with shield!" << endl;
		cout << atk << endl;
	}
	void multiplierprint()
	{
		cout << this->multiplier << endl;
	}
private: 


};

class Rifle : public characterBehavior // then the inheriented class follow up next. 
{
public:
	Rifle(const string n, const int h) : characterBehavior(n, h)//master class's 생성자 call out. 
	{
		cout << "inherineted class call out" << endl;

	}
	void Attack()
	{

		cout << "Shots fired " << endl;
	}
	void altAttack()
	{

		cout << "Drone deployed " << endl;
	}
	void drone()
	{
		cout << "drone launched the missiles!" << endl;
	}



};
//================= MAIN FUNCTION =======================// 
int main()
{
	Breacher* b = new Breacher("Hoshino", 150);
	b->Attack(25);
	b->TakeDamage(30.0);
	b->multiplierprint();
	/*	r->placeholder(1);*/ // public 상태에서는 접근 불가하다. 
	delete b;
	b = nullptr;

//	Rifle* r = new Rifle("Shiroko", 100);
//	r->Attack();
//	r->nade();
//	r->TakeDamage(10);
///*	r->placeholder(1);*/ // public 상태에서는 접근 불가하다. 
//	delete r;
//	r = nullptr;

}