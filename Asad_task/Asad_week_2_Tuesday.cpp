#include<iostream>
#include<string>
using namespace std;
int main()
{
	char name[50];
	cout<<"Enter string: ";
	cin>>name;
	
	//string Length
	int str_length=strlen(name);
	cout<<"String Length = "<<str_length;
	char copy[100];
	
	strcpy(copy, name); //strcpy Function
	cout<<endl<<"Name: "<<copy;
	
	
	//String Reversal
	char rev[50];
	for(int i=0; i<str_length; i++)
	{
		rev[i]=name[str_length-i-1];
	}
	
	rev[str_length]='\0'; //string end karne keliye null use kia hai
	cout<<endl<<"Reverse String: "<<rev; 
	cout<<endl;
	
	
	//Check palindrome
	if(strcmp(name, rev)==0) //this func is used to compare 2 string
	{
		cout<<name<<" is Palindrome:";
	}else
	{
		cout<<name<<" is not Palindrome:";
	}
	return 0;
}
