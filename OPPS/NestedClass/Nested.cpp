#include<iostream>
using namespace std;
class A{
    public:
 class B{
   private:
   int num;
   public:
    void getdata(int n){
       num = n;
    }
    void put_data(){
        cout<<"The number is:"<<num;
    }
 };
};

int main(){
    A::B obj;
    obj.getdata(9);
    obj.put_data();
    return 0;
}
