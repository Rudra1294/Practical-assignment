/*Write a C++ program to sort a list of names in ascending order using arrays.*/
#include<iostream>
using namespace std;
class sort
{
	public:
		int i,j;
		string temp;
	void ascending(int n1,string arr1[])
	{
		cout<<"Array elements are : "<<endl;
		for(i=0;i<n1;i++)
		{
			cout<<arr1[i]<<endl;
		}
		
		for(i=0;i<n1;i++)
		{
			for(j=i+1;j<n1;j++)
			{
				if(arr1[i]>arr1[j])
				{
					temp=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp;
				}
			}
		}
		
		cout<<"Number sorting in ascending order is : "<<endl;
		for(i=0;i<n1;i++)
		{
			cout<<arr1[i]<<endl;
		}
	}
};
int main()
{
	sort s;
	int n,i;
	cout<<"Enter number of elements in array : ";
	cin>>n;
	string arr[n];
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	s.ascending(n,arr);
	
	return 0;
}