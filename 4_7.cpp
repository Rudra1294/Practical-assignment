/*Write a C++ Program to display largest among two numbers using function templates. Pass
Integer, Float and Character as parameter to the template.*/
#include<iostream>
using namespace std;
template<class A>
A Large(A& n1,A& n2)
{
	  return (n1 > n2) ? n1 : n2;
}
int main()
{
	int i1,i2;
	cout<<"Enter two integer number : ";
	cin>>i1>>i2;
	cout<<endl;
	
	float f1,f2;
	cout<<"Enter two float number : ";
	cin>>f1>>f2;
	cout<<endl;
	
	char c1,c2;
	cout<<"Enter two integer number : ";
	cin>>c1>>c2;
	cout<<endl;
	
	cout << Large(i1, i2) <<" is larger." << endl;
	cout << Large(f1, f2) <<" is larger." << endl;
	cout << Large(c1, c2) <<" is larger." << endl;

	return 0;
}