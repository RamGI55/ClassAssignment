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
person - �÷��̾� �÷��̾��� ���ݰ� ü�� ��Ŀ������ ����. �÷��̾ �����ϸ� ���ݴ���� ���ݷ¸�ŭ�� �������� �Խ��ϴ�. 
aATK - ���ݷ� 
aHealth - ü��
aname - �÷��̾� �̸� 

TODO : �÷��̾��� ����, �� ��Ŀ���� ����
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