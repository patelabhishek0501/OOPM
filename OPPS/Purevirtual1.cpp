#include<iostream>
using namespace std;

class Ram{
    public:
  virtual void get() =0;
};

class Sita:public Ram {
    public:
 void get(){
    cout<<"Sita"<<endl;
 }
};

int main(){
   
   Ram * bp = new Sita();
   bp -> get();
   cout<<"Wellcome";
   return 0;
}