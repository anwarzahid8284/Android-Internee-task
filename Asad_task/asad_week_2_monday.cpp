#include<iostream> 
using namespace std;
int main()
{
	int arr1[]={8,6,9,5,7};
	int target=5;
	int size1=5;
	int index;
	bool check=false;
	
	//Linear Search
	for(int i=0; i<5; i++)
	{
		if(arr1[i]==target)
		{
			index=i;
			check=true;
			break;
		}
	}
	
	if(check)
	{
		cout<<"Value mili at index= "<<index;
	}else
	{
		cout<<"Value nahin mili ";
	}
	
	
	//Bubble sort
	cout<<endl<<endl<<"Bubble Sort:- "<<endl;
	int arr2[]={3,1,4,2};
	int temp;
	int size2=4;
	for(int j=0; j<size2-1; j++)
	{
		for(int k=0; k<size2-j-1; k++)
		{
			if(arr2[k]>arr2[k+1])
			{
			temp=arr2[k];
			arr2[k]=arr2[k+1];
			arr2[k+1]=temp;}
		}
	}
	//Print bubble sort array
	for(int l=0; l<size2; l++)
	{
		cout<<arr2[l]<<" ";
	}
	
	
	//Merge two Arrays
	cout<<endl<<endl<<"Merge arr_1 and arr_2:- "<<endl;
	int m_arr[size1+size2];
	//copy arr_1 into m_arr
	for(int m=0; m<size1; m++)
	{
		m_arr[m]=arr1[m];
	}
	
	//copy arr_2 int m_array
	for(int n=0; n<size2; n++)
	{
		m_arr[size1+n]=arr2[n];
	}
	
	//Print merge array
	for(int p=0; p<size1+size2; p++)
	{
		cout<<m_arr[p]<<" ";
	}
	
	
	return 0;
}