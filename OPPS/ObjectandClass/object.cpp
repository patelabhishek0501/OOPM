#include<iostream>

using namespace std;

//Create a class
class Room{
    public:
    double length;//Create a data member
    double breadth;
    double height;
  double calculatedArea(){  //Member function
       return length*height;
  }
  double calculatedVolume(){ //Member function
   return length*breadth*height;
  }
};

int main(){
    Room room;
 //assign value in data member
    room.length=42.5;
    room.breadth = 30.5;
    room.height = 22.5;
    cout<<"Area of room="<<room.calculatedArea()<<endl;
    cout<<"Volume of room="<<room.calculatedVolume()<<endl;
    return 0;

}

