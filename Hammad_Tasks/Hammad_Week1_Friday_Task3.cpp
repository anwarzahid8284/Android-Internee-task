#include<iostream>
using namespace std;
int main(){
	int n1,n2,max;
	
	cout<<"Enter two nombers for LCM "<<endl;
	
	cin>>n1;
	cin>>n2;
	
	max=(n1>n2) ? n1:n2;
	
	while(max<=n1*n2){
		
		if(max%n1==0 && max%n2==0){
			cout<<"The LCM of "<<n1<<" and "<<n2<<" is :"<<max<<endl;
			return 0;
		}
		max++;
	}
	
}