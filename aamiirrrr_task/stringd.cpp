#include <iostream>
using namespace std;

int main() {
string s;
getline(cin,s);
cout<<s.size()<<endl;
cout<<s<<endl;

string s1="aamir" , s2="khan" ,c3=s1.append (s2);
s1.push_back('p');

 cout<<c3;


}