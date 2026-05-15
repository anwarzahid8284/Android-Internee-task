#include<iostream>
using namespace std;

int main(){
    int arr[5] = {13,20,28,40,50};
        int num;
    bool foun = false;
         cout << "Enter number: ";
    cin >> num;
     for(int i = 0; i < 5; i++){

        if(arr[i] == num){
            foun = true;
            break;
        }
    }
    if(foun){
        cout << "Num Found";
    }
    else{
        cout << "Num Not Found";
    }
    return 0;
}