/*Write a C++ Program to addition and subtraction of two values using Constructor.*/
#include<iostream>
using namespace std;
class operate
{
	public:
		operate(int n1,int n2)
		{
			cout<<"Addition is : "<<n1+n2<<endl;
			cout<<"Subtraction is : "<<n1-n2<<endl;
		}
};

int main()
{
	int a,b;
	cout<<"Enter two values : ";
	cin>>a>>b;
	cout<<endl;
	operate(a,b);
}