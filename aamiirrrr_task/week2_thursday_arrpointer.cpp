#include<iostream>
using namespace std;
int main(){
    int marks[]={12,34,54,2,12};
    int*p=marks;
    cout<<"print value in arr"<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;
cout<<"print address"<<endl;
 cout<<p<<endl;
    cout<<(p+1)<<endl;
    cout<<(p+2)<<endl;
    cout<<(p+3)<<endl;
    cout<<(p+4)<<endl;
    cout<<(p+5)<<endl;
   
}