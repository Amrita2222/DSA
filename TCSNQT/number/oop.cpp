#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // ✅ Default Constructor
    Teacher() {
        cout << "Hii I am Rita\n";
        dept = "Computer Science";
        salary = 0.0;
    }

    // ✅ Parameterized Constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // Method to change department
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter for salary
    void setSalary(double s) {
        salary = s;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }
};

int main() {
    // Using default constructor
    Teacher t1;
    t1.name = "Rita";
    t1.subject = "Machine Learning";
    t1.setSalary(25000);

    cout << "\nDefault Constructor Output:\n";
    cout << "Name: " << t1.name << endl;
    cout << "Dept: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    // Using parameterized constructor
    Teacher t2("Riya", "IT", "Data Structures", 30000);

    cout << "\nParameterized Constructor Output:\n";
    cout << "Name: " << t2.name << endl;
    cout << "Dept: " << t2.dept << endl;
    cout << "Subject: " << t2.subject << endl;
    cout << "Salary: " << t2.getSalary() << endl;

    return 0;
}
