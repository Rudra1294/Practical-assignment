/*Write a C++ program to demonstrate the use of default arguments in function overloading.*/
#include<iostream>
using namespace std;
class Addition 
{
	public:
	int sum(int num1,int num2) 
	{
		return num1+num2; 
	}
	int sum(int num1,int num2, int num3) 
	{
		return num1+num2+num3; 
	}
};
int main() 
{
	Addition obj;
	cout<<obj.sum(20, 15)<<endl;
	cout<<obj.sum(81, 100, 10);
	return 0;
}