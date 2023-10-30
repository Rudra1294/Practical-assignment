/*Write a C++ program to sort a list of numbers in ascending order.*/
#include<iostream>
using namespace std;
class ascending
{
	public :
		int i,j,temp;

	void sort(int n,int arr[])
	{
		for(i=0;i<n;i++)
		{
			cout<<"Array elements are : "<<arr[i]<<endl;
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		
		cout<<"Number sorting in ascending order is : "<<endl;
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main()
{
	ascending a;
	int n1,row;
	cout<<"Enter size of Array : ";
	cin>>n1;
	cout<<endl;
	int arr1[n1];
	cout<<"Enter array elements :"<<endl;
	for(row=0;row<n1;row++)
	{
		cout<<"Enter array "<<row<<" : ";
		cin>>arr1[row];
	}
	
	a.sort(n1,arr1);
}