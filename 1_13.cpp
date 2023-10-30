/*Write a C++ Program to create a menu driven program to perform the
following operations :
a) Sum of Digit
b) Multiplication of Digit
c) Armstrong or Not
d) Palindrome or Not*/

#include<iostream>
using namespace std;

int main()
{
	int n1,n,ch,sum=0,mul=1,rem,cube=0,rev=0;
	cout<<"Enter 1 for Sum of Digit"<<endl;
	cout<<"Enter 2 for Mul of Digit"<<endl;
	cout<<"Enter 3 for Armstrong or not"<<endl;
	cout<<"Enter 4 for palindrome or not"<<endl;
	
	cout<<"Enter your choice out fo 4:";
	cin>>ch;
	cout<<endl;
	
	switch(ch)
	{
	case 1:
	{
		cout<<"Enter a number : ";
	cin>>n1;
	cout<<endl;
		
		while(n1>0)
		{
		rem=n1%10;
			n1=n1/10;
		sum=sum+rem;
		
		}
		cout<<"Sum of digit is : "<<sum;
		cout<<endl;
	}
	break;
	case 2:
	{
		cout<<"Enter a number : ";
	cin>>n1;
	cout<<endl;
		while(n1>0)
		{
			rem=n1%10;
			mul=mul*rem;
			n1=n1/10;
		}
		cout<<"Mul of digit is : "<<mul;
		cout<<endl;
	}
	break;
	case 3:
	{
		cout<<"Enter a number : ";
	cin>>n1;
	cout<<endl;
	n=n1;
	
	while(n1>0)
	{
		rem=n1%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		n1=n1/10;
	}
	if(sum==n)
		cout<<n<<" is armstrong number"<<endl;
	else
		cout<<n<<" is not an armstrong number"<<endl;
	}
	break;
	case 4:
	{
		cout<<"Enter a number : ";
	cin>>n1;
	cout<<endl;
		n=n1;
		while(n1>0)
	{
		rem=n1%10;
		rev=(rev*10)+rem;
		n1=n1/10;
	}
	if(rev==n)
		cout<<n<<" is Palindrome number"<<endl;
	else
		cout<<n<<" is not an palindrome number"<<endl;
	break;
	}
	
	default: cout<<"Invalid input"<<endl;
	}
}	
