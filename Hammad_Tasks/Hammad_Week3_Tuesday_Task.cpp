#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	private: // this give  access_abality with in the class
	
	//Properties
	
	int age;
	int phone;
	
	void MessageForEmployee(){
		cout<<name<<" Your Acount Successfully Created "<<endl;
	}
	
	protected: // this property accessing with in the child class
	
		string name;
	
	public: // the pulic section accing from main and child classes 
		
		void setter(int a,int ph,string n){
			age=a;
			phone=ph;
			name=n;
		}
		
		void getter(){
			
			if(age>18 && phone!=0 && name!=""){
				MessageForEmployee();
			}else{
				cout<<name<<" Acount show an  Error \n"<<endl;
			}
		}
		
		
	 
}; 



int main(){
	int x,y; // x show age y show phone and z show name
	string z;
	
	cout<<"Enter name for Bank Acount"<<endl;
	cin>>z;
	
	cout<<"\nEnter Age "<<endl;
	cin>>x;
	
	cout<<"\n Enter phone No :"<<endl;
	cin>>y;
	
	
	BankAccount b; // object of BankAccount class 
	
	b.setter(x,y,z);
	b.getter();
};