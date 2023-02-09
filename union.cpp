#include <iostream>
using namespace std;
int unionfunc(int arr[], int arr1[], int arr2[],int size ,int size1);
int intersection(int arr[], int arr1[], int arr2[],int size , int size1);
int difference(int arr[], int arr1[], int arr2[],int size ,int size1);
int size, arr, arr1, j;
bool flag=0;   
int main()
{
	int c, no, no1, size, size1;
	int arr[20];
	int arr1[20];
	int arr2[20];
	cout << "Enter the size of first array : \n";
	cin >> size;
	cout << "pleaseeee......!! Must Enter the values in ascending order : \n";
	cin >> no;
	for (int i=0 ; i<size-1 ; i++)
	{
		cin >> arr[i] ;
	}
	cout << "Enter the size of second array : \n";
	cin >> size1;
	cout << "pleaseeee......!! Must Enter the values in ascending order : \n";
	cin >> no1;
	for (int i=0 ; i<size1-1 ; i++)
	{
		cin >> arr1[i];
	}
	cout << unionfunc(arr, arr1, arr2, size , size1) ;
	cout << intersection(arr, arr1, arr2, size , size1) ;
	cout << difference(arr, arr1, arr2, size , size1) ;
}
int unionfunc(int arr[], int arr1[], int arr2[], int size , int size1)
{
	for(int i=0; i<size ; i++)
	{
		for (int j=0 ; j<size1 ; j++)
		{ 
			if(arr[i] == arr1[i])
			{
				flag=1;
				j= size1;  
			} 
			if(!flag)
			arr[i]=arr2[j];
		}
		for(i=0 ; i<size1 ; i++)
		cout << "Union of two sets is : " << arr2[i] << endl;
	}	
}
int intersection(int arr[], int arr1[], int arr2[], int size , int size1)
{
	for(int i=0, j=0; i<size ; i++ )
	{
		if(arr[i]==arr1[i])
		{
			flag=1;
			i=size;
		}
		for (j=0; j<size1; j++)
		{
			arr[i]=arr2[i];
			cout << "the intersection of two sets is : " << arr2[i] << endl;
		}
	}
}  
int difference(int arr[], int arr1[], int arr2[], int size , int size1)
{
	
}
 
