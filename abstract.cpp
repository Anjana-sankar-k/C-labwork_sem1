#include<iostream>
using namespace std;

class stock{
    protected:
    int price;
    int qty;

    public:
    void get(){
        cout<<"Enter price of stock: "<<endl;
        cin>>price;
        cout<<"Enter quantity of stock: "<<endl;
        cin>>qty; }

    virtual float commission()=0;
};

class s1:public stock{
    public:
    float commission(){
        if (price>1000){
            return (0.07*(price*qty));
        }
        return 0.0;
    }
};
 class s2:public stock{
    public:
    float commission(){
    if (qty>500)
    {
        return (0.05*(price*qty));
    }
    return 0.0;
    }
 };

 class s3: public stock{
    public:
    float commission(){
        if(price*qty>10000){
            return (0.1*(price*qty));
        }
        return 0.0;
    }
 };

class s4:public stock{
    public:
    float profit;
    float profit_percentage;
    void get_profit(float cp){
        profit=price-cp;
        profit_percentage=(profit*100/cp);
    }
    float commission(){
        if(profit_percentage>15){
            return (0.05*(price*qty));}
        return 0.0;
    }
};

int main(){
    string ans;
    cout<<"Enter the supplier you want to buy from: "<<endl;
    cout<<"[s1, s2, s3, s4]"<<endl;
    cin>>ans;
    if(ans=="s1"){
        s1 s;
        s.get();
        cout<<"Commission = "<<s.commission()<<endl;
    }

    if (ans=="s2"){
        s2 s;
        s.get();
        cout<<"Commission = "<<s.commission()<<endl;
    }

    if (ans=="s3"){
        s3 s;
        s.get();
        cout<<"Commission = "<<s.commission()<<endl;
    }
    if (ans=="s4"){
        s4 s;
        s.get();
        float cp;
        cout<<"Enter the cost price of stock: "<<endl;
        cin>>cp;
        s.get_profit(cp);
        cout<<"Commission = "<<s.commission()<<endl;
    }
}
