#include <iostream>

/// <summary>
///  SINGLEPLAYER - Tier 1 
/// </summary>
using namespace std;
int verticalVerif;
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
	for (int i = 0; i < 200; i++)
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

void marker(const int(&bingoNumber[5][5]),int Select)
{
	
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingoNumber[i][j] == Select)

					bingoNumber[i][j] = 0;
			}

		}
		//for (int i = 0; i < 5; i++)
		//{
		//	for (int j = 0; j < 5; j++)
		//	{
		//		if (bingoNumber[i][j] == 0) cout << (char)bingoNumber[i][j]; // TODO : Change to the #. 
		//		else cout << bingoNumber[i][j] << "\t";

		//	}
		//	cout << endl;

		//}
	


}

int IsBingo(const int(&bingoNumber[5][5]), int bingocount)
{	
	int verticalVerif;
	int horizontalVerif;
	int rightDiagVerif;
	int leftDiagVerif;

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

		for (int i = 0; i < 5; i++)
		{
			verticalVerif = 0;

			for (int j = 0; j < 5; j++)
			{
				if (bingoNumber[j][i] == 0)
				{
					verticalVerif++;
				}


			}
			if (verticalVerif == 5)
			{

				bingocount++;
			}


		}

		if (bingoNumber[0][0] == 0 && bingoNumber[1][1] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][3] == 0 && bingoNumber[4][4] == 0)
		{
			bingocount++;

		}
		


		if (bingoNumber[0][4] == 0 && bingoNumber[1][3] == 0 && bingoNumber[2][2] == 0 && bingoNumber[3][1] == 0 && bingoNumber[4][0] == 0)
		{
			bingocount++;

		}
		

		cout << "Your Total Bingos : " << bingocount << endl;

};



int main()
{	
	
	int player[5][5];
	BfSuffle(player);
	Suffle(player); 
	int pBingoCount = 0;
	int pCallout; 
	 
	cout << "========= 5X5 BINGO GAME =========== " << endl;
	cout << pBingoCount << endl;
	// TODO:: Make the loops work, check in the debug which illegal code stops to procced. 
		for (int g = 0; g < 25 ; g ++)
		{
			printScreen(player);
			IsBingo(player, pBingoCount);
			
		/*	if (pBingoCount == 3)
			{
				
			}
			else*/ 
			cout << "Please Select The Number: " << endl;
			cin >> pCallout;

			marker(player, pCallout);
			
		}
		 
}