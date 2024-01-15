#include<iostream>
using namespace std;
struct emp{ //defining struct
    int id;
    string name;
    float sal;
};
int main(){
    int a;
    //using struct in main program
    emp manager; //assigning information about company employees using structs
    manager.id=101;
    manager.name="John";
    manager.sal=80000;
    emp clerk;
    clerk.id=102;
    clerk.name="Mary";
    clerk.sal=75000;
    emp assistant;
    assistant.id=100;
    assistant.name="Gu won";
    assistant.sal=90000;
    emp accountant;
    accountant.id=103;
    accountant.name="Michael";
    accountant.sal=100000;
    emp lawyer;
    lawyer.id=104;
    lawyer.name="Harvey specter";
    lawyer.sal=120000;
    emp programmer;
    programmer.id=105;
    programmer.name="Jenna rue";
    programmer.sal=100000;
    cout<<"Enter your employee id: "<<endl;
    cin>>a;
    switch(a){ //using switch to make the details accessible to user.
        case 100:
        cout<<"Employee id: "<<assistant.id<<endl;
        cout<<"Employee name: "<<assistant.name<<endl;
        cout<<"Employee salary: "<<assistant.sal<<endl;
        break;
        case 101:
        cout<<"Employee id: "<<manager.id<<endl;
        cout<<"Employee name: "<<manager.name<<endl;
        cout<<"Employee salary: "<<manager.sal<<endl;
        break;
        case 102:
        cout<<"Employee id: "<<clerk.id<<endl;
        cout<<"Employee name: "<<clerk.name<<endl;
        cout<<"Employee salary: "<<clerk.sal<<endl;
        break;
        case 103:
        cout<<"Employee id: "<<accountant.id<<endl;
        cout<<"Employee name: "<<accountant.name<<endl;
        cout<<"Employee salary: "<<accountant.sal<<endl;
        break;
        case 104:
        cout<<"Employee id: "<<lawyer.id<<endl;
        cout<<"Employee name: "<<lawyer.name<<endl;
        cout<<"Employee salary: "<<lawyer.sal<<endl;
        break;
        case 105:
        cout<<"Employee id: "<<programmer.id<<endl;
        cout<<"Employee name: "<<programmer.name<<endl;
        cout<<"Employee salary: "<<programmer.sal<<endl;
        break;
        default:
        cout<<"Not an employee of the institution."<<endl;
        break;
    }
    return 0;
}


