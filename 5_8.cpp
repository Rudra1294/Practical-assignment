/*Write a program to explain the concept of multiple catch statements on above program.*/
#include <iostream>
using namespace std;
int main() 
{
	int n;
	cout << "Enter the number: ";
	cin >>n;
	try 
	{
		if (n<0 || n>=100) 
		{
			throw n;
		}
		if (n==0) 
		{
			throw 'a';
		}
		if (n==1) 
		{
			throw 1.0;
		}
	} 
	catch (int n) 
	{
		cout <<"Invalid number"<<endl;
		return 0;
	} 
	catch (char n) 
	{
		cout <<"Invalid number"<<endl;
		return 0;
	} 
	catch (float n) 
	{
		cout <<"Invalid number"<<endl;
		return 0;
	}
	cout <<"Number: "<<n<<endl;
}