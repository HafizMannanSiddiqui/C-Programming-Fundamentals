#include <iostream>
using namespace std ;
void sum(int, int);
int main ()
{
	int a,  b, c;
	cout << "Enter first value : \n ";
	cin >> a ;
	cout << "Enter second value : \n ";
	cin >> b ;
	sum(a, b);
}
void sum (int a, int b)
{
	int c ;
	c = a + b ;
	cout << "Sum of " << a << " + " << b << " = " <<  c ;
}
