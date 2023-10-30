/*Write a program to read 10 integers in an array. Find the largest and smallest number.*/
#include<iostream>
using namespace std;
class operation
{
	public :
		int i,s,l;
	void smallest(int arr[])
	{
		s=arr[0];
		for(i=1;i<10;i++)
		{
			if(s>arr[i])
				s=arr[i];
		}
		cout<<"Smallest number is : "<<s<<endl;
	}
	
	void greatest(int arr[])
	{
		l=arr[0];
		for(i=1;i<10;i++)
		{
			if(l<arr[i])
				l=arr[i];
		}
		cout<<"Largest number is : "<<l<<endl;
	}
};
int main()
{
	operation o;
	int i,arr[10];
	cout<<"Enter 10 integer array elements : ";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	o.smallest(arr);
	o.greatest(arr);
	
	return 0;
}