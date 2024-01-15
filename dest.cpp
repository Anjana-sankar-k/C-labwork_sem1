#include<iostream>
using namespace std;

class stock
{
    public:
    int price,qty;
    stock(int p,int q)
    {
        price=p;
        qty=q;
    }
    void display()
    {
        cout<<"price: "<<price<<endl;
        cout<<"quantity: "<<qty<<endl;
    }
    ~stock()
    {
        cout<<"memory released"<<endl;
    }
};

int main()
{
    stock s1(120,90);
    s1.display();
    return 0;
}
