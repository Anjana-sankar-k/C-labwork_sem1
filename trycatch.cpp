//exception handling
#include<iostream>
using namespace std;

float div(float num, float den)
{
    if(den==0)
    {
throw runtime_error ("\nmath error");

    }
    return num/den;
}

int main()
{
    float a,b,r;
    cout<<"Enter the numerator"<<endl;
    cin>>a;
    cout<<"Enter the denominator"<<endl;
    cin>>b;
    try
    {
        r = div(a,b);
        cout<<"The remainder is "<<r<<endl;
    }
    catch(runtime_error&e)
    {
        cout<<"You cannot divide the numerator by zero"<<e.what()<<endl;
        return 0;
    }
}
