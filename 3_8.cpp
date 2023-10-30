/*Write a C++ Program to print Addition of two matrices.*/
#include<iostream>
using namespace std;
class addition
{
	public:
		int i;
	void 	print(int n,int arr1[],int arr2[])
	{
		int add[n];
		for(i=0;i<n;i++)
		{
			cout<<"First array elements are : "<<arr1[i]<<endl;
		}
		
		for(i=0;i<n;i++)
		{
			cout<<"Second array elements are : "<<arr2[i]<<endl;
		}
		
		for(i=0;i<n;i++)
		{
			add[i]=arr1[i]+arr2[i];
		}
		
		for(i=0;i<n;i++)
		{
			cout<<"Addition of array "<<i<<" is : "<<add[i]<<endl;
		}
	}
};
int main()
{
	addition a;
	int i,n;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	int arr1[n],arr2[n];
	
	cout<<"Enter First array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	
	cout<<"Enter second array elements :";
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	
	a.print(n,arr1,arr2);
}