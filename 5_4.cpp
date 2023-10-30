/*Write a C++ program which asks the user to input a number which should be greater than
equal to zero and should be less than to 100, If not raise an exception.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter positive number : ";
	cin>>n;
	
	try
	{
		if(n<0)
			throw "Number should not be negative.";
		if(n>100)
			throw 0;
	}
	
	catch(const char* msg)
	{
		cout<<msg<<endl;
	}
	catch(int greater)
	{
		cout<<"Number should be less than 100."<<endl;
	}
	
	return 0;
}