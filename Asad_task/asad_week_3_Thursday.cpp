#include<iostream>
using namespace std;
class shape
{
	public: //ta k function class k bahar b access ho
		
		
		//Virtual function
		virtual void draw() 
		{
			cout<<"I am Base class: "<<endl;
		}
		
		
};

class circle: public shape
{
	public:
		void draw()
		{
			cout<<"Draw Circle: "<<endl;
		}
};
class rectangle: public shape
{
	public:
		void draw()
		{
			cout<<"Draw Rectangle: ";
		}
};
int main()
{
	rectangle rec_obj;
	rec_obj.draw();
	cout<<endl;
	
	shape *ptr;
	circle cir_obj;
	ptr=&cir_obj;
	ptr->draw();
	
	return 0;
}