#include <iostream>
using namespace std;
#define MAX_SIZE 8
class Stack
{
public:
    int top = -1;
    int arr[MAX_SIZE];
    void push(int x)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Overflow ";
        }
        else{
                  arr[++top] = x;
                cout<<"Pushing element successful.\n";
 }
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            top--;
        }
    }
};

int main()
{
    Stack obj;
    cout << "Push element : \n";
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.push(6);
    obj.push(7);
    obj.push(8);

    cout << "\nPop elements: ";
    for (int i = -1; i <8; i++)
    {

    obj.pop();
    }

    return 0;
}
