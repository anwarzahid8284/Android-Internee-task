#include<iostream>
using namespace std;
int main()
{
	cout<<"Original Array:- "<<endl;
	int arr[7]={6,2,3,7,8,4,5};
	for(int t=0; t<7; t++)//index start from 0
	{
		cout<<arr[t]<<" ";
	}
	cout<<endl<<endl;
	
	//Find min an d max value in array
	int min=arr[0];
	int max=arr[0];
	 for(int i=1; i<7; i++)
	 {
	 	 if(min>arr[i])
	 	 {
	 	 	min=arr[i];
		 }
		 if(max<arr[i])
		 {
		 	max=arr[i];
		 }
	 }
	 cout<<endl<<"Min: "<<min;
	 cout<<"  Max: "<<max;
	 cout<<endl<<endl; 
	 
	 cout<<endl<<"Reverse Array:- "<<endl;
	 int start=0;
	 int end=6;
	 while(start<end)
	 {
	 	swap(arr[start],arr[end]); //swap function
	 	start++;
	 	end--;
	 }
	 
	 for(int re=0; re<7; re++)
	 {
	 	cout<<arr[re]<<"   ";
	 }
	
	return 0;
}