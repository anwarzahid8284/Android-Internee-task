#include<iostream>
using namespace std;
int main(){ 
	
	int size; // enter from user arraay size
	
	cout<<"Enter arr size \n"<<endl;
	cin>>size;
	
	
	
	int arr[size]; // this is the declarartion of an array
	
	for(int i=0;i<size;i++){
		cout<<"Enter array element \n"<<endl;
		cin>>arr[i];
	}
	
	
	int max=arr[0],min=arr[0];
	
	for(int i=0;i<size;i++){
		
		if(arr[i]>max){
			max=arr[i];
		}
		
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	
	cout<<"Max is "<<max<<" Min is "<<min<<"\n"<<endl;
	
	// to reverse the given array
	
	cout<<"Reverse array is "<<endl;
	for(int i=size-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}