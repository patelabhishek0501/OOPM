//Create and write to a file
#include<iostream>

#include<fstream>
using namespace std;

int main(){
    //Create and open a text file
    ofstream MyFile("filename.txt");

    //Write to file
    MyFile<<"My name is  ";
    //Close to the file
    MyFile.close();
}