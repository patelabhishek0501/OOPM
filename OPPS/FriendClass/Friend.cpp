#include<iostream>
using namespace std;

class A{
    private:
    char ch = 'A';
    int num = 20;
    public:
     friend class B;
};

class B{
    public:
    void display(A obj){
        cout<<"character:"<<obj.ch<<endl;
        cout<<"Number:"<<obj.num<<endl;
    }
};

int main(){
    B obj;
    A obj2;
 obj.display(obj2);
  return 0;
}