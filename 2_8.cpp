/*Write a C++ program to make inline function to find positive/ negative number.*/
#include<iostream>
using namespace std;
inline int check(int n1)
{
	if(n1>0)
		cout<<n1<<" is positive number."<<endl;
	else 
		cout<<n1<<" is negative number."<<endl;
}

int main()
{
	int n;
	cout<<"Enter a number to check odd or even : ";
	cin>>n;
	cout<<endl;
	
	check(n);
	
	return 0;
}