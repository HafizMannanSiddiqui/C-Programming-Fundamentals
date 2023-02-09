#include <iostream>
using namespace std;
int main ()
{
	int _5000, _1000, _500, _100, Total;
	cout << "Enter 5000 rupees note : \n" ;
	cin >> _5000; 
	cout << "Enter 1000 rupees note : \n" ;
	cin >> _1000;
	cout << "Enter 500 rupees note : \n" ;
	cin >> _500;
	cout << "Enter 100 rupees note : \n" ;
	cin >> _100;
	Total = 5000 * _5000 + 1000 * _1000 + 500 * _500 + 100 * _100;
	cout << "The total amount in ATM Machine is " << Total << endl;
	return 0;
}
