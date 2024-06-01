#include<iostream>
using namespace std;

class student{
    public:
      void stu(){
        cout<<"Student"<<endl;
      }
};

class teacher{
    public:
     void tea(){
        cout<<"Teacher"<<endl;
     }
};

class college:public student,public teacher{
    public:
      void coll(){
        cout<<"College"<<endl;
      }
};

int main(){
    college obj;
    obj.stu();
    obj.tea();
    obj.coll();
    return 0;
}

