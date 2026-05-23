#include<iostream> 			// Dependency Inversion Principle
using namespace std;

class dataBase{
	public:
	virtual void save()=0;
};

class sqlDB:public dataBase{
	public:
		void save() override{
			cout<<"Data will save in SQL DB"<<endl;
		}
};


class mongoDB:public dataBase{
	public:
		void save() override{
			cout<<"Data will save in Mongo DB"<<endl;
		}
};


class application{
	public:
		dataBase *d; // dependency injection
		
		// constructor
		
		application(dataBase *dataBase){ // 
			d=dataBase;
		}
		
		void toSave(){
			d->save();
		}
};

int main(){
	
	mongoDB mDB; //class mongoDB object
	
	sqlDB sDB;  // clas sqlDB object
	
	cout<<"\n---------------------\n";
	
	application a(&mDB); // pointer store address 
	a.toSave();
	
	cout<<"\n----------------------\n";
	
	application b(&sDB); // pointer will store address 
	b.toSave();
	
	cout<<"\n------------------------\n";
	
	return 0;
}