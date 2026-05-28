#include<iostream> 	// 			Factory Design Pattern
using namespace std;

class burger{
	public:
		virtual void prepare()=0;
};

class basicBurger:public burger{
	public:
		void prepare(){
			cout<<"Basic Burger "<<endl;
		}
};

class standerdBurger:public burger{
	public:
		void prepare(){
			cout<<"standerd Burger "<<endl;
		}
};

class premiumBurger:public burger{
	public:
		void prepare(){
			cout<<"premium Burger "<<endl;
		}
};

class basicWheateBurger:public burger{
	public:
		void prepare(){
			cout<<"Basic wheat Burger "<<endl;
		}
};

class standerdWheatBurger:public burger{
	public:
		void prepare(){
			cout<<"standerd Wheat Burger "<<endl;
		}
};

class premiumWheatBurger:public burger{
	public:
		void prepare(){
			cout<<"premium wheat Burger "<<endl;
		}
};

class burgerFactory{ 
	public:
		virtual burger* createBurger(string& type)=0;
};

class singBurger :public burgerFactory{
	public:
		burger* createBurger(string& type){
			if(type=="basic"){
				return new basicBurger();
			}else if(type=="standerd"){
				return new standerdBurger();
			}else if(type=="premium"){
				return new premiumBurger();
			}else{
				cout<<"Enter vailid type"<<endl;
				return nullptr;
			}
		}
};

class wheatBurger : public burgerFactory{
	public:
		
		burger* createBurger(string& type){
			if(type=="wheatStanderdBurger"){
				return new standerdWheatBurger();
			}else if(type=="wheatBasicBurger"){
				return new basicWheateBurger();
			}else if(type=="wheatPremiumBurger"){
				return new premiumWheatBurger();
			}else{
				cout<<"Enter vailid type "<<endl;
				return nullptr;
			}
			
		}
};

int main(){
	string type;
	
	cout<<"Enter type of Burger "<<endl;
	cin>>type;
	
	burgerFactory* factory=new singBurger();
	
	burger* brgr=factory->createBurger(type);
	
	if(brgr!=nullptr){
		brgr->prepare();
	}
	
}