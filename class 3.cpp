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
    void averageMarks()
    {
        cout << "Enter marks of CSE: ";
        cin >> CSE;
        cout << "Enter marks of EEE: ";
        cin >> EEE;
        cout << "Enter marks of ICT: ";
        cin >> ICT;
        cin.ignore();
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
    AverageOfMarks info[3];
    for (int i = 1; i < 3; i++)
    {
        info[i].getData();
        info[i].averageMarks();
      info[i].display();
    }



    return 0;
}
