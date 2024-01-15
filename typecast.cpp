#include<iostream>
using namespace std;
int main()
{
 //implicit type casting
 int x=10;
 char y='a';
 x=x+y;
 float z=x+7.9;
 cout<<"IMPLICIT TYPE CASTING"<<endl;
 cout<<"x = "<<x<<endl;
 cout<<"y = "<<y<<endl;
 cout<<"z = "<<z<<endl;
 //assigned type casting
 cout<<"ASSIGNED TYPE CASTING: ASSIGNED"<<endl;
 double a = 89.67;
 int sum1 = int(a) +19;
 cout<<"Sum is " <<sum1<<endl;
 cout<<"ASSIGNED TYPE CASTING: CASTING"<<endl;
 double b = 89.67;
 int diff=static_cast<int>(b)-13;
 cout<<"Difference is "<<diff<<endl;
 return 0;

}
