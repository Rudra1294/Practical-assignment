/*Write a C++ Program to copy the string using strcpy() function*/
#include<iostream>
using namespace std;
int main()
{
	string s1;
	char s2[20];
	cout<<"Enter first string : ";
	cin>>s1;
	strcpy(s2,s1);
	cout<<"copied string is : "<<s2<<endl;
}