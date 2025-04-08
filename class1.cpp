#include <iostream>
using namespace std;
class details
{
    public:
    string name;
    string dept;
    int ID;
    void input()
    {
        cout << "Enter Name : ";
        cin>>name;
        cout << "Enter Depertment : ";
        cin >> dept;
        cout << "Enter ID : ";
        cin >> ID;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your depertment is: " << dept << endl;
        cout << "Your ID is: " << ID << endl;
    }
};
int main()
{
    details info;
    info.input();
    info.display();
    return 0;
}
