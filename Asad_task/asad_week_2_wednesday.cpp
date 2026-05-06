#include<iostream>
using namespace std;
//Swap Function
void swap_func(int *x_, int *y_)
{
	int temp=*x_;
	*x_=*y_;
	*y_=temp;
}

int main()
{
	int x,y;
	cout<<"Enter X value: ";
	cin>>x;
	cout<<"Enter Y value: ";
	cin>>y;
	int *x_ptr=&x; //X address ko store ki x_ptr mein 
	int *y_ptr;
	y_ptr=&y;      //y_ptr aik pointer hai jo y ka address store karta hai
	
	cout<<"Before swaping: "<<endl;
	cout<<"X= "<<*x_ptr<<endl; //pointer k through original value access kia
	cout<<"Y= "<<*y_ptr<<endl;
	
	swap_func(&x, &y); //swap_func
	cout<<"After Swaping: "<<endl;
	cout<<"X= "<<*x_ptr<<endl; //pointer k through original value access kia
	cout<<"Y= "<<*y_ptr<<endl;
	
	return 0;
}