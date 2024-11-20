// BASIC 1vs1 TURN BASE RPG ENGINE // 
#include <iostream>

using namespace std; 

bool killed = false; 
int playerselect;
int playerinput; 


class fight 

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
	int def = 0; 
} p1, p2;

string GetName(job& j)
{

	switch (j)
	{
	case job::Sniper:return "DMR 12, Glock, and Concasious";
	case job::Assult:return "M416, M9 and frag granade";
	case job::Rush:return "MP5, Glock18 and flash";
	case job::Rat:return "Shotgun and detector";
	default: return "Not Selected";

	}

}
/*
Player level goes up once player reach the certain level of exp
killed = if character killed opponent. 
c.level = raise the level + 1 to target character

*/
void levelUp(Character& c)
{
	// level up feature 
	if (killed=true)
	{
		c.level++;
		cout << "level up! " << endl;
		cout << " Level : " << c.level << endl;
	}

}
/* 
Attack mechanism, player a attacks player 2.
press attack > ch 1 attacks c2 > shows remain health and damage gave. Currently - attack button is enter. 


*/
int Attack(Character& c1, Character& c2)
{
	// char << use the pointers 
	// string 
	cout << " Fight begin!, Kill " << c2.name << "!! " << endl;
	while (c2.health > 0)
	{
		// RANDOM COUNT THE ATTACK ACCURANCY SNIPER - 80, M4 - 65, SMG - 55, SHOTGUN - 50 (Tier 2) // 
		 
		cin >> playerinput;
		switch (playerinput)
		{
			// a - attack, s- defen, d- run 
		case 1:
			c2.health = c2.health - c1.attack;
			cout << c1.name << "  ======================== >> " << c2.name << endl;
			cout << c1.name << " " << c1.health << endl;
			cout << c2.name << " " << c2.health << endl;
			break;
		case 2:
			c1.health = c1.health - (c2.attack * (1 * (1 - (c1.def / 100))));
			cout << c1.name << "  << ========================  " << c2.name << endl;
			cout << c1.name << " " << c1.health << endl;
			cout << c2.name << " " << c2.health << endl;
			break;
			// ATTACK, DEFENCE, RUN Mechanism (Tier 2) //
		case 3:
			c1.health = c1.health - (c2.attack * (1));
			cout << c1.name << "  << ========================  " << c2.name << endl;
			cout << c1.name << " " << c1.health << endl;
			cout << c2.name << " " << c2.health << endl;
			break;
		default: 
			cout << "Please push the right button" << endl; 
			break;

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
	Character p1 = { "Jane Doe", 1 , job::Rush, 150 , 15 , 7};
	Character p2 = { "Aru Rikuhachima" , 1 , job::Sniper, 150 , 20, 5}; 
	


	cout << "Select Enter to start the game" << endl; 
	if (cin.get());
	{
		cout << "Game start" << endl; 

		cout << "Press select the character." << endl;
		cout << "플레이어 1 : " << p1.name << " 레벨 :" << p1.level << "직업 : " << GetName(p1.job) << endl;
		cout << "플레이어 2 : " << p2.name << " 레벨 :" << p2.level << "직업 : " << GetName(p2.job) << endl;

		cin >> playerselect; 
		switch (playerselect)
		{
		case 1:
			cout << "You selected " << p1.name;
			Attack(p1, p2);
			levelUp(p1);
			break;
		case 2:
			cout << "You selected " << p2.name;
			Attack(p2, p1);
			levelUp(p2);
			break;
		default:
			cout << "invalid choice"; 

 		}


		

	}
	
}
