/*#include<iostream>
using namespace std;
class A {
    public:
    virtual void fun(){
        cout<<"aamir";
    } };
   
    class B : public A {
public:

        void fun(){
            cout<<"ali";
        }
    };

    class C : public A {
public:
        void fun(){
            cout<<"noman";
        }
    };

int main (){
    A* obj = new A();
    obj->fun(); cout<<endl;
     A* obj2 = new B();
    obj2->fun();cout<<endl;
     A* obj3 = new C();
    obj3->fun();cout<<endl;
}*/

#include<iostream>
using namespace std;
class Shape{
public:
    virtual void  area(){
        cout<<"Area of Shape"<<endl;
    }
};
class Circle:public Shape{
public:
    void area(){
        cout<<"Area of Circle"<<endl;
    }
};
class Rectangle : public Shape{
public:
    void area(){
        cout<<"Area of Rectangle"<<endl;
    }
};

int main(){

    /* c;
    Rectangle r;

    c.area();
    r.area();


    return 0;*/

    Shape* obj =new Circle();
    obj->area();
    Shape* obj2 =new Rectangle();
    obj2->area();
}

