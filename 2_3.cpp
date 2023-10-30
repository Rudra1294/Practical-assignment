/*Create a class paper with width and height as data member. Create function outside a class
that finds out area and perimeter of that paper Pass object as argument.*/
#include<iostream>
using namespace std;
class paper
{
	public :
		int width,height,area,perimeter;
		void find();
};
void paper::find()
{
	cout<<"Enter height of paper : ";
	cin>>height;
	cout<<endl;
	cout<<"Enter width of paper : ";
	cin>>width;
	cout<<endl;
	perimeter=2*(height+width);
	area=height*width;
	cout<<"Area of paper is : "<<area<<endl;
	cout<<"Perimeter of paper is :"<<perimeter<<endl;
}

int main()
{
	paper obj;
	obj.find();
	
	return 0;
}
