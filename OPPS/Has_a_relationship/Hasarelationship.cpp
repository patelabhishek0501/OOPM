#include<iostream>
 using namespace std;
 class Engine{
    public:
    void start(){
        cout<<"Engine started"<<endl;
    }
    void stop(){
        cout<<"Engine stopped"<<endl;
    }
 };

 class Car{
    private:
    Engine carEngine;//Car has a engine
    public:
     void startCar(){
        carEngine.start();
        cout<<"car started"<<endl;
     }

 void stopCar(){
    carEngine.stop();
    cout<<"Car stopped"<<endl;sss
 }
 };

 int main(){
    Car myCar;
    myCar.startCar();
    myCar.stopCar();
    return 0;
 }