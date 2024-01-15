#include<iostream>
using namespace std;
//Creating class
class stockadd{
public:
int price,qty,tax;
//Creating parameterized constructor
stockadd(int p,int q,int t){
//Using implicit pointers
  this->price=p;
  this->qty=q;
  this->tax=t;
}
//Unary operator overloading of + operator
void operator+(){
  price+=20;
  qty+=10;
  tax+=1;
  cout<<"Stock price is:"<<price<<endl;
  cout<<"Stock quantity is:"<<qty<<endl;
  cout<<"Stock tax is:"<<tax<<endl;
}
};
int main(){
int pr,qt,ta;
cout<<"Enter price:";
cin>>pr;
cout<<"Enter quantity:";
cin>>qt;
cout<<"Enter tax:";
cin>>ta;
//Creating object of class
stockadd st(pr,qt,ta);
//Use of overloaded operator in main() program
+st;
}
