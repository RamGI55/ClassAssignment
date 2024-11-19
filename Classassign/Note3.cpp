#include <iostream>

using namespace std; 

class exam
{
public: 
	const int num; 
	int& score; 

	exam(int num, int score) 
		:num(num), score(score)//	must use initialiser to initialise constant and refered variables. 
	{
		//	num = 1; //	constant and refer variables won't definied inside of here. 
		//	score = 2;           
	}
};
bool gameover;
/*
person - 플레이어 플레이어의 공격과 체력 매커니즘을 구현. 플레이어가 공격하면 공격대상은 공격력만큼의 데미지를 입습니다. 
aATK - 공격력 
aHealth - 체력
aname - 플레이어 이름 

TODO : 플레이어의 방어력, 방어구 매커니즘 구현
*/
class person
{
private:
	int aATK;
	int aHealth;
	string aname;

public:
	string GetName()const {return aname;}
	
	void SetName(const string& name)
	{
		aname = name;
	}
	// private variation must be hidden should not shown in the public 

public: 
/*

*/
};
class monster 
{

public: 
	string nName; 
	int mAtk;
	int mHealth;

	monster(const string& monsterName, int mosterAtk, int monsterHealth)
		:nName(monsterName), mAtk(mosterAtk), mHealth(monsterHealth) // defining the variations 
	{
	
			//do not need to defining	
	}

};
int main()
{
	monster* n = new monster("Goblin", 10, 20); 
	person p;
	p.SetName("Nonomi");

	cout << "Name : " << p.GetName() << endl; 

}