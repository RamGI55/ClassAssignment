//1.맴버초기화 리스트를 활용하여 객체 초기화를 하고 출력해보기 
//2. get, set 활용 플레이어와 몬스터 전투게임 (2d turn based battle mech 2) 
// ㄴ health, attack only

// OOP 발표자료 
#include <iostream>
//
//// ======== Class SECTION =============== // 
//
using namespace std; 

/*
*
Class student - contains student's information and print out the sutdent's info in UI.
	void print detail - shows student's information to UI.

// ========= personal information, non-combat related ============= // 
sName - Student's Name 
DOB - Date of birth
favroite - studnet's faveroite things

// ========= combat stats information, combat mech related ============= //
sAtk - student's attack stats (int) - TODO offece mechanism calculation 
sDef - student's defend stats (int) - TODO defence mechanism calculation 
*/

class student
{
public:
	string sName;
	int sAtk;
	int sDef;
	string DOB;
	string favroite;

	student(const string& studentName, int studAttack, int studDef, const string& dateofbirth, const string& studfav)
		:sName(studentName), sAtk(studAttack), sDef(studDef), DOB(dateofbirth), favroite(studfav)
	{

	}
	void printDetail() const
	{
		cout << "Name : " << sName << endl; 
		cout << "DOB : " << DOB << endl;
		cout << "Favroite Thing : " << favroite << endl;
		cout << endl; 
		cout << "Battle Details" << endl; 
		cout << "ATK :  " << sAtk << endl;
		cout << "DEF : " << sDef << endl;


	}
	

};

int main()
{
	student* n = new student("Koharu", 36, 6, "APR - 16 - 2002", "Think 'Something'");
	n->printDetail(); 

	return 0;
	delete n;
	n = nullptr; 
	
}
