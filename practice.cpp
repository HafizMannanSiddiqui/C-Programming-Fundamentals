#include<iostream>
#include<conio.h>
#include<time.h>
#include"help.h"
#include"shapes.h"
#include<thread>
#include<fstream>
#include<windows.h>

using namespace std;

bool verticalpossible(int val[][9]);
void timer(int& sec);
void swap(int  row, int  col, int whichKey, int val[][9]);
bool Randomgems(int arr[][9]);
void printboard(int  val[9][9]);
bool  possible(int arr[][9]);
void marker(int& x1, int& y1, int& i, int& j);
int main();
bool horizontalpossible(int val[][9]);
void firstswap(int val[][9]);
void secondswap(int val[1000][10], int& row_vlaue, int& col_vlaue, int& row_swap, int& col_swap, int& swapdone, int& swapfail);



bool verticalpossible(int val[][9])
{
	int flag = 0;
	for (int i = 0; i < 7 && flag == 0; i++)

	{
		for (int l = 0; l <= 9; l++)

		{

			if (val[i][l] == val[i + 1][l] && val[i][l] == val[i + 2][l])

			{
				val[i][l] = (rand() % 5 + 1);
				val[i + 1][l] = (rand() % 5 + 1);
				val[i + 2][l] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i - 1][l] && val[i][l] == val[i - 2][l] && l > 2)
			{
				val[i][l] = (rand() % 5 + 1);
				val[i + 1][l] = (rand() % 5 + 1);
				val[i + 2][l] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i - 1][l + 1] && val[i][l] == val[i + 1][l + 1] && l<9)
			{
				val[i][l] = (rand() % 5 + 1);
				val[i + 1][l] = (rand() % 5 + 1);
				val[i + 2][l] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i - 1][l - 1] && val[i][l] == val[i + 1][l - 1] && l > 1)
			{
				val[i][l] = (rand() % 5 + 1);
				val[i + 1][l] = (rand() % 5 + 1);
				val[i + 2][l] = (rand() % 5 + 1);
				flag = 1;
			}

		}
	}

	if (flag == 1)
		return true;
	else
		return false;
}




bool horizontalpossible(int val[][9])
{
	int flag = 0;
	for (int i = 0; i < 9 && flag == 0; i++)

	{
		for (int l = 0; l <= 9; l++)

		{

			if (val[i][l] == val[i][l + 1] && val[i][l] == val[i][l + 2] && l <= 7)
			{

				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;

			}
			if (val[i][l] == val[i + 1][l + 1] && val[i][l] == val[i + 1][l - 1])
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i + 1][l + 1] && val[i][l] == val[i + 1][l + 2])
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i + 1][l - 1] && val[i][l] == val[i + 1][l - 2] && l > 2)
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
 			}
			if (val[i][l] == val[i - 1][l - 1] && val[i][l] == val[i - 1][l + 1])
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i - 1][l + 1] && val[i][l] == val[i - 1][l + 2])
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
			}
			if (val[i][l] == val[i - 1][l - 1] && val[i][l] == val[i - 1][l - 2] && l > 2)
			{
				val[i][l] = (rand() % 5 + 1);
				val[i][l + 1] = (rand() % 5 + 1);
				val[i][l + 2] = (rand() % 5 + 1);
				flag = 1;
			}
		}
	}

	if (flag == 1)
		return true;
	else
		return false;
}

void firstswap(int val[][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			if (val[j][i] != 0)
			{
				int temp = val[j][i];
				val[j][i] = val[j - 1][i];
				val[j - 1][i] = temp;
			}
		}
	}
}



void secondswap(int val[][9], int& row_vlaue, int& col_vlaue, int& row_swap, int& col_swap, int& swapdone, int& swapfail)
{
    if (row_swap > -1 && col_swap > -1 && row_vlaue > -1 && col_vlaue > -1)
    {
        if ((row_vlaue == row_swap && col_swap == (col_vlaue + 1)) || (row_vlaue == row_swap && col_swap == (col_vlaue - 1)) 
		     || (col_vlaue == col_swap && row_swap == (row_vlaue - 1)) || (col_vlaue == col_swap && row_swap == (row_vlaue + 1)))
        {
            cout << "yes";
            int swap = val[row_vlaue][col_vlaue];
            val[row_vlaue][col_vlaue] = val[row_swap][col_swap];
            val[row_swap][col_swap] = swap;
            swapdone = 1;

            if (swapdone == 1)

            {
                if    ((val[row_vlaue][col_vlaue] == val[row_vlaue + 1][col_vlaue] && val[row_vlaue][col_vlaue] == val[row_vlaue + 2][col_vlaue])
                    || (val[row_vlaue][col_vlaue] == val[row_vlaue - 1][col_vlaue] && val[row_vlaue][col_vlaue] == val[row_vlaue - 2][col_vlaue])
                    || (val[row_vlaue][col_vlaue] == val[row_vlaue + 1][col_vlaue] && val[row_vlaue][col_vlaue] == val[row_vlaue - 1][col_vlaue])

                    || (val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue + 1] && val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue + 2])
                    || (val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue - 1] && val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue - 2])
                    || (val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue - 1] && val[row_vlaue][col_vlaue] == val[row_vlaue][col_vlaue + 1])

                    || (val[row_swap][col_swap] == val[row_swap + 1][col_swap] && val[row_swap][col_swap] == val[row_swap + 2][col_swap])
                    || (val[row_swap][col_swap] == val[row_swap - 1][col_swap] && val[row_swap][col_swap] == val[row_swap - 2][col_swap])
                    || (val[row_swap][col_swap] == val[row_swap + 1][col_swap] && val[row_swap][col_swap] == val[row_swap - 1][col_swap])

                    || (val[row_swap][col_swap] == val[row_swap][col_swap + 1] && val[row_swap][col_swap] == val[row_swap][col_swap + 2])
                    || (val[row_swap][col_swap] == val[row_swap][col_swap - 1] && val[row_swap][col_swap] == val[row_swap][col_swap - 2])
                    || (val[row_swap][col_swap] == val[row_swap][col_swap - 1] && val[row_swap][col_swap] == val[row_swap][col_swap + 1]))


                {
                    swapfail = 0;
                }
                else
                {
                    swapfail = 1;
                    cout << "false";
                    int temp = val[row_vlaue][col_vlaue];
                    val[row_vlaue][col_vlaue] = val[row_swap][col_swap];
                    val[row_swap][col_swap] = temp;

                }

            }
            swapdone = 1;
            row_vlaue = -1; col_vlaue = -1; row_swap = -1; col_swap = -1;
        }
    }

}


bool  possible(int arr[][9])
{
	if (horizontalpossible(arr) == true)

	{

		return true;
	}

	if (verticalpossible(arr) == true)
	{

		return true;
	}

	return false;
}







bool Randomgems(int arr[][9])
{
	{
		int flag = 0;
		for (int i = 0; i < 7 && flag == 0; i++)

		{
			for (int j = 1; j <= 9; j++)

			{
				if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])

				{
					arr[i][j] = (rand() % 5 + 1);
					arr[i + 1][j] = (rand() % 5 + 1);
					arr[i + 2][j] = (rand() % 5 + 1);
					flag = 1;

				}
			}
		}

		if (flag == 1)
			return true;
		else
			return false;

	}
}




void printboard(int  val[9][9])
{
	for (int i = 1; i <=10; i++)
	{
		myLine(i * 50, 0, i * 50, 450, RGB(255, 255, 255));
		myLine(50, i * 50, 500, i * 50, RGB(255, 255, 255));
	}




	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (val[i][j] == val[i + 1][j] && val[i][j] == val[i + 2][j])
			{
				val[i][j] = (rand() % 5 + 1);
				val[i + 1][j] = (rand() % 5 + 1);
				val[i + 2][j] = (rand() % 5 + 1);
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int l = 0; l < 9; l++)
		{
			if (val[i][l] == 1) {
				int x = (i + 1) * 50 + 7;
				int y = (l) * 50 + 7;
				myEllipse(x, y, x + 35, y + 25, RGB(255, 0, 0), RGB(0, 0, 0));
			}
			else if (val[i][l] == 3)
			{
				int x = (i + 1) * 50 + 7;
				int y = (l) * 50 + 7;
				myRect(x, y, x + 35, y + 25, RGB(0, 0, 200), RGB(0, 0, 0));
			}
			else if (val[i][l] == 2)
			{
				int x = (i + 1) * 50 + 12;
				int y = (l) * 50 + 7;
				Shape1(x, y);
			}
			else if (val[i][l] == 4)
			{
				int x = (i + 1) * 50 + 7;
				int y = (l) * 50 + 3;
				Shape2(x, y);
			}

			else {
				int x = (i + 1) * 50 + 12;
				int y = (l) * 50 + 12;
				Shape3(x, y);
			}
		}
	}
}





void swap(int  row, int  col, int whichKey, int val[][9])
{
	int score = 0;
	Sleep(990);
	if (isCursorKeyPressed(whichKey) == true)

	{
		if (whichKey == 1)
		{
			swap(val[row][col], val[row][col - 1]);
			myRect(0, 0, 315, 315, RGB(0, 0, 0), RGB(0, 0, 0));
			printboard(val);

		}

		else if (whichKey == 2)
		{
			swap(val[row][col], val[row - 1][col]);
			myRect(0, 0, 315, 315, RGB(0, 0, 0), RGB(0, 0, 0));
			printboard(val);

		}

		else if (whichKey == 3)
		{
			swap(val[row][col], val[row][col + 1]);
			myRect(0, 0, 315, 315, RGB(0, 0, 0), RGB(0, 0, 0));
			printboard(val);

		}

		else if (whichKey == 4)
		{
			swap(val[row][col], val[row + 1][col]);
			myRect(0, 0, 315, 315, RGB(0, 0, 0), RGB(0, 0, 0));
			printboard(val);

		}
	}
}




void marker(int& x1, int& y1, int& i, int& j)
{


	int whichkey = 0;
	while (whichkey != 10)
	{
		myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, RGB(255, 0, 0));
		whichkey = 0;
		isCursorKeyPressed(whichkey);

		if (whichkey == 1 && x1 > 50)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, RGB(0, 0, 0));
			x1 = x1 - 50;
			j--;

		}


		if (whichkey == 2 && y1 > 50)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, RGB(0, 0, 0));
			y1 = y1 - 50;
			i--;

		}


		if (whichkey == 3 && x1 < 480)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, RGB(0, 0, 0));
			x1 = x1 + 50;
			j++;
		}


		if (whichkey == 4 && y1 < 480)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, RGB(0, 0, 0));
			y1 = y1 + 50;
			i++;


		}
	}
}


void timer(int& sec)
{


	while (sec > 0)
	{
		PlaceCursor(80, 0);
		cout << "Time:" << sec << "\b\b";
		Sleep(1000);
		sec--;

	}
}





int main()

{
	srand(time(0));

	int whichKey;
	int sq = 40;
	int arr[9][9];
	int score = 0;
	int x1 = 50, y1 = 50;
	int i = 0, j = 0;
	int time = 60;


	thread t1(timer, ref(time));
	t1.detach();


	for (int i = 0; i < 9; i++)
	{
		for (int l = 0; l < 9; l = l + 1)
		{
			arr[i][l] = (rand() % 5 + 1);
		}
	}


	PlaceCursor(95, 0);
	cout << "score:" << score;



	for (int i = 0; i < 18; i++)

	{
		for (int i = 0; i < 9; i++)

		{
			for (int j = 0; j <9; j++)

			{
				if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && j <= 7)
				{

					arr[i][j] = (rand() % 5 + 1);
					arr[i][j + 1] = (rand() % 5 + 1);
					arr[i][j + 2] = (rand() % 5 + 1);
				}
				if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && j <= 7)

				{

					arr[i][j] = (rand() % 5 + 1);
					arr[i + 1][j] = (rand() % 5 + 1);
					arr[i + 2][j] = (rand() % 5 + 1);
				}
			}
		}
	}


	while (time != 0) {
		
		printboard(arr);

		marker(x1, y1, i, j);
		int first_i = i, first_j = j;

		marker(x1, y1, i, j);
		int sec_i = i, sec_j = j;

		if (first_i + 1 == sec_i || first_i - 1 == sec_i || first_j + 1 == sec_j || first_j - 1 == sec_j)

		{
			swap(arr[first_i][first_j], arr[sec_i][sec_j]);
			system("cls");
			printboard(arr);
		}
		
		
		
		firstswap(val);

	}

}
