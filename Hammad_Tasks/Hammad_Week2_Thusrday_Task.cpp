#include<iostream>
using namespace std;
int main(){
	
	int n; // this n save the size of the array
		
	cout<<"Enter Array size :"<<endl;
	cin>>n;
	
	int ar[n]; // integer array of size n
	
	cout<<"\n Enter Array elements :"<<endl;
	
	for(int i=0;i<n;i++){ // togain elements from user 
		cin>>ar[i];
	}
	
	cout<<"Accessing Array through Pointer :"<<endl;
	
	int *ptr=ar; // the direct name of array assigne to pointer -> store its first element address
	cout<<*ptr<<" ";
	
	for(int i=1;i<n;i++){
		
		cout<<*(ptr+i)<<" ";
	}
	
	
return 0;
}