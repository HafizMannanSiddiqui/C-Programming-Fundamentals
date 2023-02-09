#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
void Input( int terms, int deg [], int coef []); 
void FileInput( int &terms, int deg [], int coef []); 
int Solve( int terms, int deg [], int coef [], char variable);
void Add ( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] );
void Multiply( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] );
void Subtract( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] );
void Print(int terms, int deg [], int coef [], char variable);
void Equal(int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef []);
int menu(int, int, int, int);

void Input( int terms, int deg [], int coef []) 
{ 
	int t;
	deg [t];
	coef [t];
	for (int i=0; i<t; i++)
	{  
		cin >> deg[i] ;
		cout << endl;
	}
}
void FileInput( int &terms, int deg [], int coef [])
{
	int n=0;
	string st;
	ifstream fin;
	ofstream fout;
	fin.open("polynomial.txt");
	fout.open("polynomial output.txt");
	if (!fin)
		cout << "Input File is not Found";
		else
	fin >> n;
	terms = n; 
	for (int i=0; i<terms+1; i++)
	{
		deg[i] = n;
		fin >> n;
	}
	for (int i=0; i<terms; i++)
	{
		fin >> n;
		coef[i] = n;
	}
	cout << "File is stored as input."<<endl;
	fin.close();
	fout << "number of terms = " << n << endl;
} 
int Solve( int terms, int deg [], int coef [], char variable)
{
	cout << "Enter a variable for Polynomial : (and 0 for exit)\n";
	cin >> variable;	
	int t;
	deg [t];
	coef [t];
	for (int i=0; i<t; i++)
	{  
		cin >> deg[i] ;
		cout << endl;
	}
}
void Add ( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] )
{
	cout << "Enter number of terms in first array : \n";
	cin >> aterms;
	adeg [aterms];
	acoef [aterms];
	rdeg [aterms];
	rcoef [aterms];
	cout << "Enter the degreee of polynomials of first array : \n";
	for (int i=1; i<aterms; i++)
	{  
		cin >> adeg[i] ;
	}
	cout << "Enter the coefficients of first array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	cout << "Enter number of terms in second array : \n";
	cin >> bterms;
	adeg [bterms];
	acoef [bterms];
	cout << "Enter the degreee of polynomials of Second array : \n";
	for (int i=1; i<bterms; i++)
	{  
		cin >> bdeg[i] ;
	}
	cout << "Enter the coefficients of Second array: \n";
 		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	if (aterms == bterms)
	{
	for(int i=0; i < aterms ; i++)
	{
		int sum=0;
		sum = adeg[i] + bdeg[i];
		rdeg[i] = sum;
	}
	cout << "The sum of degrees of polynomial : \n";
	for (int i=1; i<aterms; i++)
	cout << rdeg[i] << " ";
	cout << endl;
	for(int i=0; i<bterms ;i++)
	{
		int sum=0 ;
		sum = acoef[i] + bcoef[i];
		rcoef[i] = sum ;
	}
	cout << "The sum of co-efficients of polynomial : \n";
	for (int i=0; i<aterms; i++)
	{
	cout << rcoef[i] << " ";
	}
	cout << endl;
}
	else 
	cout << "The number of terms of both arrays are not same : \n";
}
void Multiply( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] )
{
	cout << "Enter number of terms in first array : \n";
	cin >> aterms;
	adeg [aterms];
	acoef [aterms];
	rdeg [aterms];
	rcoef [aterms];
	int Mul1=0, Mul2=0;
	cout << "Enter the degreee of polynomials of first array : \n";
	for (int i=1; i<aterms; i++)
	{  
		cin >> adeg[i] ;
	}
	cout << "Enter the coefficients of first array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	cout << "Enter number of terms in second array : \n";
	cin >> bterms;
	adeg [bterms];
	acoef [bterms];
	cout << "Enter the degreee of polynomials of Second array : \n";
	for (int i=1; i<bterms; i++)
	{  
		cin >> bdeg[i] ;
	}
	cout << "Enter the coefficients of Second array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	if (aterms == bterms)
	{
	for(int i=0; i < aterms ; i++)
	{
		int Sum1=0;
		Mul1 = adeg[i] * bdeg[i];
		Sum1 += Mul1;
		rdeg[i] = Sum1;
	}
	cout << "The multiplication of degrees of polynomial : \n";
	for (int i=1; i<aterms; i++)
	{
	cout << rdeg[i] << " ";
	}
	cout << endl;
	for(int i=0; i<aterms; i++)
	{
	rcoef[i] = acoef[i] * bcoef[i];
	}
	cout << "The Multiplication of co-efficients of polynomial : \n";
	for (int i=0; i<aterms; i++)
	{
	cout << rcoef[i] << " ";
	}
	cout << endl;
	}
	else 
	cout << "The number of terms of both arrays are not same : \n";
}
void Subtract( int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [], int rterms, int rdeg [], int rcoef [] )
{
	cout << "Enter number of terms in first array : \n";
	cin >> aterms;
	adeg [aterms];
	acoef [aterms];
	rdeg [aterms];
	rcoef [aterms];
	cout << "Enter the degreee of polynomials of first array : \n";
	for (int i=1; i<aterms; i++)
	{  
		cin >> adeg[i] ;
	}
	cout << "Enter the coefficients of first array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	cout << "Enter number of terms in second array : \n";
	cin >> bterms;
	adeg [bterms];
	acoef [bterms];
	cout << "Enter the degreee of polynomials of Second array : \n";
	for (int i=1; i<bterms; i++)
	{  
		cin >> bdeg[i] ;
	}
	cout << "Enter the coefficients of Second array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	if (aterms == bterms)
	{
	for(int i=0; i < aterms ; i++)
	{
		rdeg[i] = adeg[i]- bdeg[i];
	}
	cout << "The difference of degrees of polynomial : \n";
	for (int i=1; i<aterms; i++)
	{
		cout << rdeg[i] << " ";
	}
	cout << endl;
	for(int i=0; i < aterms ; i++)
	{
		rcoef[i] = acoef[i]- bcoef[i];
	}
	cout << "The difference of co-efficients of polynomial : \n";
	for (int i=0; i<aterms; i++)
	{
		cout << rcoef[i] << " ";
	}
	cout << endl;
	}
	else 
	cout << "The number of terms of both arrays are not same : \n";	
}
void Print(int terms, int deg [], int coef [], char variable)
{
	cout << "Enter number of terms in first array : \n";
	cin >> terms;
	cout << "Enter the degreee of polynomials of an array : \n";
	for (int i=1; i<terms; i++)
	{  
		cin >> deg[i] ;
	}
	cout << "Enter the coefficients of an array: \n";
		for(int j=0; j<terms ; j++)
		{	
			cin >> coef[j] ;
		}
	//Solve(terms, deg, coef , variable);
	for (int i=0; i<terms; i++)
	cout << coef[i] << "x" << "^" << deg[i] << "+" ;
	
}  
void Equal(int aterms, int adeg [], int acoef [], int bterms, int bdeg [], int bcoef [])
{
	cout << "Enter number of terms in first array : \n";
	cin >> aterms;
	adeg [aterms];
	acoef [aterms];
	cout << "Enter the degreee of polynomials of first array : \n";
	for (int i=1; i<aterms; i++)
	{  
		cin >> adeg[i] ;
	}
	cout << "Enter the coefficients of first array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	cout << "Enter number of terms in second array : \n";
	cin >> bterms;
	adeg [bterms];
	acoef [bterms];
	cout << "Enter the degreee of polynomials of Second array : \n";
	for (int i=1; i<bterms; i++)
	{  
		cin >> bdeg[i] ;
	}
	cout << "Enter the coefficients of Second array: \n";
		for(int j=0; j<aterms ; j++)
		{	
			cin >> acoef[j] ;
		}
	if (aterms == bterms)
	cout << "Both arrays are equal  \n";
	else 
	cout << "both are not equal \n";
}
int menu(int t, int d, int c, int menu)
{
	cout << "******************** Welcome in Polynomial Calculator Program ******************** \n\n\n" ;
	cout<<"Enter 0 to Exit, Enter 1 for input from user, Enter 2 for input from file, Enter 3 for solve, Enter 4 for addition, \n"; 
	cout <<"Enter 5 for multiplication, Enter 6 for Subtraction, Enter 7 for printing input, Enter 8 for Equality of polynomials  :\n";
	cout << "^^^^^^^^^^^^ Number of Terms Must be same In each array ^^^^^^^^^^^^ : \n" ; 
  	cout<<"entre your choice in menu : "<<endl;
  	cin>>menu; 
	if(menu>=0 && menu <=8)
	{
		if 
		(menu == 0)
		{
			cout << "You Terminated the Program \n Exit. ";
		}
		else if (menu == 1)
		{
 			int deg[15], coef[15], terms;
 			cout << "Enter number of terms you want in a polynomial : \n";
			cin >> t;
			cout << "Enter the degree of polynomials (Make Sure that degree can not be repeated and written in ascending order) : \n";
			cin >> d;
			for(int i=1; i<t-1 ; i++)
			{
				cin >> d ;
			}
			cout << "Enter the coefficients : \n";
			cin >> c;
			for(int j=1; j<t ; j++)
			{
				cin >> c ;
			}
			Input (terms, deg, coef);
		}
		else if (menu == 2)
		{
			int deg[15], coef[15], terms;
		 	FileInput(terms, deg, coef);
		}
		else if (menu == 3)
		{
			int terms, deg[15], coef[15], variable;
			Solve(terms, deg, coef , variable);
		}
		else if (menu == 4)
		{
			int adeg[t], acoef[t], bdeg[t], bcoef[t], rdeg[t], rcoef[t], aterms, bterms, rterms;
			Add (aterms, adeg , acoef, bterms, bdeg, bcoef, rterms, rdeg, rcoef );
		}
		else if (menu == 5)
		{
			int adeg[t], acoef[t], bdeg[t], bcoef[t], rdeg[t], rcoef[t], aterms, bterms, rterms;
			Multiply (aterms, adeg , acoef, bterms, bdeg, bcoef, rterms, rdeg, rcoef );
		}
		else if (menu == 6)
		{
			int adeg[t], acoef[t], bdeg[t], bcoef[t], rdeg[t], rcoef[t], aterms, bterms, rterms;
			Subtract (aterms, adeg , acoef, bterms, bdeg, bcoef, rterms, rdeg, rcoef );
		}
		else if (menu == 7)
		{
			int terms, variable, deg[15], coef[15];
			Print(terms, deg, coef, variable);
		}
		else if (menu == 8)
		{
			int aterms, adeg[15], acoef[15], bterms, bdeg[15], bcoef[15];
			Equal(aterms, adeg, acoef, bterms, bdeg, bcoef);
		}
	}
	else 
	cout << "You Enter Wrong Menu.. \nKindly Input Menu between 0 to 7 \n";
}
int main ()
{
	int t, d, c, m;
	menu(t, d, c, m);
	return 0;
}
