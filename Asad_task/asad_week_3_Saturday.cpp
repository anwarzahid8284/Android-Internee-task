#include<iostream>
using namespace std;
class engine
{
	public:
		
		void start_engine()
		{
			cout<<"Engin start huwa: "<<endl;
		}
};
class car
{
	public:
	  engine en_obj;  //Composition (has realtiom )
	
	  void start_car()
	  {
	  	cout<<"Car start ho rahi hai: "<<endl;
	  	
	  	//en_obj.start_engine();	
	  }
	  	
};

int main()
{
	car car_obj;
	
	car_obj.start_car();
	
	car_obj.en_obj.start_engine();
	
	return 0;
}