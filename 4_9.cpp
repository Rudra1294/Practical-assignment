/*Write a program to display the reverse of a given number using template based function*/
#include<iostream>
using namespace std;
template<class T>
T reverse(T n1)
{
	T rev=0;
	while(n1 != 0)
	{
		T rem=n1%10;
		rev=rev*10+rem;
		n1/=10;
	}
	
	return rev;
}
int main()
{
	int n1;
	cout<<"Enter number to reverse it : ";
	cin>>n1;
	
	cout<<"Reversed number is : "<<reverse(n1)<<endl;
	//reverse(n1);
	return 0;
}