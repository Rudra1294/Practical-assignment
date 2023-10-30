/*Write a C++ program to enter five numbers using array and rearrange the array in the reverse
order. For eg. Numbers entered are 58324 and after arranging array elements must be 42385.*/
#include <iostream>
using namespace std;
class Reverse 
{
	public:
	void reverse(int arr[5]) 
	{
		int i,rem,rev[5];
		
		for(i=0;i<5;i++)
		{
			cout<<"Five Array elements entered are : "<<arr[i]<<endl;
			rev[i]=0;
		}
		
		for(i=0;i<5;i++)
		{
			while (arr[i]>0) 
			{
				rem=arr[i]%10;
				rev[i]=(rev[i]*10)+rem;
				arr[i]=arr[i]/10;
			}
			cout<<"Reverse is "<<rev[i]<<endl;
		}
	}
};

int main() 
{
	Reverse r;
	int i,arr[5];
	cout<<"Enter five integer numbers : ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;

	r.reverse(arr);

	return 0;
}