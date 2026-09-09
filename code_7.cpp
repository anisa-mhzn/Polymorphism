//rules of polymorphism in real life scenarios
#include<iostream>
using namespace std;
class Payment{
	public:
		virtual void processPayment()=0;
};
class CreditCard: public Payment{
	private:
		int CardNo;
		string name;
	public:
		CreditCard(int n, string s){
			CardNo=n;
			name=s;
		}
		void processPayment()override{
		cout<<"CARDNO= "<<CardNo<<endl;
		cout<<"NAME= "<<name<<endl;;
		}
};

class Cash:public Payment{
	private:
		float amt;
	public:
		Cash(float a){
			amt=a;
		}
		void processPayment()override{
		cout<<"AMOUNT= "<<amt;
		}
};
int main(){
	Payment *p;
	CreditCard cc(210021,"anisa");
	p=&cc;
	p->processPayment();
	
	Cash c(150000);
	p=&c;
	p->processPayment();
	return 0;
}




