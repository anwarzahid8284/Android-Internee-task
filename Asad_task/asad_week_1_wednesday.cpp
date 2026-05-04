#include<iostream>
using namespace std;
int main()
{
    int fac;
    cout<<"Enter No to calculate Factorial: ";
    cin>>fac;
    int result=1;
    
	if(fac<=0)
    {
    	cout<<"Error: ";
	}else
  {
	
	
	int j=1;
    while(true)
    {
    	if(j>fac)
    	{
    		break;
		}
		
		if(j==2)
		{
			j++;
			continue;
		}
	    result*=j; 
		j++;
	}
	cout<<"Factorial: "<<result;
  }
	cout<<endl<<"______________________"<<endl;
	
	
	cout<<"Fibonaci series: "<<endl;
	cout<<"Enter No to Calculate fibonacci Series : ";
	int n;
	cin>>n;
    int a=0,b=1,c;
    for(int i=0; i<n; i++)
    { 
    	cout<<a<<" , ";
    	 c=a+b; 
    	 a=b;
    	 b=c;
	}
}