#include<iostream>
#include<string>
using namespace std;

int main(){
	int r,c; // r ->Rows and c ->Columns
	
	cout<<"Enter nomber of Rows and columns :"<<endl;
	cin>>r>>c;
	
	int Two_d[r][c]; // two dimentional array
	
	cout<<"\nEnter Elements of Rows and Columns :"<<endl;
	
	for(int i=0;i<r;i++){ // for input loops
		
		for(int j=0;j<c;j++){
			cin>>Two_d[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nThe two D Array is :\n"<<endl;
	
	for(int x=0;x<r;x++){ // for output loops
		for(int y=0;y<c;y++){
			cout<<Two_d[x][y]<<" ";
		}
		cout<<endl;
	}
	
	// String 
	
	string name="Ahmad";
	string SecondName="Hammad";
	
	// string concatnation
	
	cout<<"\nString Concatenation :\n "<<endl;
	
	string n=name+SecondName;
	
	cout<<n<<" "<<endl;
	int length;
	length=n.length();
	
	cout<<"The length of Concatenated string is :\n"<<length<<endl;
	
	// pointer
	int *p1=&r;
	
	int *p2=&c;
	
	cout<<"\n Before Swaping P1 = :"<<*p1<<" p2 = :"<<*p2<<" \n"<<endl;
	int temp;
	
	temp=*p1;
	
	p1=p2;
	
	p2=&temp;
	
	cout<<"After Swaping  P1 = :"<<*p1<<" p2 = :"<<*p2<<" "<<endl;
	
}