#include<iostream>
using namespace std;
float add(float a,float b){  //function for finding sum
    float sum= a+b;
    return sum;
}
float subtract(float a, float b){
    if(a>b){
        float difference= a-b;
        return difference;
    }
    else{
        float difference=b-a;
        return difference;
    }
}
float multiply(float a, float b){
        float product=a*b;
        return product;
    }
float divide(float a, float b){
        float quotient=a/b;
        return quotient;
    }
int main(){
    float a,b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Sum: "<<add(a,b)<<endl;
    cout<<"Difference: "<<subtract(a,b)<<endl;
    cout<<"Product: "<<multiply(a,b)<<endl;
    cout<<"Quotient: "<<divide(a,b)<<endl;
    return 0;
}
