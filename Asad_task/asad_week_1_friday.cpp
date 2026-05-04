#include<iostream>
using namespace std;
int main()
{
	//Prime number checker
	cout<<"Prime number:- "<<endl;
	int n;
	bool checkValue=true;
	cout<<"Enter Number: ";
	cin>>n;
	if(n<=1)
	checkValue=false;
	for(int t=2; t<n; t++)
	{
		if(n%t==0)
		{
			checkValue=false;
			break;
		}
	}
	if(checkValue)
	{
		cout<<n<<" is prime no. ";
	}else
	{
		cout<<n<<" is not prime no";
	}
	
	//Palindrome Check
	cout<<endl<<endl<<"Palindrome Check:-"<<endl;
	int original;
	int num,reverse=0;
	cout<<"Enter Number: ";
	cin>>num;
	original=num;
	int last_Digit=0;
	while(num != 0)
	{
		last_Digit=(num%10);
		reverse=reverse*10+last_Digit;
		num=num/10;
	}  
	if(reverse==original)
	{
		cout<<original<<" Palindrome";
	}else
	{
		cout<<original<<" not Palindrome";
	}
	
	//GCD
	cout<<endl<<endl<<"GCD:-"<<endl;
	int g,c;
	int GCD;
	cout<<"Enter two numbers to calculate GCD: ";
	cin>>g;
	cin>>c;
	
	for(int d=1; d<=g && d<=c; d++)
	{
		if(g%d==0 && c%d==0)
		{
			GCD=d;
		}
	}
	cout<<"GCD of "<<g<<" "<<c<<" = "<<GCD;
}