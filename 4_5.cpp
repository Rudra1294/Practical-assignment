/*Write a program to pass an object to template function and display its members.*/
#include <iostream>
using namespace std;
class Person 
{
	public:
	string name;
	int age;
};

template <typename T>void display(T obj) 
{
	cout << "Object details: " << endl;
	cout << "Name: " << obj.name << endl;
	cout << "Age: " << obj.age << endl;
}

int main() 
{
	Person p;
	p.name = "Alice";
	p.age = 25;
	
	display(p);

	return 0;
}
