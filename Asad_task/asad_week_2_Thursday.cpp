#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,4,5,7,8};
	int size=6;
	int *ptr;
	ptr=arr;
	
	for(int i=0; i<size; i++)
	{
		cout<<*(ptr+i); //pointer raversal
		cout<<"  Address= "<<ptr+i<<endl;
	}
	
  return 0;
}