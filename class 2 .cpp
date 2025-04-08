#include <iostream>
using namespace std;
class AverageOfMarks
{
    string name,dept,id;
    //string dept;
    //string id;
    int CSE;
    int EEE;
    int ICT;
    double average;

public:
    void getData()
    {
        cout << "Enter Name Here: ";
        getline(cin, name);
        cout << "Enter Depertment Here: ";
        cin >> dept;
        cout << "Enter ID Here: ";
        cin >> id;
    }
    void averageMarks()
    {
        cout << "Enter marks of CSE: ";
        cin >> CSE;
        cout << "Enter marks of EEE: ";
        cin >> EEE;
        cout << "Enter marks of ICT: ";
        cin >> ICT;

        average = (CSE + EEE + ICT) / 3.0;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your depertment is: " << dept << endl;
        cout << "Your ID is: " << id << endl;
        cout << "Average Marks: " << average<<endl;
    }
};
int main()
{
    AverageOfMarks info;
    info.getData();
    info.averageMarks();
    info.display();
    return 0;
}
