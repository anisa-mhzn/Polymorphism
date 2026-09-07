//abstract class and pure virtual function
//abstract class are inherit to other serves as base class
//virtual function declared in base class no definition
#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void area()=0; //pure virtual function
};
class Rectangle:public Shape{
	private:
		int l,b;
	public:
		Rectangle(int length, int breadth){
			l=length;
			b=breadth;
		}
		void area(){
			cout<<"Area of Rectangle= "<<l*b<<endl;
		}
};
class Circle:public Shape{
	private:
		float r;
	public:
		Circle(float radius){
			r=radius;
		}
		void area(){
			cout<<"Area of Circle= "<<(22.0/7)*r*r<<endl;
		}
};
int main(){
	Rectangle r1(2,5);
	r1.area();
	Circle c1(7);
	c1.area();
	return 0;
}