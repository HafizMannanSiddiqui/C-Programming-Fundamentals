#include <iostream>
using namespace std;
int main()
{
	int n,i; 
	int a[6] = {2,4,6,8,20,38};
	cout << "Enter a position where you want to delete an element : \n";
	cin >> n;
	for (int i=n; i<6; i++ )
	{
		a[i] = a[i+1];
	}
	for(i=0; i<5; i++)
	cout << a[i] <<",";
	return 0;
}
