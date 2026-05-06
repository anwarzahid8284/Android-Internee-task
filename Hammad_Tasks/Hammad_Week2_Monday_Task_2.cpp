#include<iostream>
using namespace std;
int main(){
	int limit , Searching_Nomber , f=0;
	
	cout<<"Enter size of Array "<<endl;
	cin>>limit;
	
	int arr[limit];
	
	cout<<"\nEnter Acoriding size Elements of array "<<endl;
	
	for(int i=0;i<limit;i++){
		
		cin>>arr[i];
	}
	
	cout<<"\nArray is "<<endl;
	for(int i=0;i<limit;i++){
		cout<<arr[i]<<" ";
	}
	
	// Linear Search Mean Search a nomber in array Sequentially
	
	cout<<"\nEnter a nomber for search "<<endl;
	cin>>Searching_Nomber;
	
	for(int i=0;i<limit;i++){
		
		if(arr[i]==Searching_Nomber){
			f=1;
			break;
		}
	}	
	
	if(f==1){
		cout<<"\nThe Searched nomber Exisit in Array "<<endl;
	}else{
		cout<<"\nThe Searched nomber Not Exisit in Array "<<endl;
	}
}