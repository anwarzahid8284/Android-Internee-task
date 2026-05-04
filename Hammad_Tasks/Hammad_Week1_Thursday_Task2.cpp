#include<iostream>
using namespace std;
int main(){
	int n , sum=0;
	
	
	cout<<"Enter a nomber that we will add them "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		sum=sum + ( n%10 );
		
		n=n/10;
	}
	cout<<"The sum of digits is "<<sum<<endl;
}