//LSP: Child class parent class ki trah behave karna chahiye
#include<iostream>
using namespace std;
class bird
{
	public:
		virtual void fly()=0;
};
class sparrow: public bird
{
	public:
		void fly() override
		{
			cout<<"Sparrow is flying: "<<endl;
		}
};
class crow: public bird
{
	public:
		void fly() override
		{
			cout<<"Crow is flying: "<<endl;
		}
};
int main()
{
	bird *ptr=new sparrow();
	ptr->fly();
	
	ptr=new crow();
	ptr->fly();
	return 0;
}