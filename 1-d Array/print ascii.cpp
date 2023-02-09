#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of diamond : \n";
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<n-i; j++)
		{
			cout << " ";
		}
		cout << i << endl;
		for (int k=2; k<n-n+i; k++)
		{
			cout << k << endl;
		}
	}
	for (int i=7; i>0; i--)
	{
		for (int j=0; j<n-i; j++)
		{
			cout << " " ;
		}
		cout << i << endl;
	}
}
//{
//char ch = 'a';
//int i = ch;
//cout << i;
//}

 
 
 
