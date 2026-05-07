#include<iostream>
using namespace std;
int main(){
	
	int n1,n2;
	cout<<"Enter n1 value :"<<endl;
	cin>>n1;
	cout<<"\n Enter n2 value : "<<endl;
	cin>>n2;
	
	int *p1=&n1;
	int *p2=&n2;
	int *temp;
	
	cout<<"\nPointer one value is :"<<*p1<<endl;
	cout<<"\n pointer two value is :"<<*p2<<endl;
	
	temp=&n1;
	p1=&n2;
	p2=temp;
	
	cout<<"\nSwapin :"<<*p1<<endl;
	cout<<"\nSwaping :"<<*p2<<endl;
}