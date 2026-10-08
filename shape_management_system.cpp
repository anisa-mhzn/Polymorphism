//shape management system
//function overloading for claculating area
//use virtual function to display shapes
//abstract class with pure virtual function
//base class pointer
#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void Perimeter()=0;
		virtual void Area()=0;
		virtual void display(){
			cout<<"THIS IS A SHAPE"<<endl;
		}
};

class Rectangle:public Shape{
	protected:
		int length,breadth;
	public:
		Rectangle(int l,int b){
			length=l;
			breadth=b;
		}
		void Perimeter(){
			cout<<"PERIMETER RECTANGLE= "<<2*(length+breadth)<<endl;
		}
		void Area(){
			cout<<"AREA RECTANGLE= "<<length*breadth<<endl;
		}
		void Area(int side){  //static polymorphism
			cout<<"AREA SQUARE(via overload)= "<<side*side<<endl;
		}
		void display(){
			cout<<"Shape: Rectangle"<<endl;
		}
};

class Circle:public Shape{
	protected:
		float radius;
	public:
		Circle(float r){
			radius=r;
		}
		void Perimeter(){
			cout<<"PERIMETER CIRCLE= "<<2*(22/7)*radius<<endl;
		}
		void Area(){
			cout<<"AREA CIRCLE= "<<(22/7)*radius*radius<<endl;
		}
		void Area(float diameter, bool val){  //static polymorphism
			float r= diameter/2;
			cout<<"AREA CIRCLE (via overload:diameter)= "<<(22.0/7.0)*r*r<<endl;
		}
		void display(){  //dynamic polymorphism
			cout<<endl<<"Shape: Circle"<<endl;
		}
};
int main(){
	Shape *s1,*s2;  //base class pointer
	Rectangle r(4,3);
	s1=&r;
	s1->display();
	s1->Perimeter();
	s1->Area();
	r.Area(7);  //overload call on actual obj
	
	Circle c(7);
	s2=&c;
	s2->display();
	s2->Perimeter();
	s2->Area();
	c.Area(14,true);  //overload call on actual object
	return 0;
}
