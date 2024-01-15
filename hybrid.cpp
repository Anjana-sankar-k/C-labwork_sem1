#include<iostream>
using namespace std;
class stock{ //base class
    public:
    string stockname; int stockid;int qty;
};
class supplier{ //another base class
    public:
    string suppliername;
    int discountrate;
};
class product: public stock,public supplier{ //derived class
    public:
    int price;
    int purchaseqty;
};
int main(){
    product p1;
    int initial;int netprice;
    cout<<"Enter the stock id: "<<endl;
    cin>>p1.stockid;
    cout<<"Enter the name of the product: "<<endl;
    cin>>p1.stockname;
    cout<<"Enter the price of the product: "<<endl;
    cin>>p1.price;
    cout<<"Enter the quantity of product purchased: "<<endl;
    cin>>p1.purchaseqty;
    initial=p1.qty;
    initial=100;
    p1.discountrate=p1.price*10/100;
    netprice=(p1.price*p1.purchaseqty)-p1.discountrate;
    if(p1.purchaseqty>initial){
        cout<<"Required quantity is unavailable"<<endl;
    }
    else{
        initial= initial-p1.purchaseqty;
    }
    cout<<"The updated quantity is: "<<endl;
    cout<<"Product ID: "<<p1.stockid<<endl;
    cout<<"Product name: "<<p1.stockname<<endl;
    cout<<"Purchased quantity: "<<p1.purchaseqty<<endl;
    cout<<"Discounted amount: "<<p1.discountrate<<endl;
    cout<<"Net price: "<<netprice<<endl;
return 0;
}
