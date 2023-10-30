/*Write a C++ program to swap numbers using friend function.*/
#include<iostream>
using namespace std;
class swap_num
{
	private :
		int n1,n2,temp;
	public :
		swap_num(int n1,int n2)
		{
			this->n1=n1;
			this->n2=n2;
		}
		
		friend void swap(swap_num);
};
void swap(swap_num s1)
{
	cout<<"Before swaping : "<<s1.n1<<"  "<<s1.n2<<endl;
	s1.temp=s1.n1;
	s1.n1=s1.n2;
	s1.n2=s1.temp;
	
	cout<<"After swapping : "<<s1.n1<<"  "<<s1.n2<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<endl;
	swap_num s(a,b);
	swap(s);
	
	return 0;
	
}