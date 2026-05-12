#include<iostream>
using namespace std;

int factor(int n){
    if(n == 1){
        return 1;
    }
    return n * factor(n - 1);
}
int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Factor = " << factor(num);

    return 0;
}