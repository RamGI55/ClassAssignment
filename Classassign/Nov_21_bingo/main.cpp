#include <iostream>

/// <summary>
///  SINGLEPLAYER - Tier 1 
/// </summary>

int bingoNumber[5][5];
int markedNumber[5][5];
int playerCallout;

int verticalVerif;
int horizontalVerif;
int rightDiagVerif;
int leftDiagVerif;
int bingocount; 

int i; 
int j;
int gameOver; 

void BfSuffle(int(&bingoNumber[5][5])
{
	int counter = 1;
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bingoNumber[i][j] = counter++;
		}
	}


}

void Suffle(int(&bingoNumber[5][5]))
{
	srand(time(0));
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

}

void printScreen(int(&bingoNumber[5][5]))
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			/*markedNumber[i][j] = calloutedNumber[i][j];*/
			cout << bingoNumber[i][j] << "\t";
		}
		cout << endl;
	}
}

void marker(const int(&bingoNumber[5][5]),int playerCallout)
{
	
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingoNumber[i][j] == playerCallout)

					bingoNumber[i][j] = 0;
			}

		}
		int count = 0;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingoNumber[i][j] == 36) cout << (char)bingoNumber[i][j]; // TODO : Change to the #. 
				else cout << bingoNumber[i][j] << "\t";

			}
			cout << endl;

		}
		Gamecount++;
	


}

void IsBingo (const int(&bingoNumber[5][5]), int bingocount)
{


		for (int i = 0; i < 5; i++)
		{
			horizontalVerif = 0;

			for (int j = 0; j < 5; j++)
			{
				if (bingoNumber[i][j] == 0)
				{
					horizontalVerif++;
				}


			}
			if (horizontalVerif == 5)
			{

				bingocount++;
			}


		}

		/*if (bingoNumber[0][0] == 0 && bingoNumber[1][1] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][3] == 0 && bingoNumber[4][4] == 0)
		{
			rightDiagVerif++;

		}
		rightDiagVerif = 0;


		if (bingoNumber[0][4] == 0 && bingoNumber[1][3] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][1] == 0 && bingoNumber[4][0] == 0)
		{
			leftDiagVerif++;

		}*/
		leftDiagVerif = 0;

		cout << "Your Total Bingos : " << bingocount << endl;

};

BfSuffle(player);
Suffle(player); 

using namespace std; 
int main()
{	
	int Gamecount = 0; // int count 
	// UI UX FLOW // 
	int counter = 1; 
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bingoNumber[i][j] = counter ++;
		}
	}


	cout << "========= 5X5 BINGO GAME =========== " << endl;
	int player[5][5]; 
	
	
		

		int pBingoCount = 0;

		if (pBingoCount = 3) break;

	
		printScreen(player);

		cout << "Please Select The Number: " << endl;
		cin >> pCallout;

		marker(player, pCallout);

		IsBingo(player, pBingoCount);

	
	//// ===== print random 5x5 bingo ===== // 
	//int dest, sour, temp;
	//for (int a = 0; a < 200; a++)
	//{	
	//	
	//	dest = rand() % 5; 
	//	sour = rand() % 5; 
	//	temp = bingoNumber[sour][dest];
	//	bingoNumber[sour][dest] = bingoNumber[dest][sour];
	//	bingoNumber[dest][sour] = temp;
	//
	//}
	//// BUG :: FIRST TWO NUMBERS AREN'T SUFFLED. 

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		/*markedNumber[i][j] = calloutedNumber[i][j];*/
	//		cout << bingoNumber[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

	//int count = 0; 
	//while ( count  < 6 )
	//{ 

	//	cout << "Please Select The Number; " << endl; 
	//	cin >> playerCallout;

	//	for (int i = 0; i < 5; i++)
	//	{
	//		for (int j = 0; j < 5; j++)
	//		{
	//			if (bingoNumber[i][j] == playerCallout)
	//
	//				bingoNumber[i][j] = 0; 
	//		}

	//	}
	//	for (int i = 0; i < 5; i++) {
	//		for (int j = 0; j < 5; j++) {
	//			if (bingoNumber[i][j] == 36) cout << (char)bingoNumber[i][j] ; // TODO : Change to the #. 
	//			else cout << bingoNumber[i][j] << "\t";

	//		}

	//		cout << endl;

	//	}
	//
	//	for (int i = 0; i < 5; i++) 
	//	{
	//		horizontalVerif = 0;

	//		for (int j = 0; j < 5; j++)
	//		{
	//			if (bingoNumber[i][j] == 0)
	//			{
	//				horizontalVerif++;
	//			}
	//			
	//			
	//		}
	//		if (horizontalVerif == 5)
	//		{
	//			
	//			bingocount++;
	//		}
	//		 
	//		
	//	}

	//	/*if (bingoNumber[0][0] == 0 && bingoNumber[1][1] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][3] == 0 && bingoNumber[4][4] == 0)
	//	{
	//		rightDiagVerif++;
	//		
	//	}
	//	rightDiagVerif = 0;


	//	if (bingoNumber[0][4] == 0 && bingoNumber[1][3] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][1] == 0 && bingoNumber[4][0] == 0)
	//	{
	//		leftDiagVerif++;
	//		
	//	}*/
	//	leftDiagVerif = 0;

	//	cout << "Your Total Bingos : " << bingocount << endl;

	//count++; 
	//}
	////for (i=0; i < 5 ; i ++ )
	////	for (j = 0; j < 5; j++)
	////	{
	////		if (bingoNumber[i][j] == 0)



	////	}

	//
	//return 0;

}