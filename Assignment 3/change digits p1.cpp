#include<iostream>
using namespace std;
long digit(long);
int main()
{
long n=0;
cout << "************** Welcome to Change digits program ***************** \n";
cout << "enter the number for manipulation which must be less then 10 digits : \n ";
cin >> n;
if (n >= 1000000000)
cout << "Wrong input .. \n";
else
cout << digit(n);
}
long digit(long a)
{
int p=0, count=0, count1=0, m=0;
long r=0, rev=0;
cout << "enter the position you want to replace the number : \n";
cin >> p;
cout << "enter the digit to manupulate : \n";
cin >> m;
long num = a;
while(num != 0)
{
    int q;
    q = num%10;
    count++;
    num = num/10;
}
while(a!=0)
{
int i = a%10;
count1++;
if(count-p == count1)
{
i = m;
if(a<0)
i =- m;
}
r = (r*10)+i;
a = a/10;
}
while(r!=0)
{
int c = r%10;
rev = (rev*10)+c;
r = r/10;
}
return rev;
}
