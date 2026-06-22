#include<iostream>
#include<vector>
using namespace std;
class subscribe
{
	public:
	virtual void update(string type)=0;
};
class asad:public subscribe
{
	public:
		void update(string ty)
		{
			cout<<"Received Notification: "<<ty<<endl;
		}
};

class ali: public subscribe
{
	public:
		void update(string t)
		{
			cout<<"Ali received notification: "<<t<<endl;
		}
};
class channel
{
	private:
		vector<subscribe*> vec;
		public:
		void sub(subscribe* s) 
		{
			vec.push_back(s);
		}	
		
		void upload(string title)
		{
			for(auto s : vec)
			{
				s->update(title);
			}
		}
};
int main()
{
	channel obj;
	
	asad asad_obj;
	ali ali_obj;
	
	
	obj.sub(&asad_obj);
	obj.sub(&ali_obj);
	
	obj.upload("Video upload: ");
	return 0;
}