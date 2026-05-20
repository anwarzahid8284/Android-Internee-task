#include<iostream>
#include<string>
using namespace std;

class Engine{
	public:
	int EngineNomber;
	string EngineName;
	
	void infoOfEngine(){
	cout<<"\nThe Engine name is : "<<EngineName<<"\n\n and the engine Nomber is : "<<EngineNomber<<endl;
	}
	
};

class car{
	public:
	int carNomber;
	string carName;
	Engine carEngine; // Accessing through HAS A Relationship Not Inheritance 
	
	void carInfo(){
		cout<<"\nCar name is :"<<carName<<" Nomber :"<<carNomber<<endl;
	}
};

int main(){
	car c1; // object of car class 
	
	// Initialize the members of car class 
	
	c1.carNomber=7809; 
	c1.carName="widz"; 
	
// initialize the members of Engine class that we have in car as a HAS A Relationship but coposition
	c1.carEngine.EngineName="BigEngine";
	c1.carEngine.EngineNomber=9009;

cout<<"\n-----------\n";

	c1.carInfo(); // information of car class

cout<<"\n-----------\n";

	c1.carEngine.infoOfEngine(); // information of engine class 
	
	return 0;
}
	