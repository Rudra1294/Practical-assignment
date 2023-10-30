/*Write a C++ Program to add, subtract, multiply and divide two numbers using class
template.*/
#include<iostream>
using namespace std;
template<class A>
class calc
{
	public:
		A num1,num2;
	calc(A n1, A n2)
	{
		num1=n1;
		num2=n2;
	}
	void display()
	{
		cout<<"Addition is : "<<num1+num2<<endl;
		cout<<"Subtraction is : "<<num1-num2<<endl;
		cout<<"Multiplication is : "<<num1*num2<<endl;
		cout<<"Division is : "<<num1/num2<<endl;
	}
};
int main()
{
	int n1,n2;
	cout<<"Enter two number : ";
	cin>>n1>>n2;
	cout<<endl;
	
	calc<int> intd(n1,n2);
	intd.display();
	
	return 0;
}