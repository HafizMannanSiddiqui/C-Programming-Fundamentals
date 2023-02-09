#include <iostream>
using namespace std;
int main()
{
	int n, d1, d2, d3, r1, r2, r3, result;
	cout << "Enter a number : \n ";
	cin >> n;
	if (n>0 && n<999)
	{
		d1 = n % 100;
		d1 = d1 % 10;
		r1 = d1 * d1 * d1;
		d2 = n / 10;
		d2 = d2 % 10;
		r2 = d2 * d2 * d2;
		d3 = n / 100;
		r3 = d3 * d3 *d3;
		result = r1 + r2 + r3;
	}
	if (result == n)
	cout << "Number is armstrong ... \n" ;
	else
	cout << "number is not an armstrong ... \n";
	return 0;
	
}
