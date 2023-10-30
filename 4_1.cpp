/*Write a C++ Program to create a function template for finding a maximum value contained
in array.*/
#include<iostream>
using namespace std;
template <class M>
M Max(M arr[], int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Maximum of array is : "<<max<<endl;
}
int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"Enter Array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	Max(arr,n);
	
	return 0;
}