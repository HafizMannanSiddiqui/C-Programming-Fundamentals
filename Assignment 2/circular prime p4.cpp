#include <iostream>
#include <cmath>
using namespace std;
int power(int , int);
int prime(int);
int digitcount(int);
int main()
{
	int p, p1, n, j=1, rem, temp, count, sum, f=0;
	cout << "*************** Check a number wheather its a circular prime or not ******************** \n";
	cout << "Enter a number to check its prime or not : ";
	cin >> n;
	count = digitcount(n);
	while(count!=0) 
	{
		temp=n;
		count--;             
		p=power(10,count);   // to swaping the number like ------------>>>   3*10=30 .. 3*100=300 ... 3*1000=3000
		p1=power(10,j);      // to seprate the digits by multiplying the total digit times
		rem=temp%p1;         // to separate digits of a given number         1193 % 10 = 3 
		temp=temp/p1;        //                                              1193 / 10 = 119  
		sum=rem*p+temp;      // For swapping the numbers (total digit times) 3*1000 = 3000 + 119 = 3119
		cout << sum << endl;
		j++;
		if(prime(sum)!=1)
		f=1;
		
	}
	if(f==0)
	cout << "The given number is a circular prime number... \n";
	else 
	cout << "The given number is not a circular prime number... \n";
	
	return 0;
}
int power(int a, int b) //
{
	int p=1;
	for(int i=1; i<=b; i++)
	{
		p=p*a;
	}
	return p;
}                     
int prime(int n)             // to find numbers wheather its prime or not
{
	int f=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		f++;
	}
	if(f==1)
		return 1;
	else 
		return 0;
}
int digitcount(int n)        // to count the total digits of a number that was enter by the user
{
	int count=0;
	while(n!=0)
		{
			count++;
			n=n/10;
		}
	return count;
}

