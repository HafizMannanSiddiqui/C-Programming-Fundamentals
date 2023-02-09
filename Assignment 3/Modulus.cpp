 #include<iostream>
 #include<cmath>
 using namespace std;
 int mod(int x);
 int main()
 {
     int n;
     cout << "Enter a number for taking mod : \n" ;
     cin >> n;
     mod(n);
 }
 int mod (int n)
 {
    int p=n,m=0;
    cout << "Enter value of Mod to calculate : \n ";
    cin >> m;
    while(p<0)
    {
         p=p+m; 
    } 
    cout << "The mod of " << n << " is " << p << endl; 
}

