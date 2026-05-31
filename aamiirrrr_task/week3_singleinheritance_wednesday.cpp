#include<iostream>
using namespace std;
class animal{
    public:
string name;
int age;
int speed;
string foodTpye;
  void eat(){
    cout<<"animal is eating"<<endl;

  }
    void  sleep(){
        cout<<" sleeping"<<endl;
    }

};
class dog:public animal{
    string breed;
    bool guardduty;
};

class cat : public animal{
 int huntingSkill;
 string sound;
};
int main(){
    cat s1;
    s1.age = 12;
    s1.foodTpye= "chicken";
    s1.name="cat";
    s1.sleep();
    s1.eat();
 s1.speed=12;
cout<<s1.age<<endl <<s1.foodTpye<< endl <<s1.name<< endl<<s1.speed<<endl;

 dog s2;
    s2.age = 12;
    s2.foodTpye= "chicken";
    s2.name="cat";
    s2.sleep();
    s2.eat();
 s2.speed=12;
cout<<s2.age<<endl <<s2.foodTpye<< endl <<s2.name<< endl<<s2.speed<<endl;




}