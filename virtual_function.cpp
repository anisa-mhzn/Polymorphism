//virtual function and dynamic polymorphism
// methods called is determined during virtual function execution
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout<<"SOUND OF ANIMAL"<<endl;
		}
};
class Dog:public Animal{
	public:
		void sound(){
			cout<<"DOG--BARKS"<<endl;
		}
};
class Cat:public Animal{
	public:
		void sound(){
			cout<<"CAT--MEOW"<<endl;
		}
};
int main(){
	Animal *a;
	Dog d;
	a=&d;
	a->sound();
	Cat c;
	a=&c;
	a->sound();
	return 0;
}
