#include<iostream>
#include<string>
using namespace std;
int main() {
	
	// Reverse String
	
	string name;
	
	cout<<"Enter a string "<<endl;
	getline(cin,name);
	
	string Orignal_String=name;
	
	int n=name.length();
	int i=0,j=n-1 ;
	char temp;

	while(i<j) {

		temp=name[i];

		name[i]=name[j];
		name[j]=temp;

		i++;
		j--;
	}

	cout<<"\nreverse String is :"<<name<<endl;
	
	// Palindrome
	
	if(Orignal_String==name){
		cout<<"\nThe given string is also a Palindrome "<<endl;
	}else{
		cout<<"\nThe entered string Not a palindrom" <<endl;
	}
	
	
}