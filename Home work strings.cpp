#include <iostream>
#include <string>
using namespace std;
int compare(char);
int main()
{
	int size=20, count;
	char s1[size] = " ";
	char s2[size] = " ";
	cout << "Enter your name in first array : \n";
	cin >> s1;
	cout << "Enter your name in second array : \n";
	cin >> s2;
    compare(s1);
	return 0;
}
int compare(char)
{
	char s1, s2;
	if(s1>s2)
		return 1;
	else if(s2>s1)
		return -1;
	else if(s1==s2)
		return 0;		
}

