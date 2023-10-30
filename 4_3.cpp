/*Write a program to create a class template for the ‘Array’ class.*/
#include<iostream>
using namespace std;
template<class A>
class array
{
	public:
		A i,n1;
		A arr1[];
	array(A n,A arr[])
	{
		n1=n;
		for(i=0;i<n1;i++)
		{
			arr1[i]=arr[i];
		}
	}
	
	void display()
	{
		for(int i=0;i<n1;i++)
		{
			cout<<"Array elements are : "<<arr1[i]<<endl;
		}
	}
};
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
	
	array<int> d(n,arr);
	d.display();
	
	return 0;
}


 