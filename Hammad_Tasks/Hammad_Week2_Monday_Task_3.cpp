#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cout<<"Enter Array size "<<endl;
	cin>>n;
	
	int ar[n];
	
	cout<<"\nEnter Array Elements "<<endl;
	
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	
	for(int x=0;x<n-1;x++){
		
		for(int y=0;y<n-x-1;y++){
		
			if(ar[y]>ar[y+1]){	
			//Swaping 
			
			temp=ar[y];
			ar[y]=ar[y+1];
			ar[y+1]=temp;	
			}
		}
	}
	 // Bubble Sort 
	 
	cout<<"\n Array in Accending order "<<endl;
	for(int z=0;z<n;z++){
		cout<<ar[z]<<" ";
	}
	
}