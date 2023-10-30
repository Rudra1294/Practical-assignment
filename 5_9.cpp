/*Write a C++ program to input a age from user, If age is greater than 18 then eligible for
licence otherwise raise an exception and provide a appropriate message.*/
#include <iostream>
using namespace std;

int main() 
{
	int age;
	cout<<"Enter age : ";
	cin>>age;
	
	try 
	{
		if (age >= 18) 
		{
			cout << "Access granted - you are old enough.";
		} 
		else 
		{
			throw (age);
		}
	}
	catch (int myNum) 
	{
		cout << "Access denied - You must be at least 18 years old.\n";
	}
	return 0;
}
