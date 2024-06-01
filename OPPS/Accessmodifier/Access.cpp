#include<iostream>
using namespace std;

class A {
    private:
     int a = 5;
     public:
      int b = 7;
    void show(){
        cout<<a<<endl<<b<<endl;
    }
};

int main(){
     A obj;
     obj.show();
     return 0;
}