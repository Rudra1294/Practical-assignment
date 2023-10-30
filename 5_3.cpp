/*Write a program to take array values from user and illustrate array index out of bound
exception.*/
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[n],n1;
	cout<<"Enter array size : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter index number : ";
	cin>>n1;
	
	try
	{
		if(n1>=n)
		{
			throw "Error : Out of bound.";
		}
		int num,den,div;
		cout<<"Enter numerator : ";
		cin>>num;
		cout<<"Enter denominator : ";
		cin>>den;
		
		if(den==0)
			throw 0;
		
		a[i]=num/den;
		cout<<a[i]<<endl;
	}
	
	catch(const char* msg)
	{
		cout<<msg<<endl;
	}
	catch(int number)
	{
		cout<<"Cannot be divided by "<<number<<endl;
	}
	
	return 0;
}