#include<iostream>
using namespace std;
int main()
{
    int a=10 , b=20 , *p ,*q , temp ;
     p = &a;
     q = &b;
cout<<a<<b<<endl;
    temp=*p;
    *p=*q;
    *q=temp;
    cout<<a<<b;

    return 0;


}