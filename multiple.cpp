#include<iostream>
using namespace std;
//Creating a base class
class GST{
public:
float calcgst(float price){
  float gst=price*0.05;
  return gst;}
};
//Creating another base class
class SGST{
public:
float calcsgst(float pri){
float sgst=pri*0.02;
return sgst;}
};
//Creating a derived class from both the base classes
class product:public GST,public SGST{
public:
float qty;
float p;
};
int main(){
//creating an object of derived class
product pro;
int id;
string item;
//Getting user input
cout<<"Enter item id:";
cin>>id;
cout<<"Enter item name:";
cin>>item;
cout<<"Enter quantity:";
cin>>pro.qty;
cout<<"Enter price:";
cin>>pro.p;
//Using derived methods from base class
float a=pro.calcgst(pro.p);
float b=pro.calcsgst(pro.p);
float tot=(pro.p*pro.qty)+a+b;
//Printing details
cout<<endl<<"****BILL****"<<endl;
cout<<"ITEM ID:"<<id<<endl;
cout<<"ITEM NAME:"<<item<<endl;
cout<<"TOTAL PRICE:"<<tot<<endl;
}

