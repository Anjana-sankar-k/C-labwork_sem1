#include <iostream>
using namespace std;
// Base class
class concert {
public:
    virtual void book_ticket() {
        cout << "ticket is booked\n";
    }
};
// Derived class
class bts : public concert {
public:
    void book_ticket() override {
        cout << "congratulations!, enjoy your BTS concert\n";
    }
};
// Another derived class
class Taylor_s : public concert {
public:
    void book_ticket() override {
        cout << "congratulations!Enjoy your swift concert\n";
    }
};
int main() {
    concert *concertPtr;
    bts bts;
    Taylor_s Taylor_s;
    string ans;
    cout<<"Enter the concert you want to book: "<<endl;
    cin>>ans;
    if (ans == "bts" || ans == "BTS"){
    concertPtr = &bts;
    concertPtr->book_ticket(); //call function
    }
    else if (ans == "Taylorswift" ||ans == "TS"|| ans == "taylorswift"){
    concertPtr = &Taylor_s;
    concertPtr->book_ticket(); //call function
    }
    else {
        cout << "Invalid concert choice" << endl;
    }
    return 0;
}
