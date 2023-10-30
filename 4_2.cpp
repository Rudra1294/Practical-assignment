/*Write a C++ Program to to add two numbers with use of template function.*/
#include<iostream>
using namespace std;
template<class A>
A Add(A a,A b)
{
	A result=a+b;
	return result;
}
int main()
{
	int n1,n2;
	cout<<"Enter two integer number : ";
	cin>>n1>>n2;
	cout<<endl;
	
	float n3,n4;
	cout<<"Enter two float number : ";
	cin>>n3>>n4;
	cout<<endl;
	
	Add(n1,n2);
	Add(n3,n4);
	cout<<"Addition of two number is : "<<Add(n1,n2)<<endl;
	cout<<"Addition of two number is : "<<Add(n3,n4)<<endl;

	return 0;
}