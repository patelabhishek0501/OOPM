#include<iostream>

using namespace std;

class B{
    public:
    ~B(){
        cout<<"Class B"<<endl;
    }
};

class A :public B{
    public:

    void get(){
        cout<<"Class A";
    }
};

int main(){
    A obj;
    obj.get();
    return 0;
}