#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter the first number = \n";
	cin >> a;
	cout << "Enter the second number = \n";
	cin >> b;
	cout << "Enter the Third number = \n";
	cin >> c;
	cout << "Result : \n";
	if (a>b && a>c && b>c )
	{
		cout << a << "," << b << "," << c << "--------->> in order " << endl;
	}
	else 
	cout << a << "," << b << "," << c <<  "\t not in order" << endl;
	return 0;
}
