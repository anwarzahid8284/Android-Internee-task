#include<iostream> //ye lib cout & cin keliye
#include<cstdlib> //This lib is used for malloc & free function
using namespace std;
int main()
{
	int n;
	int *arr; //dynamic arr ka pointer
	cout<<"Enter number of elements: ";
	cin>>n;
	arr=(int*) malloc(n*sizeof(int)); //Dynamic memeory allocate karna ,malloc func memory banata hai aur us memory ka address return krta hai
	
	if(arr==NULL)
	{
		cout<<"Memory allocation failed: ";
		return 1;
	}
	
	//user se values lena
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	//Values ko print karna
	cout<<"Values ko print karna:-  ";
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<"  ";
	}
	
	free(arr); //memeory ko free karna
	return 0;
}