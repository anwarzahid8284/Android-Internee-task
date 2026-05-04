#include<iostream>

using namespace std;

int main(){
	
	int n; // int is data type and n is a variable that store int type value
	
	cout<<"Enmter  a nomber n "<<endl;
	cin>>n;
	
	int a=1;
	
	for(int i=2;i<=n;i++){
		a=a+i;
	}
	cout<<a<<endl;
}