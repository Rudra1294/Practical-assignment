/*Write a C++ program to find the area and perimeter of rectangle.
area=(1/2)*b*h
perimeter=a+b+c*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,h;
	float area,peri;
	cout<<"Enter height of triangle : ";
	cin>>h;
	cout<<endl;
	cout<<"Enter base of triangle : ";
	cin>>b;
	cout<<endl;
	cout<<"Enter side of triangle : ";
	cin>>a;
	cout<<endl;
	
	area=0.5*b*h;
	peri=a+b+h;
	
	cout<<"Area of Triangle is : "<<area<<endl;
	cout<<"Perimeter of Triangle is : "<<peri<<endl;
	
	return 0;
}