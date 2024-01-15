#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person (const person&obj){ //copy constructor
        name=obj.name;
        age=obj.age;
    }
    person(string n, int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    person p1("Mohan",45); //object created
    p1.display();
    person p2(p1);
    p2.display();
}
