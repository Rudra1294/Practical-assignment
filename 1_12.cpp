/*Write a C++ program to check larger of two numbers using Ternary operator*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,max;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	cout<<endl;
	
	max=(n1>n2)? n1 : n2 ;
	
	cout<<"Largest number is : "<<max<<endl;
}