/*Write a C++ program that will ask user to input two numbers and check whether values are
equal or not using assignment operator*/
#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	cout<<endl;
	
	if(n1==n2)
		cout<<"Both the values are same"<<endl;
	else
		cout<<"Both the values are not same"<<endl;
}