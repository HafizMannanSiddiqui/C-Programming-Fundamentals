#include <iostream>
using namespace std;
int main ()
{
	char flvr;
	int  n, bill, gst;
	float fbill;
	cout << "Welcome to the Ice cream Parlour : \n";
	cout << "Enter s for strawbery,  Enter c for Chocolate, Enter v for Vanilla : \n";
	cin >> flvr;
	cout << "Enter the number of scoops you want : \n";
	cin >> n;
	if (flvr == 's')
	{
		bill = n * 130;
		cout << "Your Bill is " << bill << endl;
		gst = (bill * 17)/100;
		fbill = bill + gst ;
		cout << "Yur Bill After 17% discount " << fbill << endl ;
	}
	else if (flvr == 'c')
	{
		bill = n * 110;
		cout << "Your Bill is " << bill << endl;
		gst = (bill * 17)/100;
		fbill = bill + gst ;
		cout << "Yur Bill After 17% discount " << fbill << endl ;
	}
	else if (flvr == 'v')
	{
		bill = n * 90;
		cout << "Your Bill is " << bill << endl;
		gst = (bill * 17)/100;
		fbill = bill + gst ;
		cout << "Yur Bill After 17% discount " << fbill << endl ;
	}
	else 
	cout << "Your entry is wrong try again .. \n";
	
	cout << "Thanks for Coming..\n";
	return 0;
	
}
