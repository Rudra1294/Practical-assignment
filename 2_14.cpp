 /*Write a C++ Program to access the member of one class using friend function.*/
 #include<iostream>
 using namespace std;
 class access
 {
	private :
		string name;
	public :
		access(string name)
		{
		this->name=name;	
		}
		
		friend void get(access);
 };
 
 void get(access n)
 {
	cout<<"Member from friend class is :"<<n.name<<endl;
 }
 
 int main()
 {
	string n1;
	cout<<"Enter name : ";
	cin>>n1;
	cout<<endl;
	
	access a1(n1);
	get(a1);
	
	return 0;
 }