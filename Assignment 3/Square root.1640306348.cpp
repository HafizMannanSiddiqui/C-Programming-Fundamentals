#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
float sqr(float);
int main()
{
	float n;
	double sq, As;
    int  diff = 0;
	ifstream fin;
	ofstream fout;
	fout.open("output.txt");
	fin.open("input.txt");
	if (!fin)
		cout << "Input File is not Found";
		else
	fin >> n;
	while (!fin.eof())
	{
		sq = sqr(n);
		As = sqrt(n);
		diff = As - sq;
		fout << n << "\t\t" << sq << "\t\t\t" << As << "\t\t\t" << diff <<endl;
		fin >> n;
	}
	cout << "File is stored as output."<<endl;
	fin.close();
	fout.close();
	return 0;
}
float  sqr(float n)
{
   float d=0,a=1;
	int i=0;
	while(i<10)
	{
		d = (a + (n / a));
		a = d/ 2;
		i++;
	}
	return a;
}


