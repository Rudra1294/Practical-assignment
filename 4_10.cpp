//Write a program to define definition of member function template outside the class and invoke the function.
#include<iostream>
using namespace std;
template<class t1,class t2>

class student
{
public:
  t1 name;
  t2 roll;
    student(t1 name,t2 roll)
    {
      this->name=name;
      this->roll=roll;
    }
    void display();
};

template<class t1,class t2>
void student<t1,t2>::display()
{
  cout << "NAME : " <<name << endl;
  cout << "ROLLNO : " <<roll << endl;
}

int main()
{
  int roll;
  string name;
  cout << "enter name :";
  getline(cin,name);
  cout << "enter roll : ";
  cin >> roll;
  student <string,int> s(name,roll);

  s.display();
}