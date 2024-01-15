#include<iostream>
using namespace std;

template<typename t>
t big(t x, t y) {
    return (x > y) ? x : y;
}

int main() {
    cout << big<int>(10, 4) << endl;
    cout << big<double>(20.6, 67.5) << endl;
    cout << big<char>('z', 'e') << endl;
    return 0;
}
