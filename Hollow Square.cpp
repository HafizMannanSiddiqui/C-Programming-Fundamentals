#include <iostream>
using namespace std;
int main()
{
	int n,w;
	cout << "Enter size of square : \n ";
	cin >> n;
	cout << "Enter width of square : \n ";
	cin >> w;
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1 ; j<=w ; j++)
		{
			if(i==1 || i==w || j==1 || j==w)
			cout << j << " ";
			else
			cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
