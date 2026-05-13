#include<iostream>
using namespace std;

int main(){

    int a, b, gcd;

    cout << "Enter  2 Num: ";
    cin >> a >> b;
    for(int i = 1; i <= a && i <= b; i++){

        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    int lcm = (a * b) / gcd;
    cout << "gcd = " << gcd << endl;
    cout << "lcm = " << lcm;
    return 0;
}