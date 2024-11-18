#include <iostream>

using namespace std; 

bool killed = false; 
int playerselect;

enum class job
{
	Sniper, Assult, Rush, Rat
};

struct Character
{
	string name;
	int level = 0 ;
	job job;
	int health = 0 ;
	int attack = 0;
} p1, p2;

string GetName(job& j)
{

	switch (j)
	{
	case job::Sniper:return "DMR 12, Glock, and 환각 수류탄";
	case job::Assult:return "M416, M9 and 파편 수류탄";
	case job::Rush:return "MP5, Glock18 and 플레쉬";
	case job::Rat:return "Shotgun and 탐지기";
	default: return "선택하지 않음 ";

	}

}
/*
Player level goes up once player reach the certain level of exp
killed = if character killed opponent
c.level = raise the level + 1 to target character

*/
void levelUp(Character& c)
{
	// level up feature 
	if (killed=true)
	{
		c.level++;
		cout << "레벨 업! " << endl;
		cout << " Level : " << c.level << endl;
	}

}
/* 
Attack mechanism, player a attacks player 2.
press attack > ch 1 attacks c2 > shows remain health and damage gave.

*/
int Attack(Character& c1, Character& c2)
{
	while (c2.health > 0)
	{ 
	if (cin.get());
	{
		c2.health = c2.health - c1.attack;
		cout << c1.name << " " << c1.health << endl;
		cout << c2.name << " " << c2.health << endl;

	}

	}
	killed++;
	return 0; 
}

/* 
	string name;
	int level;
	int job;
	int health;
	int attack;


Player console 
*/
int main()
{	
	Character p1 = { "제인 도", 1 , job::Rush, 150 , 15 };
	Character p2 = { "리쿠하치마 아루" , 1 , job::Sniper, 150 , 20}; 
	


	cout << "엔터를 눌러 게임을 시작하세요" << endl; 
	if (cin.get());
	{
		cout << "게임시작 " << endl; 

		//cout << "Press select the character." << endl;
		//cout << "플레이어 1 : " << p1.name << " 레벨 :" << p1.level << "직업 : " << GetName(p1.job) << endl;
		//cout << "플레이어 2 : " << p2.name << " 레벨 :" << p2.level << "직업 : " << GetName(p2.job) << endl;

		//cin >> playerselect; 
		//switch (playerselect)
		//{
		//case 1:
		//	cout << "You selected " << p1.name;
		//	Attack(p1.attack, p2.attack)
		//	break;
		//case 2:
		//	cout << "You selected " << p2.name;
		//	Attack(p2.attack, p1.attack);
		//	break;
		//default:
		//	cout << "invalid choice"; 

 	//	}

		cout << "엔터를 눌러 아루를 사격하세요." << endl;
		Attack(p1, p2);
		levelUp(p1);

		

	}
	
}
