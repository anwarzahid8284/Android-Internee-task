#include<iostream>			// ISP interface segregation principle 
using namespace std;

class Iwork_With_Eat {
	public:
		virtual void eat()=0; // eating function for only human
};


class Iwork { 
	public:
		
		virtual void worker()=0; // worker function for both rebort and human
		
};


class human:public Iwork_with_Eat,Iwork {
	
	public:

		void eat()override { // to initialize virtual function
		
			cout<<"I am human and will Eat "<<endl;
		}
		
		// kewnke humna eating and will work
		
		
		void worker()override { // to initialize virtual function
		
			cout<<"I am human and will work"<<endl;
		}
};
		 // Rebortic Class
		  
class rebort:public Iwork {

	public:
		
		void worker()override { // Rebort only work not Eat
		
			cout<<"I am rebort and will work"<<endl;
		}
		
};


int main() {

	cout<<"\n--------------------\n";

	Iwork *w=new human();
	w->worker();

	Iwork_With_Eat *Ew=new human();
	Ew->eat();

	cout<<"\n--------------------\n";

	w=new rebort();
	w->worker();

	cout<<"\n--------------------\n";

	delete w; // to delete dynamic allocated memory

	delete Ew; // to delete dynamic allocated memory

}