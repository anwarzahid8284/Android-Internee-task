#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter your Number: ";
	cin>>no;
	
	bool isCheck=true;
	if(no<=1)
	{
		isCheck=false;
	}else
	{
		for(int i=2; i<no; i++)
		{
			if(no%i==0)
			{
				isCheck=false;
				break;
			}
		}
	}
	
	if(isCheck)
	{
		cout<<no<<" is prime number";
	}else
	{
		cout<<no<<" is not prime number";
	}
}