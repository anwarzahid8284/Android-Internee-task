#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of dynamic array "<<endl;
	cin>>n;
	
	cout<<"\n Elements for the given Array "<<endl;
	
	int *ptr= new int[n];
	
	for(int j=0;j<n;j++){
		cin>>ptr[j];
	}
	
	cout<<" \n Array outpu is : "<<endl;
	
	for(int i=0;i<n;i++){
		cout<< " " <<ptr[i]<<" ";
	}
	delete ptr;
	
}