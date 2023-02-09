#include <iostream>
using namespace std;
int main ()
{
	int a, b, c, sum, avg;
	cout << "Enter first number : \n";
	cin >> a; 
	cout << "Enter Second number : \n";
	cin >> b;
	cout << "Enter Third number : \n";
	cin >> c;
	sum = a + b + c;
	avg = sum/3;
	cout << "Sum of three numbers is " << sum << endl;
	cout << "The Average of three numbers is " << avg << endl;
	return 0;
}
