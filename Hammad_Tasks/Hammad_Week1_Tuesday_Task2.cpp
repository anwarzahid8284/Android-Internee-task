#include<iostream> // including input output Library

using namespace std; // without this we must write with every cout Scope resolution operator

int main(){
	
	// To check th enomber is even or odd
	
	int A; // a is sa variable  and int its data type mean it store integer value
	
	cout<<"Enter a nomber to check that is Even or Odd "<<endl;
	cin>>A;
	
	if(A%2==0){
		cout<<"The nomber "<<A<<" Is an Even nomber "<<endl;
	}else{
		cout<<"The nomber "<<A<<" Is Odd "<<endl;
	}
	
	// The largest nomber From Three integers
	
	int n1,n2,n3;
	
	
	cout<<"Enter n1 "<<endl;
	cin>>n1;
	
	cout<<"Enter n2 "<<endl;
	cin>>n2;
	
	cout<<"Enter n3 "<<endl;
	cin>>n3;
	
	
	if(n1>n2 && n2>n3){
		
		cout<<"The nomber "<<n1<<" is greator "<<endl;
	}
	else if(n2>n1 && n1>n3){
		
		cout<<"The nomber  "<<n2<<" is Greator  "<<endl;
		
	}else{
		cout<<"The nomber "<<n3<<" is Greator "<<endl;
	}
} 

