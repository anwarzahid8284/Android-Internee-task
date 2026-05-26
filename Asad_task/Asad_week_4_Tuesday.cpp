//OCP Open Closed Principle
#include<iostream>
using namespace std;
class payment
{
	public:
		virtual void pay()=0;
};
class credit: public payment
{
	public:
		void pay()
		{
			cout<<"Payment Through: Credit Card "<<endl;
		}
};
class easyPaisa: public payment
{
	public:
		void pay()
		{
			cout<<"Payment Through: Easypaisa "<<endl;
		}
};

class jazzCash: public payment
{
	void pay()
	{
		cout<<"Payment through Jazz Cash: "<<endl;
	}
}; 
int main()
{
  payment *ptr;
  easyPaisa e_obj;
  ptr=&e_obj;
  ptr->pay();
  
  jazzCash obj;
  ptr=&obj;
  ptr->pay();
  return 0;
}