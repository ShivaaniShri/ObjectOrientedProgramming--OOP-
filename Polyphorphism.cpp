#include<iostream>
#include<string>
using namespace std;
/*
Polyphorphism means inheriting multiple classes . 
*/
//If we not create a construtor in main class we not need to create a constructor in inherited classes.
class ClassOne{
    public:
    void virtual FunctionOne() = 0;
};
class ClassTwo : public ClassOne{
    public:
    void FunctionOne(){
        cout<<" Hello World "<<endl;
    }
};

/*
if we get  Hello World polyphorphism works . 
*/
int main(){
    ClassTwo ObjectOne;
    ClassOne* ObjectTwo = &ObjectOne;
    ObjectTwo->FunctionOne();
    return 0;
}