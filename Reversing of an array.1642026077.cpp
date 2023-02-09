#include <iostream>
using namespace std;
bool issymmetric(int a[], int size, int idx);

int main()
{
	int idx, size ;
	int a[]={12,3,5,6,7,7,12,3,5,6} ;
	cout << "You must enter the size of an array is 10 : \n ";
	cin >> size ;
	cout << "Enter the index where you want to change or reverse your array : \n ";
	cin >> idx ;
	cout << issymmetric(a, size, idx) << endl;
	for (int k=0 ; k<size ; k++)
	cout << a[k] << endl; 
}

bool issymmetric(int a[], int size, int idx)
{
	if(idx >= size)
	return false ;
	else
	{
	for(int i=0, j=idx ; i<j ; )
	{
		int temp = a[i] ;
		a[i] = a[j] ;
		a[j] = temp ;
		i++ ;
		j-- ;
	}
	for(int i=0, j=size - 1 ; i<j ; )
	{
		if (a[i] != a[j])
		return false ;
		i++ ;
		j-- ;
	}
	return true;
}
}
