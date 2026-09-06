//pointer to base class
//runtime polymorphism
#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void display(){ //expect to override in derive
			cout<<"NAME OF SHAPE"<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void display()override{
		cout<<"IT IS A RECTANGLE"<<endl;
	}
};
class Circle:public Shape{
	public:
		void display()override{
		cout<<"IT IS A CIRCLE"<<endl;
	}
};
int main(){
	Shape *s;  //pointer of base class
	Rectangle r;
	s=&r;
	s->display();  //prints rectangle
	
	Circle c;
	s=&c;
	s->display();  //prints circle
	return 0;
}
