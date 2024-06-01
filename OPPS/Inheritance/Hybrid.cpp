#include<iostream>
 using namespace std;

 class G{
    public:
     void ga(){
        cout<<"Grandfather"<<endl;
     }
 };

 

 class Si:public G{
    public:
     void si(){
        cout<<"Sister"<<endl;
     }
 };

        class Fa:public G{
    public:
     void fa(){
        cout<<"Father"<<endl;
     }
 };
     
 

 class Far:public Fa{
    public:
     void fra(){
        cout<<"Friend"<<endl;
     }
 };

 class Frg:public Far{
    public:
     void fg(){
        cout<<"friend of father "<<endl;
     }
 };

 class Frm: public Far{
    public:
    void fm(){
        cout<<"friend of mother"<<endl;
    }
 };

 int main(){
    Frm obj;
   
     Si pre;
     Frg pro;
   
    obj.ga();
    obj.fa();
    pre.si();
    obj.fra();
     pro.fg();
    obj.fm();
    return 0;
 }