#include<iostream>
using namespace std;

class Complex{
    int real,imag;
 public:
 Complex(){
    real = 10;
    imag = 12;
 }
 void show(){
  cout<<real<<"+i"<<imag<<endl;
 }
 Complex operator +(Complex &obj){
    Complex t;
    t.real=real+obj.real;
    t.imag = imag +obj.imag;
    return t;
 }
};

int main(){
    Complex c1;
    c1.show();
    Complex c2;
    c2.show();
    Complex c3;
    c3 = c1+c2;
    c3.show();
    return 0;
}