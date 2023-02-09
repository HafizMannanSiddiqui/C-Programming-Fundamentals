#include <iostream>
using namespace std;
int main ()
{
	int n=5, temp;
	int a[5] = {1,2,3,4,5};
	cout << "The origibnal array is here : \n";
	for (int i=0; i<5; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\nThe reverse of given array is given below : \n";
	for (int i=0,j=n-1; i<n-2; i++, j-- )
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		cout << a[i] << " ";
	}
	for (int i=0; i<2; i++ )
	{
		temp = a[i];
		a[i] = a[i+3];
		a[i+3] = temp;
		cout << a[i] << " ";
	}
	
	return 0;
}
