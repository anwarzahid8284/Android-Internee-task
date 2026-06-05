#include<iostream>
using namespace std;

class account{
public:
    string tital;
    string name;
    account(string t, string n, int p){
        tital = t;
        name = n;
        pass = p;
    }
    int getpass(){
        return pass;
    }
    void setpass(int m){
        pass = m;
    }
private:
    int pass;
};
int main(){
    account s1("alfa", "aamir", 12331);
    cout << s1.name << endl;
    cout << s1.tital << endl;
    cout<< s1.getpass() << endl;
    s1.setpass(10987);
    cout << s1.getpass() << endl;

    return 0;
}