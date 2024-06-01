#include<iostream>

using namespace std;

class A{
    public:
       
      A(){
     
     cout<<"ClassA"<<endl;
      }
};

class B : public A {
    public:

    void gr(){
        cout<<"Class B";
    }
};

int main(){
    B obj;
    
    obj.gr();
    return 0;
}