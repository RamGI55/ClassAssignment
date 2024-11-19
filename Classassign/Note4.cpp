
#include <iostream>

using namespace std; 
class lstudent
{
public:
	lstudent(int size);
	~lstudent();

private:
	int* data; 
};

lstudent::lstudent(int size)
{
	data = new int[size]; 
	cout << "Generator" << endl;
}

lstudent::~lstudent()
{
	delete[] data; 
	data = nullptr; 
	cout << "" << endl;
}

// ======== Class SECTION =============== // 


int main()
{
	MyClass* m = new MyClass(10);
	delete m; 


}