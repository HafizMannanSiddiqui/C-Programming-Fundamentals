#include<iostream>
using namespace std;
using namespace std;
int fact(int);
int npr(int,int);
int ncr(int,int);
int NCR(int,int);
int menu(int,int,int);
	int main()
	{
		int c , n , r;	
		menu(n,r,c);
	}
	int fact(int n) 
	{ 
		int fact=1 , a; 
   		 if(n>=0) 
		    {
 				for(int i = n ; i >= 2 ; i--) 
        			fact *= i;
  		  		cout << "The factorial of the number " << n << " is " << fact << endl;
			}
    	return fact;
 	} 
	int npr(int n,int r)
	{	  
		int j=0, npr;
		j=n-r;
		npr = fact(n)/fact(j);
		cout << "Number of permutation are given below : \n" << npr << endl;
	    return npr ;
	} 
	int ncr(int n,int r)
	{ 
		int j=0, ncr;
		j=n-r;
		ncr = fact(n)/fact(j)*fact(r); 
		cout << "Number of combinations are given below : \n" << ncr << endl;
   		return ncr;
	}  
	int NCR(int n,int r) 
	{ 
		int NCR;
		NCR = npr(n,r)/fact(r);
		cout << "Number of combinations with permutation are given below : \n" << NCR << endl;
   		return NCR;
	} 
	int  menu(int n,int r,int menu)
	{		
  		cout<<"Enter 1 for factorial,2 for npr ,3 for ncr , 4 for ncr using npr, 5 for termination :\n";
  		cout<<"entre your choice in menu "<<endl;
  		cin>>menu; 
		if(menu>0 && menu<=5)
		{	
			if (menu == 1)
  		    {
   				cout<<"entre the first value : \n ";
    			cin>>n; 
   				if(n<0)
				cout<<"fact of -ve number is not possible"<<endl;
    				fact(n);
  			}
  			else if (menu == 2)
  			{
      			cout<<"entre the first value : \n ";
      			cin>>n; 
     			cout<<"entre the second value : \n ";
      			cin>>r;	 
     	 		npr(n , r);
  			}
  			else if (menu == 3)
 			{
      			cout<<"entre the first value : \n ";
      			cin>>n; 
      			cout<<"entre the second value : \n ";
      			cin>>r; 
  			    NCR(n, r);
 			}
   			else if (menu == 4)
  			{
      			cout<<"entre the first value : \n ";
      			cin>>n; 
      			cout<<"entre the second value : \n ";
      			cin>>r; 
      			ncr(n, r);
  			}
  			else if (menu == 5)
  			{
      			cout << "Exit ";
  			}
		}
	else 
 	cout << "You must Enter value between 1 to 5" ;
} 				
