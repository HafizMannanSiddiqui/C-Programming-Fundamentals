#include<iostream>
using namespace std;
int main()
 {
  int pick = 0;
  int toothpicks=23;
  cout <<"****Welcome to the Toothpick game**** \n";
	while(toothpicks>0)
	{
		cout << "toothpicks left: " << toothpicks << endl;
		cout <<"Please pick up your toothpick. The toothpicks must between 1 and 3 : \n";
	    cin >> pick;
			while (pick >= 4 || pick <= 0 || pick > toothpicks) 
  			{
  			  	cout<< "Please enter a correct value." <<endl;
 		      	cout <<"Please pick up your toothpick. The toothpicks must between 1 and 3 : \n";
			  	cin >> pick; 
  			}
   			toothpicks = toothpicks - pick;
		if (toothpicks == 0)
  		  	cout << "OOOOPs....You loose the game (Human loose)\n";
  		else 
  		{
   		    	cout << "toothpicks left: " << toothpicks << endl;
  		  	if  (toothpicks > 4)
   	   	  		pick = 4 - pick;
   			else if (toothpicks >= 2 && toothpicks <= 4)
     	 		pick = toothpicks - 1;
    		else if (toothpicks == 1)
    	  		pick = 1;
   				cout << "Computer picks " << pick << " toothpicks\n";
   			 	toothpicks = toothpicks - pick;
   			if  (toothpicks == 0)
 			 	cout << " Congratulations....!!! 'You win the Game;-)' Computer loose\n";
  		}
    }
 return 0; 
}
