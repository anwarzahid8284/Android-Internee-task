#include<iostream>
using namespace std;
int main(){
	
		int remainder , number , orignalNumber , reNumber =0 ;
	
	cout<<"Enter a nomber for checking a palindrome \n "<<endl;
cin>>number;

orignalNumber = number;

while(number != 0){
	
	remainder=number%10;
	
	reNumber =  reNumber*10 + remainder;
	
	number=number/10;
	
}

if(reNumber==orignalNumber){
	
	cout<<"The number "<<orignalNumber<<" is a palindrome \n "<<endl;
}else{
	
	cout<<"The number "<<orignalNumber<<" is Not a palindrome \n "<<endl;
 }
}
