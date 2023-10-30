/*Write a C++ program that reads a list of integers from the user and throws an exception if
any numbers are duplicates*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[n],dup;
	cout<<"Enter size of array : ";
	cin>>n;
	
	cout<<"Enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	try 
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					dup=a[i];
					throw (dup);
				}
			}
		}
	}
	
	catch(int num)
	{
		cout<<"Duplicate number is : "<<num<<endl;
	}
}