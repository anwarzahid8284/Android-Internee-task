#include<iostream>
using namespace std;
int main()
{
	//2D array Operartion
	cout<<"2D array Operartion:- "<<endl<<endl;
	int Td_Arr[3][3]={ //2D array mein 3 row aur 3 columns hai
		{20,30,40},
		{50,75,49},
		{30,25,15}
	};
	
	for(int i=0; i<3; i++)  //Ye outer Loop hai
	{
		for(int j=0; j<3; j++)   //Ye inner loop hai
		{
			cout<<Td_Arr[i][j]<<"		";
		}
		cout<<endl<<endl;
	}
	
	//String Manipulation
	cout<<endl<<endl<<"String manipulation:- "<<endl<<endl;
	string name="Asad";
	cout<<"Name: "<<name<<endl;
	int len=name.length();
	cout<<"Lenght= "<<len<<endl ;
	
	//String ko Reverse karna
	cout<<"Reverse name: ";
	for(int k=len-1; k>=0; k--)
	{
		cout<<name[k];
	}
	
	
	//Pointers Problem
	cout<<endl<<endl<<"Pointer problem:- "<<endl<<endl;
	int a;
	cout<<"Enter number: ";
	cin>>a;
	int *ptr=&a;  //pointer are used to store address of varaible
	cout<<"You Entered: "<<a<<endl;
	cout<<"Address of "<<a<<"= "<<ptr<<endl;
	cout<<"Value at Address "<<ptr<<"= "<<*ptr;
	
	return 0;
} 