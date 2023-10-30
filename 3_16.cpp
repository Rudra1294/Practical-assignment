/*Write a C++ Program to find length of string using strlen() function.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1;
	cout<<"Enter string value : ";
	getline(cin,s1);
	int wcount=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i] == ' ')
		{
			wcount++;
		}
	}
	
	cout<<"Word count : "<<wcount<<endl;
}