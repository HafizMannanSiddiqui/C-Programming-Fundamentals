 #include<iostream>
 using namespace std;
 int main()
 {
   double pi=0;
   double n=0;
   cout << "Enter the number : \n";
   cin >> n;
   double sum=1,sign= -1;
   int i=1;
   if (n>0)
   {
    while (i<=n)
   {
       sum =sum+sign/((2*i)+1);
       sign = -sign ;
       i++;
   }
   sum=sum*4;
   cout << "The value of pi is \n ";
   cout << sum;
   }
   else
   cout << "You must enter a positive number" ;   return 0;
 }
