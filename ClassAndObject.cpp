#include<iostream>
#include<string>
using namespace std;
/*
Classes are also known as user-defined data type its like struct . And Object are used to access these Classes . 
*/
class ClassOne{
    /*
    In classes we have to know a concept known as access modifier  . Access Modifier are a modifier used to use our data's . These are divided into three they are private , public and protected.

    private access modifier is used to access the data's within the class . 
    public access modifier is used to access the data's outside the class .
    protected access modifier is used to access the data's outside the class but it holds the property of both
    */
    public:
    int NumberOne;
    int NumberTwo;
};
int main(){
    //Creating a Object to access Classone.
    ClassOne ObjectOne = ClassOne();
    //These brackets says that we are using constructor

    ObjectOne.NumberOne = 12;
    ObjectOne.NumberTwo = 18;
    cout<<"Number One : "<<ObjectOne.NumberOne<<endl;
    cout<<"Number Two : "<<ObjectOne.NumberTwo<<endl;
    return 0;
}