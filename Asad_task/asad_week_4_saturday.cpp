#include<iostream>
using namespace std;
class animal
{
	public:
		virtual void prepare()=0;
 };
 class dog: public animal
 {
 	public:
 	void prepare() override{
 		cout<<"Dog is  created: "<<endl;
	 }
 };
 class cat: public animal
 {
 	public:
 		void prepare() override
 		{
 			cout<<"Cat is created:; "<<endl;
		 }
 };
 class factory
 {
 	public:
 		static animal* func(string t)
 		{
 			if(t=="dog" || t=="Dog")
 			{
 				return new dog();
			 }else if(t=="cat" || t=="Cat")
			 {
			 	return new cat();
			 }else
			 {
			 	return NULL;
			 }
		 }
 };
 int main()
 {
 	animal *ptr;
 	cout<<"Enter product name dog or Cat: ";
 	string type;
 	cin>>type;
 	ptr=factory::func(type);
 	ptr->prepare();
 	
 	return 0;
}