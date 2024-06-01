//Hide unnecessary data and only show necessary data is called data abstraction.

#include<iostream>

using namespace std;

class S{s
    private:
      int a,b,c;
    public:
     void add(){
        cin>>a>>b;
        c=a+b;
        cout<<"Sum = "<<c;
     }
};

int main(){
    S obj;
    obj.add();
    return 0;
}