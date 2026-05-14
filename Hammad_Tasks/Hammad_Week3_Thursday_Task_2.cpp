#include<iostream>
using namespace std;
		
			// Function Overriding (Vertual Fun.. )

class Circle{
	public:
		virtual void shape(){
		 // Vertual is keyword when we dont write it then again and again called thebase clas fun 
		
			cout<<"Circle"<<endl;
		}
};

class Rectangle :public Circle{
	
	public:
		
		void shape(){
			cout<<"Rectangle"<<endl;
		}
};

int main(){
	
				// Late Bindin (Decided at Run time ) that which fun will called 
	
	Circle *bptr; // base class pointer 
	
	Circle c; // base class object
	bptr=&c;
	
	bptr->shape(); // this call the base class shape func..
	
	cout<<"\n------------"<<endl;
	
	Rectangle r; // object of derived class 
	bptr=&r;
	
	bptr->shape(); // this call the derived clas shape function 
}