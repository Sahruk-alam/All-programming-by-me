#include <iostream>
using namespace std;
class Largest
{
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter 1st number: ";
        cin >> a;
        cout << "Enter 2nd number: ";
        cin >> b;
    }
    void result()
    {
        if (a > b)
        {
            cout << "1st number is largest" << endl;
        }
        else if (b > a)
        {
            cout << "2nd number is largest" << endl;
        }
        else
        {
            cout << "Both are equal" << endl;
        }
    }
};
int main()
{
    Largest l;
    l.getData();
    l.result();
}
