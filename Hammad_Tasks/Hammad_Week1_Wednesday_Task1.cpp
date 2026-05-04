#include<iostream>
using namespace std;
int main(){
	int n; 
	int f=1;
	
	cout<<"Enter a nomber for factorial "<<endl;
	cin>>n;
	
	if(n==0){
		cout<<"Enter Greator then 0 value "<<endl;
		return 0;
	}else{
	
	for(int i=1;i<=n;i++){
		
		f=f*i;
	}
	
	cout<<"The factorial of "<<n<<" is :"<<f<<endl;
}
}