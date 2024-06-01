#include<iostream>

using namespace std;

class A{  //create a class
    private://in private mode
      int a,b;//data member
    public:    //public mode access specifier
     void sum();//function declaration
};

void A :: sum(){//function definition
  cin>>a>>b;
  cout<<"sum of two number="<<a+b<<endl;

}
int main()//main function
{
A obj;  //object creation of class A
obj.sum();//function calling
return 0;
}