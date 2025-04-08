
#include <iostream>
using namespace std;
#define MAX_SIZE 8
class Stack
{
public :
    int top=-1;
    int arr[MAX_SIZE];
    void push(int x)
    {
        if( top >= MAX_SIZE - 1)
        {
            cout<<"Overflow ";
        }
      arr[++top] = x;
    }
 void pop() {
        if (top < 0) {
            cout << " Underflow" << endl;
        }
    arr[top--];
    }
};
int main()
{
    Stack obj;
    cout<<"Push element : ";
    for (int i = 1; i <= 8; i++)
    {
    obj.push(5);
    obj.push(4);
    obj.push(3);
    obj.push(6);

    }

    return 0;
}
