/*Write a C++ program to make inline function to find odd/even.*/
#include<iostream>
using namespace std;
inline int odd(int n1)
{
	if(n1%2==0)
		cout<<n1<<" is even number."<<endl;
	else
		cout<<n1<<" is odd number."<<endl;
}

int main()
{
	int n;
	cout<<"Enter a number to check odd or even : ";
	cin>>n;
	cout<<endl;
	
	odd(n);
	
	return 0;
}