#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter
    void setSalary(double s) {
        salary = s;
    }

    // Getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;

    t1.name = "Rita";                  
    t1.dept = "Computer Science";
    t1.subject = "Machine learning";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}