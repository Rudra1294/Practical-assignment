/*Write a program to input n integer numbers and display highest and second highest number.
Also handle the different exceptions possible to be thrown during execution.*/
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter numbers to be entered";
	cin>>n;
	int a[n];
	cout<<"Enter numbers";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	
	int highest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>highest)
		{
			highest=a[i];
		}
	}
	
	int sechighest=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>sechighest && a[i]<highest)
		{
			sechighest=a[i];
		}
	}
	
	cout<<"Highest number is : "<<highest<<endl;
	cout<<"Second highest number is : "<<sechighest<<endl;
	
	try
	{
		if(highest == sechighest)
			throw 0;
	}
	
	catch(...)
	{
		cout<<"Heighest and Second Heighest values are same"<<endl;
	}
}