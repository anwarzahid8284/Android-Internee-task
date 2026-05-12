#include<iostream>
using namespace std;
int main(){
    int num, rever = 0, rem, orig;
    cout << "Enter Number: ";
    cin >> num;

    orig = num;
    while(num != 0){

        rem = num % 10;
        rever = rever * 10 + rem;
        num = num / 10;
    }
    if(orig == rever){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}