/*Write a C++ program to take a account no, balance and withdraw amount. If amount is less
than balance then raise an exception.*/
#include<iostream>
using namespace std;
int main()
{
	int acc,bal,amt;
	cout<<"Enter account number : ";
	cin>>acc;
	cout<<"Enter balance in account : ";
	cin>>bal;
	cout<<"Enter withdraw amount : ";
	cin>>amt;
	
	try
	{
		if(bal<amt)
		{
			throw 0;
		}
	}
	
	catch(int num)
	{
		cout<<"Error : Balance is less than withdraw amount"<<endl;
	}
	
	do
	{
		cout<<"Enter withdraw amount : ";
		cin>>amt;
	}
	while(bal<amt);
	
	return 0;	
}