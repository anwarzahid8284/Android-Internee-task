#include<iostream>
using namespace std;

					// Method Overriding (Early binding (decide the function calling at compile time)

class Circle{
	public:
		
		void shape(){
			cout<<"\n Circle"<<endl;
		}
};

class Rectangle :public Circle {
	public:
		
		void shape(){ // Method overriding 
		
			cout<<"\n Rectangle "<<endl;
		}
};


int main(){
	
	// Method overriding --> Early binding
	
	Rectangle r1;
	
	r1.shape();
	
	r1.Circle::shape();
	
	return 0; // due to int main return type zero
}