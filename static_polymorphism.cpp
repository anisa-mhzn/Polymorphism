// static polymorphism..
#include<iostream>
using namespace std;

class Complex{
	private:
		int real,img;
	public:
		Complex(int r=0,int i=0){
			real=r;
			img=i;
		}
		void show(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex operator+(const Complex& c){  //add operator overload
			Complex sum;
			sum.real=real+c.real;
			sum.img=img+c.img;
			return sum;
		}
		
		void display(int a){  //static polymorphism
			cout<<"INTEGER= "<<a<<endl; //handles integer
		}
		void display(string s){  //function overload
			cout<<"STRING= "<<s<<endl;
		}
};
int main(){
	Complex c1(2,5),c2(1,3),c3;
	c3=c1+c2;
	c3.show();
	
	Complex c;
	c.display(25);
	c.display("anisa");
	return 0;
}
