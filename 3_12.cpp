/*Write a C++ Program to compare two strings using strcmp() function.*/
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"Enter first string : ";
	cin>>s1;
	cout<<"Enter second string : ";
	cin>>s2;
	
	if(s1.compare(s2)==0)
	{
		cout<<"Strings are equal"<<endl;
	}
	else
	{
		cout<<"Strings are not equal";
	}
}