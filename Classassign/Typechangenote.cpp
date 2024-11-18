#include <iostream>

using namespace std; 

//struct Test
//{
//	short s; //2byte
//	char c; //1byte
// 	int i; // 4byte 
//
//};
//
//int main()
//{
//	int intVal = 10;
//	double doubleVal = static_cast<double>(intVal);
//
//	std::cout << doubleVal << endl;
//
//
//	Test t; 
//	cout << sizeof(t) << endl; 
//
//
//
//}
enum colour
{
	red, green, black, pink
};

enum colour2
{
	blue = 2, purple, cyan =7, yellow
};

enum class Location
{
	Wichemster = 1 ,
	Whitby, 
	Toronto, 
	YorkMill,
	none
};

struct Point
{
	int v;
	int h;

};



// print  =   _/( x2 - x1 ) ^ 2 + (y2 - y1) ^2 

double CalcualateDistance(const Point& p1,  Point& p2)
{
	
	return sqrt(pow((p1.v - p2.v), 2.0) + pow((p1.h - p2.h), 2.0));
	
}
//char returned function 
Location Getlocation(int n)
{
	switch (n)
	{
	case 1: return Location::Wichemster;
	case 2: return Location::Whitby;
	case 3: return Location::Toronto;
	case 4: return Location::YorkMill;
	default: return Location::none; 
	}

	// don't need the break after 
}

int main()
{
	//colour c; 
	//cout << colour::red << endl;
	//cout << colour::green << endl;
	//cout << colour::black << endl;
	//cout << colour::pink << endl;

	//Location loc = Location::Whitby;

	//int dirselect; 
	//cin >> dirselect; 

	//Location dirselect = static_cast<Location>(dirselect);

	//switch (dirselect)
	//{
	//case Location::Wichemster:
	//	
	//	cout << "Selected Whichmenster" << endl;
	//	break; 

	//case Location::Whitby:

	//	cout << "Selected Whitby" << endl;
	//	break;



	//default:
	//	break;
	/*}*/

	Point p1 = { 0.0 ,0.3 };
	Point p2 = { 3.9, 4.2 };
	cout << CalcualateDistance(p1, p2);


}