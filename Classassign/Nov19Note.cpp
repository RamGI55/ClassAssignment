#include <iostream>

using namespace std; 
struct SCircle
{
	int radius; 
	string colour;

	double calcArea()
	{
		return 3.14 * radius * radius; 
	}
};

class CCircle
{
private: 
	int radius;
	string colour;
public: 
	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

// class CCircle works same as struct CCircle. 

/* 
Difference 


*/
class Student
{
private:

public: 
	int number;
	string name;
};



int main()
{
// Struct 
	SCircle sc;
	sc.radius = 2; 
	sc.calcArea();

// class
	CCircle cc;
	cc.radius = 1; 

// class cannot access on its variable. 

}