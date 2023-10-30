/*Write a C++ program to find the sum of individual digits of a positive integer arrays.*/
#include<iostream>
using namespace std;
class calculate
{
	public :
		int i,rem;
	void calc(int n1,int arr1[])
	{
		int sum[n1], dup[n1];
		for(i=0;i<n1;i++)
		{
			cout<<"Array elements are :"<<arr1[i]<<endl;
			dup[i]=arr1[i];
			sum[i]=0;
		}
		
		for(i=0;i<n1;i++)
		{
			cout<<"Array elements of duplicate are :"<<dup[i]<<endl;
			
		}
		
		for(i=0;i<n1;i++)
		{
			while(arr1[i] >0)
			{
			rem=arr1[i]%10;
			sum[i]=sum[i]+rem;
			arr1[i]=arr1[i]/10;
			}
			cout<<"Sum of "<<i<<" number is : "<<sum[i]<<endl;
			
		}
	}
};

int main()
{
	calculate c;
	int n,i;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"Enter Array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	c.calc(n,arr);
	
	return 0;
}