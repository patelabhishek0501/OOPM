#include<iostream>

using namespace std;

class Base{
    public:
      virtual void show() = 0;
};

class Derived : public Base {
    public:
       void show(){
        cout<<"Derived"<<endl;
       }
};

 int main(){
    Base * bp = new Derived();
    bp -> show();
    return 0;
 }