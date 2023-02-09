#include<iostream>
using namespace std;
int main()
{
    int n ,i=1, j=0,k=0;
    cout << "Enter a number to print square : ";
    cin >> n ;
    if (n<=0)
    cout << "Error...! Sorrry your input is invalid. Kindly input positive number," ;
    else 
    while(i<=2*n-1)
    {
        k=n;
        if(i<=n)
        {
            j=1;
            while (j<=2*n-1)
            {
                cout << k;
                if (i>j)
                k=k-1;
                if ((i+j)>=(2*n))
                k=k+1;
                j++;
        }
    }
    else if (i>n)
    {
       j=1;
           while(j<=2*n-1)
           {
                 cout << k;
                if (i>j)
                k=k-1;
                if ((i+j)>=(2*n))
                k=k+1;
                j++;
        }
    }
        i++;
        cout << endl ;
    }
return 0 ;
}
