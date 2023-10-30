/*Write a C++ program (using function overloaded) to sort 5 integer values, or 5 long values, or
5double values.*/
#include<iostream>
using namespace std;
class overload
{
	public:
		int i,j;
		void sort(int n[5])
		{
			int temp;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;++j)
				{
					if(n[i]>n[j])
					{
						temp=n[i];
						n[i]=n[j];
						n[j]=temp	;	
					}
				}
			}
			cout<<"Integer sorting : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<n[i]<<endl;
			}
			
		}
		
		void sort(long n[5])
		{
			int temp;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;++j)
				{
					if(n[i]>n[j])
					{
						temp=n[i];
						n[i]=n[j];
						n[j]=temp	;	
					}
				}
			}
			cout<<"Integer sorting : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<n[i]<<endl;
			}
			
		}
		
		void sort(double n[5])
		{
			int temp;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;++j)
				{
					if(n[i]>n[j])
					{
						temp=n[i];
						n[i]=n[j];
						n[j]=temp	;	
					}
				}
			}
			cout<<"Integer sorting : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<n[i]<<endl;
			}
			
		}
};

int main()
{
	overload obj;
	int arr1[5]={5,3,7,1,4};
	long arr2[5]={9,6,10,8,7};
	double arr3[5]={5.6,3.4,7.0,1.6,4.9};
	
	obj.sort(arr1);
	obj.sort(arr2);
	obj.sort(arr3);
	
	return 0;
}