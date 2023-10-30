/*Write a program to create template class to find simple interest of integer and float value
using function template.*/
#include<iostream>
using namespace std;
template<class T>
T find_interest(T p,T r,T t)
{
	T interest=0;
	interest=(p*r*t)/100;
	return interest;
}
int main()
{
	int n1,n2,n3;
	cout<<"Enter principal amount (integer value) : ";
	cin>>n1;
	cout<<"Enter rate of interest (integer value) : ";
	cin>>n2;
	cout<<"Enter time period (integer value) : ";
	cin>>n3;
	cout<<endl;
	
	float n4,n5,n6;
	cout<<"Enter principal amount (float value) : ";
	cin>>n4;
	cout<<"Enter rate of interest (float value) : ";
	cin>>n5;
	cout<<"Enter time period (float value) : ";
	cin>>n6;
	cout<<endl;
	
	cout<<"Simple interest for integer value is : "<<find_interest(n1,n2,n3)<<endl;
	cout<<"Simple interest for float value is : "<<find_interest(n4,n5,n6)<<endl;
	
	return 0;
}