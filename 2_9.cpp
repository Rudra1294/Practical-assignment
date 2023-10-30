/*Write a C++ program that uses recursive function fibo() that generates a Fibonacci series
containing N elements.*/
#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else if(n==1)
		return 1;
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}

int main()
{
	int n;
	cout<<"Enter number of elements to print : ";
	cin>>n;
	cout<<endl;
	
	cout<<"Fibonacci series is : ";
	for(int i=0;i<n;i++)
	{
		cout<<fibo(i)<<" ";
	}
	cout<<endl;
	
	return 0;
}