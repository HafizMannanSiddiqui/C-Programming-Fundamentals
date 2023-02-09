#include <iostream>
using namespace std;
void printboard(char board[3][3])
{
	cout << "\t\t\t\t Welcome to the Tic Tac Toe Game \n";
	cout << "\n\n\n\n";
	for (int i=0; i<3; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j=0; j<3; j++)
		{
			if (j==1 || j==2)
			{
				cout << "|";
			}
			cout << " " << board[i][j] << " ";
		}
		if(i==0 || i==1)
		cout << "\t\t\t\t\t ----------------------" ;
	}
}
int main ()
{
	return 0;
}
