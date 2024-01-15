#include<iostream>
using namespace std;
//Creating class
class counter{
public:
int qhand,qsold,qexp;
//Creating default constructor
counter(){
  this->qhand=0;
  this->qsold=0;
  this->qexp=0;
  }
//Creating parameterized constructor
counter(int qh,int qs,int qe){
  this->qhand=qh;
  this->qsold=qs;
  this->qexp=qe;
}
//Binary Operator overloading of + operator
counter operator +(counter &co)
{
    counter c;
    c.qhand = this -> qhand+ co.qhand;
    c.qsold = this -> qsold+co.qsold;
    c.qexp = this -> qexp + co.qexp;
    return c;
}
};
int main(){
 int a1,b1,c1,a2,b2,c2,a3,b3,c3;
 cout<<"Enter the quantity in hand:";
 cin>>a1;
 cout<<"Enter the quantity in hand:";
 cin>>a2;
 cout<<"Enter the quantity in hand:";
 cin>>a3;
 cout<<"Enter the quantity sold:";
 cin>>b1;
 cout<<"Enter the quantity sold:";
 cin>>b2;
 cout<<"Enter the quantity sold:";
 cin>>b3;
 cout<<"Enter the quantity expired:";
 cin>>c1;
 cout<<"Enter the quantity expired:";
 cin>>c2;
 cout<<"Enter the quantity expired:";
 cin>>c3;
 //Creating objects of the class
 counter cou1(a1,b1,c1);
 counter cou2(a2,b2,c2);
 counter cou3(a3,b3,c3);
 counter c;
 //Using the overloaded operator
 c=cou1+cou2+cou3;
 //Displaying final results
 cout<<"Total of quantity in  hand:"<<c.qhand<<endl;
 cout<<"Total of quantity sold:"<<c.qsold<<endl;
 cout<<"Total of quantity expired:"<<c.qexp<<endl;
}

