//explain different types of constructors.
#include<iostream>
using namespace std; // usage of default constructors
class person
{
public:
string name;
int age;
person()
{
name;
age;
}
void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};

int main()
{
    person p1;
    p1.display();
    return 0;
}
