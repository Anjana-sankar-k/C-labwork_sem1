#include<iostream>
using namespace std;

namespace sp1
{
    void display()
    {
        cout<<"This is a test."<<endl;

    }
}
namespace sp2
{
    void display()
    {
        cout<<"don't panic."<<endl;
    }
}
using namespace sp1;
int main()
{
    display();
    return 0;
}







