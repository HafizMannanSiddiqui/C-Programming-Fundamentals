#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
	int A[5];
	int B[5];
	int S[10];
	int i, j, temp, min;
	cout <<"Enter elements in asscending order :\n";
	for (int i=1; i<=5; i++)
	{
		cout << "Enter element at " << i << " : " ;
		cin >> A[i] ;
	}
	cout <<"Enter elements in descending order :\n";
	for (int i=1; i<=5; i++)
	{
		cout << "Enter element at " << i  << " : ";
		cin >> B[i] ;
	}
	for (int i=1; i<=5; i++)
	{
		S[i] = A[i];
	}
	for (int i=1; i<=5; i++)
	{
		S[i+5] = B[i];
	}
	cout << "The unsorted array is given below : \n";
	for (int i=1; i<=10; i++)
	{
		cout << S[i] << " ";
	}
	
	
 	for (i = 1; i < 10-1; i++) 
    {
      min = i;
      	for (j = i + 1; j <= 10; j++)
      	{
	      if (S[j] < S[min])
	      min = j;
		}
		temp = S[i];
	    S[i] = S[min];
	    S[min] = temp;
    }
	cout << "\nThe sorted array is given below : \n";
	for (int i=1; i<=10; i++)
	{
		cout << S[i] << " ";
	}
	return 0;
}
