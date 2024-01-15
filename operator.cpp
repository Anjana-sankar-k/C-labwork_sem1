#include<iostream>
using namespace std;

class test
{
    private:
    int c;
    public:
    test():c(10){}
    void operator--()
    {
        c=c-8;
    }
    void display()
    {
        cout<<c<<endl;
    }
};

int main()
{
    test t;
    --t;
    t.display();
    return 0;
}
