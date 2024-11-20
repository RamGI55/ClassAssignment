#include <iostream>

using namespace std;

//class MyArray
//{
//private: 
//	int* data; 
//	int size;
//
//public: 
//
//	MyArray(int size) : size(size), data(new int[size]) {} 
//	
//	MyArray(const MyArray& other) : size(other.size), data(other.data)
//	{
//		cout<< "Call out the copy constructor" <<endl; 
//	}
//
//	~MyArray()
//	{
//		delete[] data;
//
//	}
//
//	void 
//};
//
//  Shallow copy 
//int main()
//{
//	MyArray arr1(10);
//
//	arr1.SetValue(0, 42);
//	
//	MyArray arr2(arr1); // Shallow Copying 
//
//	cout << arr1.GetDataAddr() << endl; 
//	cout << arr2.GetDataAddr() << endl;
//
//	cout << arr1.GetValue(0) << endl;
//	cout << arr2.GetValue(0) << endl;
//
//	arr.SetValue(0, 80); // Shallow copying is dependent; once the value changed to 80, it will changed the copied value. 
//						  Because, shallow copying shares same memory value both original and copied. 
//						  Copy constructor could be dangerous, it would cause memeory error, if someone illegally change or delete the copied value. 
//	cout << arr1.GetValue(0) << endl;
//	cout << arr2.GetValue(0) << endl;
//
//


//class MyArray
//	{
//	public:
//		MyArray(int size );
//
//		MyArray(const MyArray& other);
//		~MyArray();
//		int* GetDataArr()const { return data; }
//
//	private:
//		int* data;
//		int size; 
//
//		
//	};
//
//	MyArray::MyArray(int size)
//	{
//		this->size = size; 
//		data = new int[size];// this ->  point itself. 
//	}
//
//	MyArray::MyArray(const MyArray& other)
//	{
//		cout << " Call out the copy class" << endl;
//		this->size = other.size; 
//		this->data = new int[other.size]; 
//		for (int i = 0; i < size; i++)
//		{
//			this->data[i] = other.data[i];
//			cout << data << endl; 
//
//		}
//	}
//
//	MyArray::~MyArray()
//	{
//		if (data != nullptr)delete[] this->data; 
//		data = nullptr;
//	}
//
//	int main ()
//	{
//
//		MyArray arr(10);
//		cout << arr.GetDataArr() << endl; 
//		MyArray clone = arr;  
//		cout << clone.GetDataArr() << endl; 
//
//
//
//
//
//}

	class MyClass
	{

	private :
		int data; 
	public: 
		MyClass(int value) : data(value)
		{
			cout << "Call out the 생성자" << endl;

		}
		MyClass(const MyClass& other) : data(other.data)
		{
			cout << "Copy constructor" << endl; 

		}

		void show()const {
			cout << "데이터 : " << data << endl; 
		}

	};
	
	void Func(MyClass& m) // won't copy the "copied element" string,  call by referance ; &  - can block copying the element, 
	{
		cout << "Copied element" << endl; 
		m.show(); 
		
	}

	int main()
	{
		MyClass m(10);

		Func(m);

		m.show(); 
	}

	vector <MyClass> 