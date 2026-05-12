#include<iostream>
using namespace std;

int main(){

    int num, sum = 0, rem;
    cout << "Enter Num: ";
    cin >> num;
    while(num != 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "Sum of Digit = " << sum;
    return 0;
}