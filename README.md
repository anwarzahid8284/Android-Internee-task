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


#include <iostream>
using namespace std;
int sumdigit(int n)
{ if(n == 0)
    {
        return 0;
    } 
    return (n % 10) + sumdigit(n / 10);
}
int main()
{ int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Sum of digit= " << sumdigit(num);
    return 0;
}
