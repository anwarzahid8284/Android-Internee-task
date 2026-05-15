					
					//Merge Two Array

#include<iostream>
using namespace std;
int main(){
	int  limit_1, limit_2, index=0;
	
	cout<<"Enter Array_1 size "<<endl;
	cin>>limit_1;
	
	cout<<"Enter Array_2 size "<<endl;
	cin>>limit_2;
	  // ai Show the Array Number 1
	int ai[limit_1];
	
	cout<<"\nEnter Elements for Array one"<<endl;
	
	for(int i=0;i<limit_1;i++){
		cin>>ai[i];
	}
	
	
	  // aj Show the Array Number 2
	
	int aj[limit_2];
	
	cout<<"\nEnter Elements for Array Two "<<endl;
	
	for(int j=0;j<limit_2;j++){
		cin>>aj[j];
	}
	
	int s=limit_1+limit_2;
	
	
	
	  // ak name Show the Merged Array 
	  
	int ak[s];
	
	for(int i=0;i<limit_1;i++){
		
		ak[index]=ai[i];
		
		index++;
	}
	
	for(int j=0;j<limit_2;j++){
		
		ak[index]=aj[j];
		index++;
	}
	
	cout<<"\nMerged Array is "<<endl;
	for(int i=0;i<s;i++){
		cout<<ak[i]<<" ";
	}

}
