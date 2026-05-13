#include<iostream>
using namespace std;
class student
{
	public: //public member ko progrsm k kidi b part se access ho sakta hai
	string st_name;
	int st_age;
	int st_roll_no;
	student(string st_n,int st_ag,int st_roll) //Ye tab chalta hai jab object banata hai.is ka naam class ke jaise huta hai
	{
		//I am constructer:
		st_name=st_n;
		st_age=st_ag;
		st_roll_no=st_roll;
	}
	
	~student() //Ye tab chalta hai jab object destroy huta hai yani program k ebd pr
	{
		//"I am destructer: 
		
	}

	void display() //Ye func stdnt k age, roll,no screen pr show karta hai
	{
		cout<<"Student Name: "<<st_name<<endl;
		cout<<endl<<"Student age: "<<st_age<<endl;
		cout<<"Student Roll No: "<<st_roll_no<<endl<<endl<<endl;
	}
};

int main()
{
	student obj_1("Muhammad Asad",22,55);
	obj_1.display();
	
	//dusra obj for student 2
	cout<<endl<<endl<<"dusra obj for student 2"<<endl<<endl;
	student obj_2("sajid",30,2);
	obj_2.display();
}