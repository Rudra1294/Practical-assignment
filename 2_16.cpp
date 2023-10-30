/*Write a C++ program to calculate area and circumference of circle using inline function.
area = pi*r*r
circumference=2*pi*r 
*/
#include<iostream>
using namespace std;
inline float calc(float r)
{
	float pi=3.14,area,circ;
	area=pi*r*r;
	circ=2*pi*r;
	cout<<"Area of circle is : "<<area<<endl;
	cout<<"Circumference of circle is : "<<circ<<endl;
}

int main()
{
	float n1;
	cout<<"Enter radius of circle : ";
	cin>>n1;
	cout<<endl;
	
	calc(n1);
	
	return 0;
}