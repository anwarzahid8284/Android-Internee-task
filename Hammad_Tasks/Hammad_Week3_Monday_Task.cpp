#include<iostream>
#include<string>
using namespace std;

class Student{
		
		// by default it will remain private
		 // Properties are given 
		 		
		string name="Ahmad";
		int marks=504;
		float GPA=2.9;
		
		//  public is used that we will access from out side of the class 
		
		public:
		 
		 // Default Constructor that is Automatically called when object is created
		 
		Student(){
			
			cout<<"My name is : "<<name<<" "<<endl;
			cout<<"Marks is : "<<marks<<" "<<endl;
			cout<<"GPA is s :" <<GPA<<" "<<endl;
		}
		
		// The memory that consume by the constructor is destroyed by destructor
		
		~Student(){
			cout<<"\n Destructor Called \n";
		}
		
};

int main(){
	
	// s1 is the object of Class Student 
	
 Student s1;
}