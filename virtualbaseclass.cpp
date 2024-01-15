#include<iostream>
using namespace std;

class a //virtual baseclass
{
    public:
    void show()
    {
        cout<<"Hello from A "<<endl;
    }
};
class b: virtual public a //usage of virtual baseclass
{

};
class c:virtual  public a
{

};
class d:public b,public c
{

};

int main()
{
    d o;
    o.show();
    return 0;
}
