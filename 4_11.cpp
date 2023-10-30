/*Write a program to create template class to find binary value of a number given by user.*/
#include<iostream>
using namespace std;
template <class T>
void binary(T n1)
{
	T num[32];
	T i=0,j;
	while(n1 > 0)
	{
		num[i]=n1%2;
		n1=n1/2;
		i++;
	}
	for (j=i-1; j>=0;j--)
		cout << num[j];
}
int main()
{
	int n1;
	cout<<"Enter number to convert it to binary : ";
	cin>>n1;
	binary(n1);
	
	return 0;
}
