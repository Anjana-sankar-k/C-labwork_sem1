#include <iostream>
using namespace std;
class Courses { //creation of class
public:
    int student_id; //attributes of class
    string student_name;
    string subject;
    int marks[3];
    int calculateAverage() { //a method to calculate average
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }
    void displayResult() { //method to display result
        if (calculateAverage() > 7) {
            cout << "You are qualified to apply for the course!" << endl;
        } else {
            cout << "Sorry, you are not qualified to apply for the course." << endl;
        }
    }
};
int main() {
    string subjects[] = {"Maths", "Psychology", "English", "German", "Advanced probability", "Renaissance architecture"};
    Courses student; //initialise object
    cout << "Enter your name: " << endl; //obtaining user information
    cin >> student.student_name;
    cout << "Enter your id: " << endl;
    cin >> student.student_id;
    cout << "Enter the subject of your choice out of the list: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << subjects[i] << endl;
    }
    cout << "Your answer: ";
    cin >> student.subject;
    cout << "Enter marks of top-three subjects: " << endl; //obtaining marks to check qualification
    for (int i = 0; i < 3; i++) {
        cout << "Enter mark for subject " << (i + 1) << ": ";
        cin >> student.marks[i];
    }
    student.displayResult();
    return 0;
}
