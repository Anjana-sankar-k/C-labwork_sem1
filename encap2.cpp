#include<iostream>
using namespace std;
class employee {
public:
    string name;
    int id;
    string department;
    float salary;
    // Constructor to initialize employee details
    employee(string emp_name, int emp_id, string emp_dept, float emp_sal) {
        name = emp_name;
        id = emp_id;
        department = emp_dept;
        salary = emp_sal;
    }
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee department: " << department << endl;
        cout << "Employee salary: " << salary << endl;
    }
    void updatesal(float new_sal) {
        salary = new_sal;
        cout << "Salary updated for Employee ID-" << id << " to " << salary << endl;
    }
};
int main() {
    string ans;
    int emp_id;
    string emp_name, emp_dept;
    float emp_sal, new_sal;
    cout << "Enter your Employee ID: ";
    cin >> emp_id;
    cout << "Enter your name: ";
    cin >> emp_name;
    cout << "Enter your department: ";
    cin >> emp_dept;
    cout << "Enter your salary: ";
    cin >> emp_sal;
    // Creating an employee object using the constructor to initialize employee details
    employee e1(emp_name, emp_id, emp_dept, emp_sal);
    cout << "Would you like to update your salary info? (yes/no): ";
    cin >> ans;
    if (ans == "yes" || ans == "YES" || ans == "Yes") {
        cout << "Enter your new salary: ";
        cin >> new_sal;
        e1.updatesal(new_sal);
        e1.display();
    }
    else if (ans == "no" || ans == "No" || ans == "NO") {
        e1.display();
    }
    return 0;
}


