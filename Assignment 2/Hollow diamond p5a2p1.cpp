#include<iostream>
using namespace std;
int main()
{
cout<<"Enter size of  Daimond:  ";
  int n;
  cin>>n;
   int z=1,j;
  for ( int i=n ; i>j ; i-- )
  {
    for (int j=0; j<=i ; j++)
    {
      cout<< " " ; 
    }
      cout<< i ;

if ( i>0)
    {
      for ( int k=2 ; k<z; k++)
      {
        cout<<" ";
      }
      z+=2;
      if(i != n)
      cout<< i ;
    }
    cout<<endl; 
  }
  z-=4;
  for (int i=2 ; i<=n ; i++)
  {
    for (int j=0; j<=i; j++)
    {
      cout<<" ";
    }
      cout<< i ;

    for (int k=3; k<=z; k++)
    {
      cout<<" ";
    }
    z-=2;
    if (i!=n)
    {
      cout<< i ;
    }
    cout<<endl;
  }
return 0;
}
