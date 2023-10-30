/*Write a C++ Program to find length of string using strlen() function.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1;
	cout<<"Enter string value : ";
	cin>>s1;
	
	int len=strlen(s1);
	cout<<"Length of string is : "<<len<<endl;
	
	return 0;
}