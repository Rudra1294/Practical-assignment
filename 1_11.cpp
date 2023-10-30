/*Write a C++ program to calculate the sum of 5 subject and find the percentage.*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,sum,per;
	cout<<"Enter marks of 5 subject : ";
	cin>>n1>>n2>>n3>>n4>>n5;
	cout<<endl;
	
	sum=n1+n2+n3+n4+n5;
	cout<<"Total of 5 subject marks is : "<<sum<<endl;
	
	per=(sum*100)/500;
	cout<<"Percentage is : "<<per<<endl;
	
	return 0;
}