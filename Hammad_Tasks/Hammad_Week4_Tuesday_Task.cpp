#include<iostream>   // Open - Close Principle (OCP) Open for EWxtention & close for modifications
using namespace std;
class payment{
	public:
		virtual void savePayment()=0;
};

class Easypaisa :public payment{
	public:
		void savePayment() override { // to define the virtual function in every class 
		cout<<"You will Save payment in Easypaisa Acount "<<endl;
		}
};

class JazCash: public payment{
	public:
	void savePayment() override { // to initialize the virtual function
	
		cout<<"Save payment in JazCash Acount "<<endl;
	}
};

class CreditCard :public payment{
	public:
	
	void savePayment() override{
		
		// to define savePayment fun 
		
		cout<<"You will save payment in CreditCard "<<endl;
	}
};

int main(){
	cout<<"\n-----------------\n";
	
	payment * p=new Easypaisa;
	p->savePayment();
	
	cout<<"\n-----------------\n";
	
	p=new JazCash;
	p->savePayment();
	
	cout<<"\n-----------------\n";
	
	p=new CreditCard;
	p->savePayment();
	
	cout<<"\n-----------------\n";
}