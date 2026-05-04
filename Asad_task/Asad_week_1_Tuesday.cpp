#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Enter No: ";
	cin>>t;
	if(t%2==0)
	{
		cout<<t<<" is Even";
	}else
	cout<<t<<" is Odd";
	
	//Largest of 3
	cout<<endl<<"Largest Of 3 : "<<endl<<"__________"<<endl;
	cout<<"Enter 3 numbers: ";
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b && a>=c)
	{
		cout<<a<<" is largest";
	}else if(b>=a && b>=c)
	{
		 cout<<b<<" is laegest";
	}
	else
	cout<<c<<" is largest";
}