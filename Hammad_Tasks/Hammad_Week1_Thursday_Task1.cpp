#include<iostream>
using namespace std;

int fac(int n){
	
	if(n==1){
		
		return 1;
	}
	
	return n*fac(n-1);
}

int main(){
	int a;
	
	cout<<"Enter value for factorial "<<endl;
	cin>>a;
	
	cout<<fac(a)<<" "<<endl;
	
}