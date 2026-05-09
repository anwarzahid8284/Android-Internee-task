#include <iostream>
using namespace std;
int factor(int n)
{ if(n == 1)
    {
        return 1;
    }
    return n * factor(n - 1);
}int main()
{ int num;
       cout << "enter num: ";
    cin >> num;

    cout << "factor = " << factor(num);

    return 0;
}
