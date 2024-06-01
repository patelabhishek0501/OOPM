#include<iostream>>
using namespace std;

class A{
    public:
      void a(){
        cout<<"A"<<endl;
      }
};

class B :virtual public A{
    public:
    void b(){
        cout<<"B"<<endl;
    }
};

class C:virtual public A{
    public:
     void c(){
        cout<<"C"<<endl;
     }
};

class D:public B,public C{
    public:
    void d(){
        cout<<"D"<<endl;
    }
};

int main(){
    D obj;
    obj.a();
    obj.b();
    obj.c();
    obj.d();
    return 0;

}
