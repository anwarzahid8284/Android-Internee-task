#include<iostream>
using namespace std;
int main(){
	
	int n1=0 , n2=1 , limit_Of_Fib , fib;
	
	cout<<"Enter the limit_Of_Fib "<<endl;
	cin>>limit_Of_Fib;
	
	for(int i=0;i<limit_Of_Fib;i++){
		
		
		if(n1==2 && n2==3)
			continue;
			
		
		
		fib=n1+n2;
		cout<<fib<<" ";
		
		// update n1
		
		n1=n2;
		
		//update
		
		n2=fib;
	}
	
	return 0;
}