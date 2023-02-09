#include <iostream>
using namespace std;
int main()
{
	int array[1000][10];
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << "|__|";
        }
        cout <<endl;
    }
}
