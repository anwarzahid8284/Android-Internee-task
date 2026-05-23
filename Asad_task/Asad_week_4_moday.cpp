#include<iostream>
using namespace std;
//SRP Voilation Example
class car
{
	public:
		void save_data()
		{
			cout<<"Data saved" <<endl;
		}
		void print_data()
		{
			cout<<"Student data printed : "<<endl;
		}
};


//Refector SRP.  yahan SRP rule follow kia hai
class save_data
{
	public:
		void save_()
		{
			cout<<"Data saved" <<endl;
		}
};

class print_data
{
	public:
		void print_()
		{
			cout<<"Student data printed : "<<endl;
		}
};
int main()
{
	cout<<"Voilation Example: "<<endl;
	car obj;
	obj.save_data();
	obj.print_data();
	
	
	cout<<endl<<"Refector Example: "<<endl;
	save_data  save_obj;
	save_obj.save_();
	
	print_data  print_obj;
	print_obj.print_();
	
	return 0;
}