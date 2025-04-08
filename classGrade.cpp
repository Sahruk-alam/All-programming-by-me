
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    string Class;
    int roll;
    double marks;

public:
    Student(const string& n, const string& sClass, int roll, double m) :
        name(n), Class(sClass), roll(roll), marks(m) {}

    char Grade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else if (marks>= 50) {
            return 'E';
        } else {
        return 'F';
        }
   }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << Class << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << Grade() << endl;
    }
};

int main() {

    string name, studentClass;
    int roll;
    double marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student class: ";
    cin >> studentClass;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks: ";
    cin >> marks;

    Student s(name, studentClass, roll, marks);

    s.displayInfo();


    return 0;
}
