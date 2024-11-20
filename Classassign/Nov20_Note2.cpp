
//  OOP-POO INHERTANCE // 

//======================== HEADER ========================//
#include <iostream>



using namespace std; 
//================= FUNCTION SECTION ====================//

//class Breacher 
//{
//private: 
//	string name;
//	int health;
//public: 
//	Breacher(string& n, const int h) :name(n), health(h) {}
//	
//	void Attack()
//	{
//
//		cout << "Shout fired" << endl; 
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage; 
//		cout << name << "you got " << damage << "damage total, Remain health : " << health << endl; 
//	}
//
//};
//
//class Rifle 
//{
//private:
//	string name;
//	int health;
//public:
//	Rifle(string& n, const int h) :name(n), health(h) {}
//
//	void Attack()
//	{
//
//		cout << "Shots fired " << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "you got " << damage << "damage total, Remain health : " << health << endl;
//	}
//
//};


class characterBehavior // this master class is called out first, 
{
	public:
		string name;
		int health; 

		characterBehavior(const string& n, const int h) : name(n), health(h)
		{
			cout << " call the character class in the master class " << endl; 
		}
		void TakeDamage(const int damage)
		{
			health -= damage;
			cout << name << " , you got " << damage << "damage total, Remain health : " << health << endl;
		}

	private: 

	protected: 



};

class Breacher : public characterBehavior // then the inheriented class follow up next. 
	{
	public:
		Breacher(const string n, const int h) : characterBehavior(n, h)//master class's 持失切 call out. 
		{
			cout << "inherineted class call out" << endl; 

		}
		void Attack()
		{

			cout << "Shout fired" << endl;
		}


	};

class Rifle : public characterBehavior // then the inheriented class follow up next. 
	{
	public:
		Rifle(const string n, const int h) : characterBehavior(n, h)//master class's 持失切 call out. 
		{
			cout << "inherineted class call out" << endl;

		}
		void Attack()
		{

			cout << "Shots fired " << endl;
		}
		void nade()
		{
			cout << "tossing nade" << endl; 
 		}
	


	};
//================= MAIN FUNCTION =======================// 
int main()
{
	Breacher* b = new Breacher("Hoshino" , 125);
	b->Attack(); 
	b->TakeDamage(15) ;
	delete b; 
	b = nullptr;
	Rifle* r = new Rifle("Shiroko", 100);
	r->Attack();
	r->TakeDamage(10);
	delete r;
	r = nullptr;

}