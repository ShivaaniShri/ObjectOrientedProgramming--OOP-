#include<iostream>
#include<string>
using namespace std;

/*Inheritance means inheriting or copying classes*/

class InheritanceClassOne{
    private:
    string Name;
    int Age;
    int Salary;
    string Occupation;
    public:
    InheritanceClassOne(string name , int age , string occupation , int salary){
        Name = name;
        Age = age;
        Occupation = occupation;
        Salary = salary;
    }

    void PrintInheritanceClassOne(){
        cout<<"Name : "<<Name <<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Occupation : "<<Occupation<<endl;
        cout<<"Salary : "<<Salary<<" $"<<endl;
    }
};

// A inherited class can not create  a default constructor . 

class InheritanceClassTwo:public InheritanceClassOne{
    public:
    InheritanceClassTwo(string name , int age , string occupation , int salary) : InheritanceClassOne(name , age , occupation , salary){

    }
};

int main(){
    InheritanceClassTwo ObjectOne = InheritanceClassTwo("John" , 24 , "Teacher" , 24000);
    ObjectOne.PrintInheritanceClassOne();
}