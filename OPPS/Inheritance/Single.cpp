#include<iostream>

using namespace std;

class my {
    public:
      void get(){
        cout<<"Wellcome"<<endl;
        cout<<"Kunjdev"<<endl;
      }
};

class gigariyar:public my{
    public:
      void put(){
        cout<<"You are a my gigariyar";
      }
};

int main(){
    gigariyar obj;
    obj.get();
    obj.put();
 return 0;
}