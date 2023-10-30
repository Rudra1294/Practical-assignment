/*Write a program to show values of different data types using templates and constructor*/
#include<iostream>
using namespace std;
template <class A> 
class display
{
	display(A n1,A n2, A n3)
	{
		cout<<"Integer value is : "<<n1<<endl;
		cout<<"Float value is : "<<n2<<endl;
		cout<<"Character value is : "<<n3<<endl;
	}
};
int main()
{
	display d;
	
	int n1;
	cout<<"Enter integer value";
	cin>>n1;
	cout<<endl;
	
	float n2;
	cout<<"Enter float value";
	cin>>n2;
	cout<<endl;
	
	char n3;
	cout<<"Enter char value";
	cin>>n3;
	cout<<endl;
	
	return 0;
}