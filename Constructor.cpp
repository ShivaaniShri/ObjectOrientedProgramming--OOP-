#include<iostream>
#include<string>
using namespace std;
/*
Constructor is a non-return function its like void functions . 
*/

class ConstructorClassOne{
    public:
    //Default Constructor
    int NumberOne;
    int NumberTwo;
    //We cannot initialize inside the constructor . 
    ConstructorClassOne(){
        NumberOne = 12;
        NumberTwo = 18;
    }
};

int main(){

    //Default Constructor
    ConstructorClassOne ObjectOne = ConstructorClassOne();

    ObjectOne.NumberOne = 24;
    ObjectOne.NumberTwo = 2*ObjectOne.NumberOne;

    cout<<"Number one : "<<ObjectOne.NumberOne<<endl;
    cout<<"Number two : "<<ObjectOne.NumberTwo<<endl;
}