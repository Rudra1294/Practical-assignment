/*Write a program to take a two values from user and illustrate Division by Zero Exception.*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter two values : ";
	cin>>n1>>n2;
	
	try
	{
		int div;
		if(n2==0)
		{
			throw 0;
		}
		div=n1/n2;
		cout<<"Division is : "<<div<<endl;
	}
	
	catch(int mynum)
	{
		cout<<"Cannot be divided because denominator or numerator is zero."<<endl;
	}
}