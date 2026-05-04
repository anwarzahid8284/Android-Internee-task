#include<iostream>
using namespace std;
int main(){
	
	// 1st Problem
	
	int n;

	cout<<"Enter a nomber to check is a prime or not "<<endl;
	cin>>n;
	for(int i=2;i<=(n-1);i++){
		
		if(n%i==0){
			cout<<n<<" is Not a Prime nomber \n "<<endl;
			
			return 0;
		}
	}
	cout<<"The "<<n<<" is a Prime nomber \n "<<endl;
	
}
	
	
	
	





