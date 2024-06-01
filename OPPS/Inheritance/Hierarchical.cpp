#include<iostream>

using namespace std;

class G{
    public:
       void gf(){
      cout<<"Grandfather"<<endl;
       }
};

class f:public G{
    public:
      void r(){
        cout<<"Father"<<endl;
      }
};

class R:public G{
    public:
     void tr(){
        cout<<"Brother"<<endl;
     }
};

class S:public G{
    public:
    void si(){
        cout<<"Sister";
    }
};


int main(){
    S obj;
    f rem;
    R pem;
    obj.gf();
    rem.r();
    pem.tr();
    obj.si();
    return 0;
}