#include<iostream>

using namespace std;

class ad{
    public:
      int a,b,add;
    public:
      void get();
      void sum();
};

inline void ad :: get(){
    cin>>a>>b;
}

inline void ad :: sum(){
    add = a+b;
cout<<"Sum="<<add<<endl;
}
int main(){
    ad obj;
    obj.get();
    obj.sum();
}