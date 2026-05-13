#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int main(){
    int result;
    result = add(5, 3);
    cout << "sum = " << result;
    return 0;
}