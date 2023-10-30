/*Create a class employee with name, salary, age as member, use get_data() and show()
functions. Display details of 3 manager employees.*/
#include<iostream>
using namespace std;
class employee
{
	public :
	string name;
	int salary,age;
	
	void get_data()
	{
		cout<<"Enter name of employee : ";
		cin>>name;
		cout<<endl;
		cout<<"Enter salary of employee : ";
		cin>>salary;
		cout<<endl;
		cout<<"Enter age of employee : ";
		cin>>age;
		cout<<endl;
		
		
	}
	
	void show()
	{
		
		cout<<"Name of Employee is : "<<name<<endl;
		cout<<"Salary of Employee is : "<<salary<<endl;
		cout<<"Age of Employee is : "<<age<<endl;
	}
};

int main()
{
	employee e1,e2,e3;
	e1.get_data();
	e1.show();
	e2.get_data();
	e2.show();
	e3.get_data();
	e3.show();
	
	return 0;
}