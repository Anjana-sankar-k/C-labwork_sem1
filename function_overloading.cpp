#include <iostream>
using namespace std;

class loan
{
public:

int q=0;
void app(int age,int sal,int cibil,int bg)
{
    if(age<=60)
    {
        q+=1;
    }
    if (sal>=50000)
    {
        q+=1;
    }
    if (cibil>4)
    {
        q+=1;
    }
    if(bg=1)
    {
        q+=1;
    }

    if(q>1)
    {
        cout<<"Loan is sanctioned"<<endl;
    }
    else{
        cout<<"loan not sanctioned"<<endl;
    }
}

void app(int age,int sal,int cibil){
    if(age<=60)
    {
        q+=1;
    }
    if (sal>=50000)
    {
        q+=1;
    }
    if (cibil>4)
    {
        q+=1;
    }

    if(q>1)
    {
        cout<<"Loan is sanctioned"<<endl;
    }
    else{
        cout<<"loan not sanctioned"<<endl;
    }
}
void app(int age, int sal)
{
    if(age<=60)
    {
        q+=1;
    }
    if (sal>=50000)
    {
        q+=1;
    }
 if(q>1)
    {
        cout<<"Loan is sanctioned"<<endl;
    }
    else{
        cout<<"loan not sanctioned"<<endl;
    }

}
};

int main()
{int arg,yourage,yoursal,yourcibil,yourbg;
cout<<"what is the number of parameters you could provide?"<<endl;
cin>>arg;//

loan l1;
if (arg==4)
{
cout<<"enter your age: "<<endl;
cin>>yourage;
cout<<"enter your sal: "<<endl;
cin>>yoursal;
cout<<"enter your cibil score:"<<endl;
cin>>yourcibil;
cout<<"enter your bg score: "<<endl;
cin>>yourbg;
l1.app(yourage,yoursal,yourcibil,yourbg);
}
if (arg==3)
{
cout<<"enter your age: "<<endl;
cin>>yourage;
cout<<"enter your sal: "<<endl;
cin>>yoursal;
cout<<"enter your cibil score:"<<endl;
cin>>yourcibil;
l1.app(yourage,yoursal,yourcibil);
}
if(arg==2)
{
cout<<"enter your age: "<<endl;
cin>>yourage;
cout<<"enter your sal: "<<endl;
cin>>yoursal;
l1.app(yourage,yoursal);
}
return 0;
}
