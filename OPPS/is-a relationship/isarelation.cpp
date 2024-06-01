#include<iostream>

using namespace std;

class Animal{
    public:
    void eat(){
    cout<<"Animals is eating";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<" Dog is a barking";
    }
};
int main(){
    Dog d;
    d.eat();
    d.bark();
    return 0;
}

// is the example Dog is Derived class that is-a type of Animal.
// The Dog class inherit the eat method from the Animal .
// base class representing the is-a relationship where,a dog is a type of animal