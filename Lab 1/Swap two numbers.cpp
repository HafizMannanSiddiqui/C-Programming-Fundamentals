#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	a=5;
	b=10;
	cout << "a = "<< a << "        " << "b = " << b << endl ;
	c=a;
	a=b;
	b=c;
	cout << "a = " << a << "       ";
	cout << "b = " << b ;
	
	return 0;
}
