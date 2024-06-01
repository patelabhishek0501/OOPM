//Combining similar data member and member function in a single unit
#include<iostream>

using namespace std;

class E{
    int x;
    public:
     void get(int a){
        x=a;
     }
     void show();
};

void E :: show(){
    cout<<x;
}

int main(){
    E e;
    e.get(9);
    e.show();
    return 0;
}