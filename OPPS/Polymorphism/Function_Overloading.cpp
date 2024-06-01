#include<iostream>
using namespace std;

class A{
    public:
    void Add(int a ,int b){
        cout<<"Sum1="<<a+b<<endl;
    }
    void Add(int a,float b){
        cout<<"Sum2="<<a+b<<endl;
    }
    void Add(float a,float b,float c){
          cout<<"Sum3="<<(a+b+c)<<endl;
    }
};
int main(){
    A obj;
    obj.Add(2,3);
    obj.Add(4,8);
    obj.Add(2.0,3.2,4.2);
    return 0;
}
