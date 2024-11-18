#include <iostream>

using namespace std; 
enum class job
{
	Sniper, Assult, Rush, Rat
};

struct Character
{
	string name;
	int level;
	int job;
	int health;
	int attack;
} p1, p2;

string GetName(job& j)
{

	switch (j)
	{
	case job::Sniper:return "DMR 12, Glock, and Concasious";
	case job::Assult:return "M416, M9 and frag granade";
	case job::Rush:return "MP5, Glock18 and flash";
	case job::Rat:return "Shotgun and detector";

	}

}
/*
Player level goes up once player reach the certain level of exp


*/
void levelUp(Character& c)
{
	// level up feature 
	

}
/* 
Attack mechanism, player a attacks player 2.
press attack > ch 1 attacks c2 > shows remain health and damage gave.

*/
void Attack(Character& c1, Character& c2)
{
	
	// attack mechanism, attacks other player. 
	
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
	Character p1;
	p1.Character = "Jane Doe";
	p1.level = 0;

	Character p2;
	p2.Character = "Aru Rikuhachima";
	p2.level = 0; 
	cout << 
}
