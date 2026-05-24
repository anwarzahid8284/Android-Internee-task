#include<iostream>   // Liskove Substitution principle
using namespace std;
class person{
	public:
	virtual	void fun(){
			cout<<"I am Person "<<endl;
		}
};

class student:public person{
	public:
		void fun(){
			cout<<"I am  a student "<<endl;
		}
};
int main(){
	person* s=new student;
	s->fun();
	
	delete s;
}
