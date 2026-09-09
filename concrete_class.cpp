//concrete class
//objects can be created 
#include<iostream>
#include<string>
using namespace std;

class Company{   //abstract class
	public:
		virtual void display()=0;  //pure virtual function
};
class Employee:public Company{
	private:
		int empid;
		string empname;
	public:
		void input(){
			cout<<"Enter ID and NAME "<<endl;
			cin>>empid;
			cin.ignore();
			getline(cin,empname);
		}
		void display(){
			cout<<"EMPID= "<<empid<<endl<<"NAME= "<<empname;
		}
};
int main(){
	Employee e;
	e.input();
	e.display();
	return 0;
}
