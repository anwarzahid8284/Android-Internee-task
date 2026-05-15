#include<iostream>
using namespace std;
class animal  //Ye parent class hai
{
	public:
		void eating()
		{
			cout<<"Animal is eating: ";
		}
		void sleep()
		{
			cout<<"Animal is sleeping: ";
		}
};
class dog: private animal //Derived Class
{
	public:
		void bark()
		{
			cout<<"Daog is barking: ";
		}
		
		void gett()
		{
			sleep(); 
		}
		
}; 

 int main()
 {
    dog d_obj;
    d_obj.bark();
    
    cout<<endl;
 	d_obj.gett();
 	
 	return 0;
}