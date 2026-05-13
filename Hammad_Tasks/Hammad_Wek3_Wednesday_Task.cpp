#include<iostream>
#include<string>
using namespace std;

class Animal{
	
	string name;
	string sound;
	int age;
	int lags;
	
	public:
		
		void Activities(string n,string s,int a,int la){
			name=n;
			sound=s;
			age=a;
			lags=la;
			
			cout<<"Name of Animal "<<name<<" sound is "<<sound<<" lags are "<<lags<<" age is "<<age<<endl;
		}
};

class Animal2 : public Animal{ /// single inheritance 
	public:
	Animal2(){
		cout<<"\n I am child class \n"<<endl;
	}
};

int main(){
	Animal a;
	a.Activities("Dog","Aap Aap",15,4);
	
	cout<<"\n";
	Animal2 a2;  // child class object 
	
	a2.Activities("Cat","myaw",12,4);
}