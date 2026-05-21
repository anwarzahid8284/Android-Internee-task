#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
	public:
	
	//costructerr OverloAding
	person()
	{
		cout<<"Mein Default Constructer Hun Person class ka: "<<endl;
	}
	person(string n,int ag)
	{
		name=n;
		age=ag;
	}	
};

class employee:public person
{
	private:
		int salary;
	public:
	employee()
	{
		cout<<"Employee Default Constructer: "<<endl;
	}	
	
	employee(string n,int a,int s)
	{
		name=n;
		age=a;
		salary=s;
	}
	
	//Function Overloading
	void dis()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
	void dis(string wel)
	{
		cout<<wel<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	employee obj_1;
	employee obj_2("M Asad",22,3300);
	obj_2.dis();
	cout<<endl;
	
	obj_2.dis("AoA: ");
	return 0;
}