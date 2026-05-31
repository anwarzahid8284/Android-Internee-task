#include<iostream>
using namespace std;

class loading{
public:
    void sum(int a, int b){
   cout<<a+b<<endl;
  
}

void sum(int a, int b ,int c){
   cout<<a+b+c<<endl;
  
}
     void sum(string a, string b){
   cout<<a+b<<endl;}
};
int main(){
 loading s1;
   s1.sum(2 ,4);
    s1.sum(2 ,4 ,7);
    s1.sum("aamir","khan");
  
     
}