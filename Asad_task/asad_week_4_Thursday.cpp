//ISP: Har class wo function do
//jo usko waqai zarurat hu
#include<iostream>
using namespace std;
class worker_A
{
	public:
		virtual void work()=0;
};

class worker_B
{
	public:
		virtual void eat()=0;
		virtual void sleep()=0;
};


class employee: public worker_A, worker_B
{
	public:
		void work() override
		{
			cout<<"Employee is working: "<<endl;
		}
		
		void eat() override
		{
			cout<<"Employee is eating: "<<endl;
		}
		
		void sleep() override
		{
			cout<<"Employee is sleeping: "<<endl;
		}
};


class robot: public worker_A
{
	public:
		void work() override
		{
			cout<<"Robot is working: "<<endl;
		}
};


int main()
{
	employee *ptr=new employee();
	ptr->work();
	ptr->eat();
	ptr->sleep();
	
	cout<<endl;
	
	worker_A *aptr=new robot();
	aptr->work();
	
	delete ptr;
    delete aptr;
	return 0;
}