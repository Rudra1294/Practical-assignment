/*Write a C++ Program to print Multiplication of two matrices.*/
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],mul[10][10];
	int i,j,k,r1,c1,r2,c2;
	
	cout<<"Enter rows and columns for 1st array : ";
	cin>>r1>>c1;
	
	cout<<"Enter rows and columns for 2nd array : ";
	cin>>r2>>c2;
	
	if(c1!=r2)
	{
		cout<<"Columns of 1st array and rows of second array should be same";
	}
	
	cout<<"Enter elements of 1st array : ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter elements of 2nd array : ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>b[i][j];
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				mul[i][j]=0;
			}
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	cout<<"Multiplication is : "<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				cout<<mul[i][j]<<"  ";
			}
		}
		cout<<endl;
	}
}