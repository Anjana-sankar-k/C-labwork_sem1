#include<iostream>
using namespace std; //constructor and destructor
class stock{
    public:
    int price,qty;
    stock(int p,int q){ //constructor
        price=p;
        qty=q;
    }
    void display(){
        cout<<"price: "<<price<<endl;
        cout<<"quantity: "<<qty<<endl;
    }
    ~stock(){ //destructor
        cout<<"memory released"<<endl;
    }
};
int main(){
    int price,qty;
    cout<<"Enter the price of the product: "<<endl;
    cin>>price;
    cout<<"Enter the quantity of the product: "<<endl;
    cin>>qty;
    stock s1(price,qty); //object created
    s1.display();
    return 0;
}
