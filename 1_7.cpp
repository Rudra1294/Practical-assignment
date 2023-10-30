/*Write a C++ program to check whether the integer entered by user is positive, negative or
zero using nested if-else.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<endl;
	
	if(n>0)
		cout<<"It is positive number."<<endl;
	else if(n<0)
		cout<<"It is negative number."<<endl;
	else
		cout<<"It is zero."<<endl;
	
	return 0;
}