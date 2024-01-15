#include<iostream>
using namespace std;//parametric
class person{
    public:
    string name;
    int age;
    person(string n){
        name=n;
        age=19;
    }
    person(int a){
        name="alia";
        age=a;
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
    string name; int age;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter age: "<<endl;
    cin>>age;
    person p1(name,age);
    p1.display();
    return 0;
}
