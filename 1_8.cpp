/*Write a C++ program to find greatest number between 3 number using if-else-if statements.*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter three numbers : ";
	cin>>n1>>n2>>n3;
	cout<<endl;
	
	if(n1>n2 && n1>n3)
		cout<<n1<<" is greater number"<<endl;
	else if(n2>n3 && n2>n3)
		cout<<n2<<" is greater number"<<endl;
	else
		cout<<n3<<" is greater number"<<endl;
	
	return 0;
}