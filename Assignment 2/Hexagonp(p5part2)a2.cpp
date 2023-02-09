#include<iostream>
using namespace std;
int main()
{
	int r=0;
	int i=0;
	int j=0,k=0;
	int n;
	cout<<"enter number you want to print in hexagone :"<<endl;
	cin>>n;
	cout<<"enter size of rows you want to create hexagone:"<<endl;
	cin>>r;
	if(r<0)
	cout<<"invalid input"<<endl;
	else
	while(i<r)
	{
		j=r;
		while(j>i)
		{
			cout<<" ";
			j--;
		}
		k=0;
		while(k<=r+j-1)
		{
			cout<<" "<<n;
			k++;
		}
		cout<<endl;
		i++;
		
	}
	i=1;
	while(i<r)
	{
		int j=0;
		while(j<=i)
		{
			cout<<" ";
			j++;
		}
		k=0;
		while(k<=2*r-j-1)
		{
			cout<<" "<<n;
			k++;
		}
		cout<<endl;
		i++;
	}
return 0;
}
