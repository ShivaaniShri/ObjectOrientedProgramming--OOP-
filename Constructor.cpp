#include<iostream>
#include<string>
using namespace std;
/*
Constructor is a non-return function its like void functions . 
*/
/*Default constructor is a constructor without parameters and arguments*/
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

/*Parameterized Constructor is a constructor with parameters and arguments*/

class ConstructorClassTwo{
    /*
    Encapsulation means making data's private using private access modifier .
    
    */
    private:
    string PersonName;
    int PersonAge;
    public:
    //Parameterized Constructor
    ConstructorClassTwo(string personName , int personAge){
        PersonName = personName;
        PersonAge = personAge;
    }

    //This function is to print the constructor . 
    void PrintConstructor(){
        cout<<"Name : "<<PersonName<<endl;
        cout<<"Age : "<<PersonAge<<endl;
    }
};

int main(){

    //Default Constructor
    ConstructorClassOne ObjectOne = ConstructorClassOne();

    ObjectOne.NumberOne = 24;
    ObjectOne.NumberTwo = 2*ObjectOne.NumberOne;
    cout<<"Default Constructor : "<<endl;
    cout<<"Number one : "<<ObjectOne.NumberOne<<endl;
    cout<<"Number two : "<<ObjectOne.NumberTwo<<endl;

    //Parameterized Constructor
    cout<<"Parameterized Constructor : "<<endl;
    ConstructorClassTwo ObjectTwo = ConstructorClassTwo("John",24);
    ObjectTwo.PrintConstructor();
}