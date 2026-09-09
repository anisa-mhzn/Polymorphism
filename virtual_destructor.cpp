//virtual destructor
//normal destructor runs first and later the virtual
#include<iostream>
using namespace std;
class Shape{
	public:
	Shape(){
		cout<<"Base constructor"<<endl;
	}
	virtual ~Shape(){
		cout<<"Base destructor"<<endl;
	}
};
class Rectangle:public Shape{
	public:
		Rectangle(){
			cout<<"derived constructor"<<endl;
		}
		~Rectangle(){
			cout<<"derived destructor"<<endl;
		}
};
int main(){
	Shape *s= new Rectangle();
	delete s;
	return 0;
}
