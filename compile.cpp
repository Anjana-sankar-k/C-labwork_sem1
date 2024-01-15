#include<iostream>
using namespace std;
//Creating parent class
class RBI{
    public:
    float loanrule(float loan){
    float repay=loan+loan*(0.05);
    return repay;
    }
};
class SBI:public RBI{
    public:
    float sbirule(float loan)
    {
        if(loan>1000000)
        {
            float repay1= loan*(0.04);
            float rbi=loanrule(loan);
            return repay1+rbi;
        }
        else{
            return loanrule(loan);
        }
    }
};
class CB:public RBI{
    public:
    float cbrule(float loan,float year)
    {
        if (year>9){
            float repay2=loan*(0.02);
            float rbi=loanrule(loan);
            return repay2+rbi;
        }
        else{
            return loanrule(loan);
        }
    }
};
int main()
{
    string ans;float yourloan;float tenure;
    cout<<"WELCOME!"<<endl;
    cout<<"Enter the bank you would like to take a loan from: "<<endl;
    cin>>ans;
    if (ans == "sbi" || "SBI" || "Sbi" || "STATE BANK OF INDIA" ){
        SBI s1;
        cout<<"Enter the amount you would like to loan: "<<endl;
        cin>>yourloan;
        cout<<"Enter the number of years of tenure: "<<endl;
        cin>>tenure;
        cout<<"The amount you have to repay is "<<s1.sbirule(yourloan)<<endl;
    }
    else if (ans == "CB" || "cb" || "Canara Bank" || "CANARA BANK" || "canara bank" ){
        CB c1;
        cout<<"Enter the amount you would like to loan: "<<endl;
        cin>>yourloan;
        cout<<"Enter the number of years of tenure: "<<endl;
        cin>>tenure;
        cout<<"The amount you have to repay is "<<c1.cbrule(yourloan,tenure)<<endl;
    }
    return 0;
}

