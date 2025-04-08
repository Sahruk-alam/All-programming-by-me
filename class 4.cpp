#include <iostream>
using namespace std;
class AverageOfMarks
{
    string name;
    string dept;
    string ID;
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
        cin >> ID;
    }
    void averageMarks(int cse, int eee, int ict)
    {
        CSE = cse;
        EEE = eee;
        ICT = ict;
        average = (CSE + EEE + ICT) / 3.0;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your depertment is: " << dept << endl;
        cout << "Your ID is: " << ID << endl;
        cout << "Average Marks: " << average << endl;
    }
};
int main()
{
    AverageOfMarks info;

   info.getData();
   info.averageMarks(56,85 , 76);
        info.display();

    return 0;
}
