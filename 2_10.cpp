/*Write a C++ program to calculate the area of circle, rectangle and square using function
overloading.
area of circle=3.14*r*r
area of rectangle=w.h
aera of square=h*h;
*/
#include<iostream>
using namespace std;
class overload
{
	public:
		
	float area(float pi,float r)
	{
		return pi*r*r;
	}
	float area(int w,int h)
	{
		return w*h;
	}
	float area(int h)
	{
		return h*h;
	}
};

int main()
{
	overload obj;
	int radius;
	cout<<"Enter radius of circle : ";
	cin>>radius;
	cout<<endl;
	cout<<"Area of circle is : "<<obj.area(3.14,radius)<<endl;
	
	int width,height;
	cout<<"Enter height and width of rectangle : ";
	cin>>height>>width;
	cout<<endl;
	cout<<"Area of rectangle is : "<<obj.area(height,width)<<endl;
	
	int length;
	cout<<"Enter length of square : ";
	cin>>length;
	cout<<endl;
	cout<<"Area of square is : "<<obj.area(length)<<endl;
	
	return 0;
}