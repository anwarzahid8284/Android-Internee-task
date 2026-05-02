#include<iostream>
using namespace std;
//Factorial Function
int fact(int t)
{
	//Base condition
	if(t==0)
	{
		return 1;
	}
	return t* fact(t-1);
};

//Sum of digits
int sum(int s)
{
	//Base condition
	if(s==0)
	return 0;
	return (s%10) + sum(s/10); //s%10 last digit deta hai And s/10 baqi number deta hai without last digit
}
int main()
{
	cout<<"Enter Number to calculate Factorial: ";
	int q;
	cin>>q;
	int r=fact(q);
	cout<<"Factorial: "<<r;
	cout<<endl<<endl<<"___________"<<endl;
	int sum_result=sum(12);
	cout<<"Sum of digit: "<<sum_result;
	return 0;
}