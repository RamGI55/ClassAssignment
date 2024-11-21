#include <iostream>

/// <summary>
///  SINGLEPLAYER 
/// </summary>

int bingoNumber[5][5];
int markedNumber[5][5];
int playerCallout;

int verticalVerif[5];
int horizontalVerif[5];
int rightDiagoVerif;
int leftDiagoVerif;

int i; 
int j;

using namespace std; 
int main()
{	
	int counter = 1; 
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bingoNumber[i][j] = counter ++;
		}
	}

	// ===== print random 5x5 bingd ===== // 
	int dest, sour, temp;
	for (int a = 0; a < 200; a++)
	{	
		
		dest = rand() % 5; 
		sour = rand() % 5; 
		temp = bingoNumber[sour][dest];
		bingoNumber[sour][dest] = bingoNumber[dest][sour];
		bingoNumber[dest][sour] = temp;
	
	}
	// BUG :: FIRST TWO NUMBERS AREN'T SUFFLED. 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			/*markedNumber[i][j] = calloutedNumber[i][j];*/
			cout << bingoNumber[i][j] <<", " ;
		}
		cout << endl; 
	}

	cout << "please select the number; " << endl; 
	cin >> playerCallout;
	

	 

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (bingoNumber[i][j] == playerCallout)
	
				bingoNumber[i][j] = 0; 
		}

	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (bingoNumber[i][j] == 36) cout << (char)bingoNumber[i][j] << "\t"; // TODO : Change to the #. 
			else cout << bingoNumber[i][j] << "\t";

		}

		cout << endl;

	}

	
	//for (int i = 0; i < 25; i++)
	//{
	//	int j = rand() % 25; 
	//	int temp = calloutedNumber[i];
	//	calloutedNumber[i] = calloutedNumber[j];
	//	calloutedNumber[j] = temp;
	//}

	//	
	//for (int i = 0; i < 25; i++)
	//{
	//	cout << calloutedNumber[i] << endl; 
	//}
	// 

	return 0;
}