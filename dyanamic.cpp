#include<iostream>
using namespace std; //dynamic constructors
class person{
    public:
    int* age;
    string* name;
    person(int* a){
        age=new int;
        age=a;
    }
    void display(){
        cout<<"Age: "<<*age<<endl;
    }
};

int main(){
    int a;
    cout<<"Enter your age: "<<endl; //prompting user input
    cin>>a;
    person p2(&a);
    p2.display();
    return 0;
}
