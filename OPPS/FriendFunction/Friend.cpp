#include<iostream>
 
 using namespace std;

 class base {
    private:
    int p = 99;
    protected:
     int q = 34;
 friend void friendFunction(base &obj);
 };

 void friendFunction(base &obj){
    cout<<"private"<<obj.p<<endl;
    cout<<"protected"<<obj.q<<endl;
 }

 int main(){
    base object;
    friendFunction(object);
    return 0;
 }
 
 