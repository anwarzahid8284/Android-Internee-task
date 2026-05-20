#include<iostream>
using namespace std;

class person{
	public:
		string name;
		int age;
		string gender;
		string sonOf;
		
		// 1. DEFAULT CONSTRUCTOR ADD KIYA
		person() {
			cout << "Person Default Constructor called" << endl;
		}
		
		person(int ag, string n){
			cout<<"Person Constructor called "<<endl;
			name = n;
			age = ag; 
		}
		
		person(string s){
			cout<<"Constructor overloading called "<<endl;
			sonOf = s;
		}
		
		void perFun(int g){
			cout<<"Person Function called "<<endl;
		}
};

class employee : public person{
	public:
	
	void empFun(string name){
		cout<<"For name a Employee Function "<<endl;
	}
	
	// function overloading
	
	void empFun(int age){
		cout<<"For age Employee Function "<<endl;
	}
};

int main(){
	person p(300, "Gulli");
	p.perFun(3003);
	cout<<"\n----------------"<<endl;
	
	employee E; // Ab yeh line perfectly kaam karegi!
	E.perFun(20);
	
	cout<<"\n-------Function overloading--------------"<<endl;
	
	E.empFun(30004);
}