#include <iostream>
using namespace std;
class Complex { //Creating a class
    public:
    float real;
    float imag;
    Complex(){ //Creating default and parameterized constructors
        real=0;
        imag=0;
    }
    Complex(float r, float i) {
        real=r;
        imag=i;
    } //Creating function to add two complex numbers
    Complex add(const Complex& obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }  //Creating function to display the complex number
    void display() {
        cout<< real << " + " << imag <<" i "<<endl;
    }
};
int main() { //Creating two complex numbers
    Complex complex1(8.0, 5.5);
    Complex complex2(0.5, 6.0);
    Complex result = complex1.add(complex2); //Adding the two complex numbers
    //Displaying the result
    cout << "Result of addition:" << endl;
    result.display();
}
