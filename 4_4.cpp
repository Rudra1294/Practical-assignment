/*Write program for swapping two values of different data type with use of function template.*/
#include<iostream>
using namespace std;
template<class S>
void Swap(S& n1,S& n2)
{	
	S temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int n1,n2;
	cout<<"Enter two integer value: ";
	cin>>n1>>n2;
	cout<<endl;
	
	float n3,n4;
	cout<<"Enter two float value: ";
	cin>>n3>>n4;
	cout<<endl;
	
	cout<<"Before swapping :"<<endl;
	cout<<"1st integer number = "<<n1<<endl;
	cout<<"2nd integer number = "<<n2<<endl;
	
	cout<<"1st float number = "<<n3<<endl;
	cout<<"2nd float number = "<<n4<<endl;
	
	Swap(n1,n2);
	
	cout<<"After swapping 1st integer number = "<<n1<<endl;
	cout<<"After swapping 2nd integer number = "<<n2<<endl;
	
	cout<<"After swapping 1st float number = "<<n3<<endl;
	cout<<"After swapping 2nd float number = "<<n4<<endl;
	
	return 0;
}