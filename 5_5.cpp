/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ans;
	char op;
	
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	
	cout<<"Enter operator (+,-,*,/)";
	cin>>op;
	
	try
	{
		if(op!='+' && op!='-' && op!='*' && op!='/')
		{
			throw invalid_argument("Invalid Operator");
		}
		
		if(n2==0)
		{
			throw runtime_error("Denominator cannot be 0");
		}
		
		switch(op)
		{
			case '+':
				ans=n1+n2;
				break;
			case '-':
				ans=n1-n2;
				break;
			case '*':
				ans=n1*n2;
				break;
			case '/':
				ans=n1/n2;
				break;
		}
		cout<<"Result : "<<ans<<endl;
	}
	
	catch(const invalid_argument& e)
	{
		cout<<"Error :"<<e.what()<<endl;
	}
	catch(const runtime_error& e)
	{
		cout<<"Error :"<<e.what()<<endl;
	}
	
	return 0;
}