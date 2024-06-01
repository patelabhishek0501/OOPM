#include<iostream>
using namespace std;

class A{
    public:
    virtual void Add(int a ,int b){
        cout<<"Sum="<<(a+b)<<endl;
    }
};

class B : public A{
    public:
    void Add(int a,int b){
        cout<<"Sum="<<(a+b+20);
    }
};

int main(){
    int a =12,b=20;
    A *P;
    B objb;
    P = &objb;
    P -> Add(a,b);
    return 0;
}