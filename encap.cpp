#include<iostream>
using namespace std;

class bank
{
public:
int emp_id;
string emp_name;

private:
float sal;
float loan;

public:
void setsal(float x)
{x=sal;}
float getsal()
{ return sal;}

void setloan(float y)
{ y=loan;}
float getloan()
{return loan;}

};

int main()
{
float annualsal;float loan;float yoursalary;float yourloan;

cout<<"Enter your salary: "<<endl;
cin>>yoursalary;
cout<<"Enter the amount you want to loan: "<<endl;
cin>>yourloan;
bank a;
a.setsal(yoursalary);
annualsal=a.getsal()*12;
a.setloan(yourloan);
loan=a.getloan();

if(loan>=annualsal/2)
{
    cout<<"Loan is not sanctioned"<<endl;
}

else
{
    cout<<"Your loan is sanctioned"<<endl;
}

}
