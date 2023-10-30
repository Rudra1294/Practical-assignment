/*Write a C++ Program to concate two strings using strcat() function*/
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"Enter first string : ";
	cin>>s1;
	cout<<"Enter second string : ";
	cin>>s2;
	strcat(s1,s2);
	cout<<"Concated string is : "<<s1<<endl;
}