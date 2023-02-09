#include<iostream>
#include<conio.h>
#include<time.h>
#include"help.h"
#include<thread>
#include<fstream>
#include<windows.h>



using namespace std;

bool verticalpossible(int val[][8])
{
	int flag = 0;
	for (int i = 0; i < 6 && flag == 0; i++)

	{
		for (int l = 0; l <= 8; l++)

		{

			if (val[i][l] == val[i + 1][l] && val[i][l] == val[i + 2][l])

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




bool horizontalpossible(int val[][8])
{
	int flag = 0;
	for (int i = 0; i < 8 && flag == 0; i++)

	{
		for (int l = 0; l <= 8; l++)

		{

			if (val[i][l] == val[i][l + 1] && val[i][l] == val[i][l + 2] && l <= 6)
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



bool  possible(int arr[][8])
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




void Shape1(int x1, int y1) {

	myLine(x1, y1, x1 + 30, y1 + 30, 255, 255, 0);
	myLine(x1 + 30, y1, x1, y1 + 30, 255, 255, 0);
}




void Shape2(int x, int y)
{
	myEllipse(x + 5, y, x + 35, y + 40, 128, 128, 128);
	myRect(x, y + 30, x + 40, y + 40, 128, 128, 128);
}




void Shape3(int x, int y)
{
	myLine(x, y, x + 15, y + 30, 0, 255, 0);
	myLine(x + 30, y, x + 15, y + 30, 0, 255, 0);
}



bool Randomgems(int arr[][8])
{
	{
		int flag = 0;
		for (int i = 0; i < 6 && flag == 0; i++)

		{
			for (int j = 1; j <= 8; j++)

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




void printboard(int  val[8][8])
{
	for (int i = 1; i <= 9; i++)

	{
		myLine(i * 60, 0, i * 60, 540, 255, 255, 255);
		myLine(60, i * 60, 540, i * 60, 255, 255, 255);
	}

	for (int i = 0; i < 8; i++)

	{
		for (int l = 0; l < 8; l++)

		{
			if (val[i][l] == 1) {
				int x = (i + 1) * 60 + 10;
				int y = (l) * 60 + 10;
				myEllipse(x, y, x + 40, y + 30, 255, 0, 0);

			}

			else if (val[i][l] == 3)
			{
				int x = (i + 1) * 60 + 10;
				int y = (l) * 60 + 10;
				myRect(x, y, x + 40, y + 30, 0, 0, 200);

			}

			else if (val[i][l] == 2)
			{
				int x = (i + 1) * 60 + 15;
				int y = (l) * 60 + 10;
				Shape1(x, y);
			}

			else if (val[i][l] == 4)
			{
				int x = (i + 1) * 60 + 10;
				int y = (l) * 60 + 5;
				Shape2(x, y);
			}

			else {
				int x = (i + 1) * 60 + 15;
				int y = (l) * 60 + 15;
				Shape3(x, y);
			}
		}
	}
}





void swap(int  row, int  col, int whichKey, int val[][8])
{
	int score = 0;
	Sleep(990);
	if (isCursorKeyPressed(whichKey) == true)

	{
		if (whichKey == 1)
		{
			swap(val[row][col], val[row][col - 1]);
			myRect(0, 0, 315, 315, 0, 0, 0);
			printboard(val);

		}

		else if (whichKey == 2)
		{
			swap(val[row][col], val[row - 1][col]);
			myRect(0, 0, 315, 315, 0, 0, 0);
			printboard(val);

		}

		else if (whichKey == 3)
		{
			swap(val[row][col], val[row][col + 1]);
			myRect(0, 0, 315, 315, 0, 0, 0);
			printboard(val);

		}

		else if (whichKey == 4)
		{
			swap(val[row][col], val[row + 1][col]);
			myRect(0, 0, 315, 315, 0, 0, 0);
			printboard(val);

		}
	}
}




void marker(int& x1, int& y1, int& i, int& j)
{


	int whichkey = 0;
	while (whichkey != 10)
	{
		myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, 0, 255, 255);
		whichkey = 0;
		isCursorKeyPressed(whichkey);

		if (whichkey == 1 && x1 > 60)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, 0, 0, 0);
			x1 = x1 - 60;
			j--;

		}


		if (whichkey == 2 && y1 > 60)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, 0, 0, 0);
			y1 = y1 - 60;
			i--;

		}


		if (whichkey == 3 && x1 < 480)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, 0, 0, 0);
			x1 = x1 + 60;
			j++;
		}


		if (whichkey == 4 && y1 < 480)
		{
			myLine(x1 + 5, y1 - 5, x1 + 50, y1 - 5, 0, 0, 0);
			y1 = y1 + 60;
			i++;


		}
	}
}


void timer(int& sec)
{


	while (sec>0)
	{
		gotoxy(80, 0);
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
	int arr[8][8];
	int score = 0;
	int x1 = 60, y1 = 60;
	int i = 0, j = 0;
	int time = 60;


	//thread t1(timer, ref(time));
	//t1.detach();


	for (int i = 0; i < 8; i++) 
	{
		for (int l = 0; l < 8; l = l + 1)
		{
			arr[i][l] = (rand() % 5 + 1);
		}
	}


	gotoxy(95, 0);
	cout << "score:" << score;


	for (int i = 0; i < 16; i++)

	{
		for (int i = 0; i < 8; i++)

		{
			for (int j = 0; j <= 8; j++)

			{
				if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && j <= 6)
				{

					arr[i][j] = (rand() % 5 + 1);
					arr[i][j + 1] = (rand() % 5 + 1);
					arr[i][j + 2] = (rand() % 5 + 1);
				}
				if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && j <= 6)

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

	}
}
