#include <iostream>
#include <string.h>

using namespace std;

void ReverseStr(char str[])
{
	int len = strlen(str);
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i-1];
		str[len - i - 1] = temp;

	}

}
/*
Reverse the chracter; 
char str - insert the string value 

*/
void ReverseEvn(char str[]) 
{
	int len = strlen(str);
	for (int i = 0; i <= len; i++)
	{
		if (i % 2 != 0)
			cout << str[i]; 

	}
}

/* 
Find Chara 
char ste - insert string value.
char c - inster the character to find. 
*/
int FindChara(char str[], char c)
{
	int charaCout = 0; 
		int len = strlen(str);
		for (int i = 0; i < len; i++)
		{
			
			if (str[i] == c)
			{
				charaCout++;
				cout << str[i] << endl;
 			
			} 
			
			
			 

		}
		if (charaCout == 0)
		{
			return -1;
		}
		else 
		{
			cout << charaCout << c << "found" << endl;
		}
		return 0;
		
}
	



////Odd number pritn 
////speficfic letter print or -1. 
//*/
int main()
{

	char s1[10] = "world";
	char s2[45] = "Rikuhachima"; 


	//ReverseStr(s1);
	//cout << s1 << endl;
	//ReverseEvn(s2);
	cout << static_cast<char>(FindChara(s2, 'h')) << endl; 

	

	
	

}

// reverse the strings.
