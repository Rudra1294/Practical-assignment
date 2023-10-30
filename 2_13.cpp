/*Write a C++ Program to create a class employee to print the detail of employees using
objects.*/
#include<iostream>
using namespace std;
class employee
{
	public :
		string name;
		int salary,age;
	
	void get_data()
	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<endl;
		cout<<"Enter salary : ";
		cin>>salary;
		cout<<endl;
		cout<<"Enter age : ";
		cin>>age;
		cout<<endl;
	}
	
	void show()
	{
		cout<<"Employee name is : "<<name<<endl;
		cout<<"Employee salary is : "<<salary<<endl;
		cout<<"Employee age is: "<<age<<endl;
	}
};

int main()
{
	employee e1;
	e1.get_data();
	e1.show();
	
	return 0;
}