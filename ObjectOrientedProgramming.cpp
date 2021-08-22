#include<iostream>
#include<string>
using namespace std;
class MainClass{
    private:
    string PersonOccupation;
    unsigned long int PersonSalary = 0;

    protected:
    int PersonAge;
    string PersonName;

    public:
    MainClass(string personname , int personage , string personoccupation , unsigned long int personsalary){
        PersonAge = personage;
        PersonName = personname;
        PersonOccupation = personoccupation;
        PersonSalary = personsalary;
    }

    void Print(){
        cout<<"Name : "<<PersonName<<endl;
        cout<<"Age : "<<PersonAge<<endl;
        cout<<"Occupation : "<<PersonOccupation<<endl;
        cout<<"Salary : "<<PersonSalary<<" $"<<endl;
    }

    virtual void CheckForRetirement() = 0;

    virtual void CheckForPromotion() = 0;
};
class InheritedClassOne : public MainClass{
    public:
    InheritedClassOne(string personname , int personage , string personoccupation , unsigned long int personsalary) : MainClass(personname , personage , personoccupation , personsalary){

    }

    void CheckForRetirement(){
        if(PersonAge>=50){
            cout<<PersonName<<" is ready to retire or already retired."<<endl;
        }
        else cout<<PersonName<<" is not retired."<<endl;
    }

    void CheckForPromotion(){
        if(PersonAge <= 35){
            cout<<PersonName<<" is promoted."<<endl;
        }
        else cout<<PersonName<<" is not promoted."<<endl;
    }
};
int main(){
    InheritedClassOne ObjectOne = InheritedClassOne("John",24,"Teacher",24000);
    MainClass* ObjectTwo = &ObjectOne;
    ObjectTwo->Print();
    ObjectTwo->CheckForPromotion();
    ObjectTwo->CheckForRetirement();
}