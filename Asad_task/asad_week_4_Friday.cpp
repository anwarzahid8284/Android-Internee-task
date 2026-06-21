#include<iostream>
using namespace std;
class mySQL
{
	public:
		virtual void connect()=0;
};
class mySQL_Database:public mySQL
{
	public:
		void connect() override
		{
			cout<<"Data saved in mySQL Database: "<<endl;
		}
};
class mongo_Database:public mySQL
{
	public:
		void connect() override
		{
			cout<<"Data saved in Mongo Database: "<<endl;
		}
};
class app
{
	private:
	mySQL* sql;
	public:
		app(mySQL* ptr)
		{
			sql=ptr;
		}
		void imp()
		{
			sql->connect();
		}
};
int main()
{
   mongo_Database obj;
   app a_obj(&obj);
   a_obj.imp();
   return 0;
}