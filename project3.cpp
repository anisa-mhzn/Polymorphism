///USsing static member
//concept of friend function
#include<iostream>
#include<iomanip>
using namespace std;
class Account{
	private:
		int acc_num;
		string name;
		float balance;
		static int count;  //static member data
		
	public:
		Account(int a, string n, float b){
			acc_num=a;
			name=n;
			balance=b;
			count++;
		}
		Account(){
			acc_num=0;
			name="none";
			balance=0.0f;
			count++;
		}
		
		Account(const Account &obj){
			acc_num=obj.acc_num;
			name=obj.name;
			balance=obj.balance;
			count++;
		}
		
		void set_val(int a, string n, float b){  //function with this
			this->acc_num=a;
			this->name=n;
			this->balance=b;
		}
		
		static int getcount(){  //static member function
			return count;
		}
		
		friend void showDetail(Account a);  //friend function
		
		Account addBonus(Account a, float amount){
			Account temp=a;
			temp.balance=temp.balance+amount;
			return temp;
		}
};
int Account::count=0;   

void showDetail(Account a){
	//cout<<left<<setw(5)<<"Acc_NO "<<setw(5)<<" Name "<<setw(5)<<" Balance "<<endl;
	cout<<left<<setw(5)<<a.acc_num<<setw(10)<<a.name<<setw(5)<<a.balance<<endl;
}
int main(){
	Account a1(101,"diana",6000.0f);
    Account a2(103,"jen",5000.0f);
    
    cout<<"Using this pointer"<<endl;
    Account a3;
    cout<<left<<setw(5)<<"Acc_NO "<<setw(5)<<" Name "<<setw(5)<<" Balance "<<endl;
    a2.set_val(104,"gablin",8500.0f);
    showDetail(a3);
    
    cout<<endl<<"Copy initialization"<<endl;
    Account a4=a1;
    cout<<left<<setw(5)<<"Acc_NO "<<setw(5)<<" Name "<<setw(5)<<" Balance "<<endl;
    showDetail(a4);
    
    cout<<endl<<"Function that pass and return object"<<endl;
    Account a5=a1.addBonus(a2,200.0f);
    cout<<left<<setw(5)<<"Acc_NO "<<setw(5)<<" Name "<<setw(5)<<" Balance "<<endl;
    showDetail(a5);
    
    cout<<endl<<"Display Details of Accounts"<<endl;
    cout<<left<<setw(5)<<"Acc_NO "<<setw(5)<<" Name "<<setw(5)<<" Balance "<<endl;
    showDetail(a1);
    showDetail(a2);
    showDetail(a3);
    showDetail(a4);
    showDetail(a5);
    
    cout<<endl<<"TOTAL ACCOUNTS= "<<Account::getcount()<<endl;
    //14 accounts (4 objects) (2 inside addBonus) (8 no.of times showDetal is called)
    return 0;
}