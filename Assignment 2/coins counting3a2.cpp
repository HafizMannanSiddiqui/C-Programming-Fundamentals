#include<iostream>
using namespace std;
int main()
{
	int onerupee=0,tworupee=0,fiverupee=0,amount;
	int five=0,two=0,one=0;
	cout<<"Enter Total amount in rupees : \n " ;
	cin>>amount;
	cout<<"Enter total Five rupee coins : \n" ;
	cin>>fiverupee;
	cout<<"Enter total Two rupee coins : \n" ;
	cin>>tworupee;
	cout<<"Enter total One rupee coins : \n " ;
	cin>>onerupee;
	int coinamount=0;
	coinamount=(fiverupee*5)+(tworupee*2)+(onerupee*1);
    if(coinamount>=amount)
	{ 
	while(fiverupee>0 && amount>=5)
	{
		amount=amount-5;
		fiverupee--;
		five++;
	
	}
	cout<<"No of Five rupee coins used:"<<"  "<<five<<endl;
	while(tworupee>0 && amount>=2)
	{
		amount=amount-2;
	    tworupee--;
		two++;
		
	}
	cout<<"No of Two rupee coins used:"<<"  "<<two<<endl;
	while(onerupee>0 && amount>=1)
	{
		amount=amount-1;
	    onerupee--;
		one++;
	}
	cout<<"No of One rupee coins used:"<<"  "<<one<<endl;
}
if ((five+two+one) == amount)
cout << "The combination exist \n";
else
{
cout<<"Ooops.... 'I'm very sorry' the combination is not exist.."<<endl;
}
return 0;	
}
