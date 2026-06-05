#include<iostream>
using namespace std;
int n;
class Car{
public:
    string name;
    string color;
    int seat;
    int model; 
    string company; 



};
 void pri(Car c3)
{
    
    cout<<c3.color<<" " <<c3.company<<" "<<c3.model<<" "<<c3.name<<" "<<" "<<c3.seat<<endl;

}
void change (Car & c4){
    c4.name="kia";
    cout<<c4.name<<" "<<endl;
}
int main(){
  
  Car c1;
  c1.name ="civic";
  c1.color="black";
  c1.seat=7;
  c1.company="honda";
  
  
  Car c2;
  c2.name ="haval";
  c2.color="black";
  c2.seat=7;
  c2.company="GWM";
  
  pri(c1);
  pri(c2);
  change(c2);
  
return 0;
  /*cout<<c1.color<<"  "<<c1.company<<"  "<<c1.model<<"  "<<c1.name<<"  "<<c1.color<<endl;
    cout<<c2.color<<"  "<<c2.company<<"  "<<c2.model<<"  "<<c2.name<<"  "<<c2.color<<endl;*/



}

