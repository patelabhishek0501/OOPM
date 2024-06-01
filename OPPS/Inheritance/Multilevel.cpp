#include<iostream>
 using namespace std;

class A{
    public:
      void a(){
        cout<<"A"<<endl;
      }
};

class B:public A{
    public:
    void b(){
        cout<<"B"<<endl;
    }
};

class C:public B{
    public:
    void c(){
        cout<<"C"<<endl;
    }
};

class D : public C{
    public:
    void d(){
        cout<<"D";
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