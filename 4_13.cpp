/*Write an overloaded template function area that calculates area of different shapes*/
#include <iostream>
using namespace std;
template <class T>
void area(T& s)	
{
	cout <<"Area of Square : "<<s*s<<endl;
}
void area(float& r)
{		
	cout <<"Area of circle : "<<3.14*r*r<<endl;
}
void area(float& b,float& h)
{
	cout <<"Area of triangle : "<<0.5*b*h<<endl;
}
int main()
{
	int s;
	float r,b,h;	
	cout<<"Enter square height : ";
	cin>>s;
	cout<<endl;
	
	cout<<"Enter radius of circle : ";
	cin>>r;
	cout<<endl;
	
	cout<<"Enter breath of triangle : ";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter height of triangle : ";
	cin>>h;
	cout<<endl;
	
	area(s);
	area(r);
	area(b,h);
  
	return 0;
}