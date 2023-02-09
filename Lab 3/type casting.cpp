#include <iostream>
using namespace std;
int main()
{
	double num_double = 3.56;
	cout << "Num double = " << num_double << endl;
	int num_1 = double (num_double);
	cout << "Num_1 = " << num_1 << endl;
	float num_2 = double (num_double);
	cout << "Num_2 = " << num_2 << endl;
	return 0;
}
