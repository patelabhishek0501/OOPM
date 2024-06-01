
#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() =0;

    
};

class Digit : public Base{
    public:
    void show(){
        cout<<"Digit";
    }
};

int main(){
    Base *bp = new Digit();
     bp -> show();

}